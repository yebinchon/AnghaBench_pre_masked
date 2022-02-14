
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mode_t ;
typedef TYPE_1__* acl_t ;
struct TYPE_6__ {int ats_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static acl_t
FUNC_4(const acl_t VAR_4, int VAR_5)
{
 acl_t VAR_6;
 mode_t VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_3 = VAR_2;
  return (((void*)0));
 }

 FUNC_0(VAR_6, VAR_0);

 FUNC_2(&VAR_7, &(VAR_4->ats_acl));
 FUNC_3(&(VAR_6->ats_acl), VAR_7, VAR_5);

 return (VAR_6);
}
