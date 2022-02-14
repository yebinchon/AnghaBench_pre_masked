
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct acl_entry {int ae_perm; int ae_tag; int ae_id; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef TYPE_1__* acl_t ;
struct TYPE_3__ {struct acl ats_acl; } ;






 int VAR_0 ;


 int VAR_1 ;

int
FUNC_0(acl_t VAR_2)
{
 struct acl *VAR_3;
 struct acl_entry *VAR_4;
 uid_t VAR_5=0, VAR_6=0;
 int VAR_7 = 128;
 int VAR_8 = 0;
 int VAR_9=0, VAR_10=0, VAR_11=0,
  VAR_12=0, VAR_13=0, VAR_14=0;

 VAR_3 = &VAR_2->ats_acl;



 while (VAR_8 < VAR_3->acl_cnt) {
  VAR_4 = &VAR_3->acl_entry[VAR_8];

  if ((VAR_4->ae_perm | VAR_0) != VAR_0)
   return (VAR_1);

  switch(VAR_4->ae_tag) {
  case 128:


   if (VAR_7 > 128)
    return (VAR_1);
   VAR_7 = 129;
   VAR_9++;
   break;

  case 129:

   if (VAR_7 > 129)
    return (VAR_1);
   VAR_7 = 129;
   if (VAR_10 && (VAR_4->ae_id <= VAR_5))
    return (VAR_1);
   VAR_5 = VAR_4->ae_id;
   VAR_10++;
   break;

  case 132:


   if (VAR_7 > 132)
    return (VAR_1);
   VAR_7 = 133;
   VAR_11++;
   break;

  case 133:

   if (VAR_7 > 133)
    return (VAR_1);
   VAR_7 = 133;
   if (VAR_12 && (VAR_4->ae_id <= VAR_6))
    return (VAR_1);
   VAR_6 = VAR_4->ae_id;
   VAR_12++;
   break;

  case 131:

   if (VAR_7 > 131)
    return (VAR_1);
   VAR_7 = 131;
   VAR_13++;
   break;

  case 130:

   if (VAR_7 > 130)
    return (VAR_1);
   VAR_7 = 130;
   VAR_14++;
   break;

  default:

   return (VAR_1);
  }
  VAR_8++;
 }

 if (VAR_9 != 1)
  return (VAR_1);

 if (VAR_11 != 1)
  return (VAR_1);

 if (VAR_13 != 0 && VAR_13 != 1)
  return (VAR_1);

 if (VAR_14 != 1)
  return (VAR_1);

 return (0);
}
