
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct acl {int acl_cnt; TYPE_1__* acl_entry; } ;
typedef TYPE_2__* acl_t ;
struct TYPE_11__ {struct acl ats_acl; } ;
struct TYPE_10__ {int ae_tag; int ae_perm; int ae_id; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_6 ;

int
FUNC_5(acl_t *VAR_7)
{
 struct acl *VAR_8, *VAR_9;
 acl_t VAR_10;
 int VAR_11, VAR_12, VAR_13;
 if (VAR_7 == ((void*)0) || *VAR_7 == ((void*)0)) {
  VAR_6 = VAR_4;
  return (-1);
 }

 if (!FUNC_1(*VAR_7, VAR_0)) {
  VAR_6 = VAR_4;
  return (-1);
 }
 FUNC_0(*VAR_7, VAR_0);

 VAR_8 = &(*VAR_7)->ats_acl;
 if ((VAR_8->acl_cnt < 3) || (VAR_8->acl_cnt > VAR_1)) {
  VAR_6 = VAR_4;
  return (-1);
 }

 VAR_10 = FUNC_2(*VAR_7);
 if (VAR_10 == ((void*)0))
  return (-1);
 VAR_9 = &VAR_10->ats_acl;

 VAR_12 = 0;
 VAR_13 = -1;


 for (VAR_11 = 0; VAR_11 < VAR_9->acl_cnt; VAR_11++) {
  switch(VAR_9->acl_entry[VAR_11].ae_tag) {
  case 128:
  case 131:
  case 130:
   VAR_12 |=
       VAR_9->acl_entry[VAR_11].ae_perm & VAR_2;
   break;
  case 129:
   VAR_13 = VAR_11;
   break;
  }
 }


 if (VAR_13 != -1)
  VAR_9->acl_entry[VAR_13].ae_perm = VAR_12;
 else {

  if (VAR_9->acl_cnt == VAR_1) {
   VAR_6 = VAR_5;
   FUNC_3(VAR_10);
   return (-1);
  }

  VAR_9->acl_entry[VAR_9->acl_cnt].ae_tag = 129;
  VAR_9->acl_entry[VAR_9->acl_cnt].ae_id =
      VAR_3;
  VAR_9->acl_entry[VAR_9->acl_cnt].ae_perm =
      VAR_12;
  VAR_9->acl_cnt++;
 }

 if (FUNC_4(VAR_10) == -1) {
  VAR_6 = VAR_4;
  FUNC_3(VAR_10);
  return (-1);
 }

 **VAR_7 = *VAR_10;
 FUNC_3(VAR_10);

 return (0);
}
