
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int acl_type_t ;
typedef TYPE_1__* acl_t ;
struct TYPE_6__ {int ats_acl; scalar_t__ ats_cur_entry; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_5(int VAR_2, acl_t VAR_3, acl_type_t VAR_4)
{

 if (VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 VAR_4 = FUNC_2(VAR_4);
 if (FUNC_1(VAR_3, VAR_4)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 if (FUNC_3(VAR_3, VAR_4))
  FUNC_4(VAR_3);

 VAR_3->ats_cur_entry = 0;

 return (FUNC_0(VAR_2, VAR_4, &VAR_3->ats_acl));
}
