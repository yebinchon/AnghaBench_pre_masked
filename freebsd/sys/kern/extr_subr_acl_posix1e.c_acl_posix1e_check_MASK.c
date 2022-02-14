
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acl {int acl_cnt; TYPE_1__* acl_entry; } ;
struct TYPE_2__ {int ae_tag; void* ae_id; int ae_perm; } ;





 int VAR_0 ;

 int VAR_1 ;
 void* VAR_2 ;


 int VAR_3 ;

int
FUNC_0(struct acl *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;
 VAR_5 = VAR_6 = VAR_7 = VAR_8 =
     VAR_9 = VAR_10 = 0;
 if (VAR_4->acl_cnt > VAR_0)
  return (VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_4->acl_cnt; VAR_11++) {



  switch(VAR_4->acl_entry[VAR_11].ae_tag) {
  case 128:
   VAR_4->acl_entry[VAR_11].ae_id = VAR_2;
   if (VAR_4->acl_entry[VAR_11].ae_id != VAR_2)
    return (VAR_3);
   VAR_5++;
   break;
  case 132:
   VAR_4->acl_entry[VAR_11].ae_id = VAR_2;
   if (VAR_4->acl_entry[VAR_11].ae_id != VAR_2)
    return (VAR_3);
   VAR_7++;
   break;
  case 129:
   if (VAR_4->acl_entry[VAR_11].ae_id == VAR_2)
    return (VAR_3);
   VAR_6++;
   break;
  case 133:
   if (VAR_4->acl_entry[VAR_11].ae_id == VAR_2)
    return (VAR_3);
   VAR_8++;
   break;
  case 130:
   VAR_4->acl_entry[VAR_11].ae_id = VAR_2;
   if (VAR_4->acl_entry[VAR_11].ae_id != VAR_2)
    return (VAR_3);
   VAR_10++;
   break;
  case 131:
   VAR_4->acl_entry[VAR_11].ae_id = VAR_2;
   if (VAR_4->acl_entry[VAR_11].ae_id != VAR_2)
    return (VAR_3);
   VAR_9++;
   break;
  default:
   return (VAR_3);
  }



  if ((VAR_4->acl_entry[VAR_11].ae_perm | VAR_1) !=
      VAR_1)
   return (VAR_3);
 }
 if ((VAR_5 != 1) || (VAR_7 != 1) ||
     (VAR_10 != 1) || (VAR_9 != 0 && VAR_9 != 1))
  return (VAR_3);
 if (((VAR_8 != 0) || (VAR_6 != 0)) &&
     (VAR_9 != 1))
  return (VAR_3);
 return (0);
}
