
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int acl_type_t ;
typedef TYPE_1__* acl_t ;
struct TYPE_8__ {int acl_maxcnt; } ;
struct TYPE_7__ {TYPE_6__ ats_acl; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;

acl_t
FUNC_5(int VAR_1, acl_type_t VAR_2)
{
 acl_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_2 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3->ats_acl);
 if (VAR_4) {
  FUNC_3(VAR_3);
  return (((void*)0));
 }

 VAR_3->ats_acl.acl_maxcnt = VAR_0;
 FUNC_1(VAR_3, VAR_2);

 return (VAR_3);
}
