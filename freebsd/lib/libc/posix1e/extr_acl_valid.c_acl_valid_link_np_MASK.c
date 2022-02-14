
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int acl_type_t ;
typedef TYPE_1__* acl_t ;
struct TYPE_5__ {int ats_acl; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_4(const char *VAR_2, acl_type_t VAR_3, acl_t VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 VAR_3 = FUNC_1(VAR_3);
 if (FUNC_2(VAR_4, VAR_3))
  FUNC_3(VAR_4);

 return (FUNC_0(VAR_2, VAR_3, &VAR_4->ats_acl));
}
