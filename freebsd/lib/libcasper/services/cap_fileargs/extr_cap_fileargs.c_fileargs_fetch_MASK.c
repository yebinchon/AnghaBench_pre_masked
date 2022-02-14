
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {int fa_chann; } ;
typedef TYPE_1__ fileargs_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char const*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static nvlist_t*
FUNC_6(fileargs_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 nvlist_t *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 VAR_5 = FUNC_3(VAR_0);
 FUNC_2(VAR_5, "cmd", VAR_4);
 FUNC_2(VAR_5, "name", VAR_3);

 VAR_5 = FUNC_1(VAR_2->fa_chann, VAR_5);
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 if (FUNC_5(VAR_5, "error") != 0) {
  VAR_6 = (int)FUNC_5(VAR_5, "error");
  FUNC_4(VAR_5);
  VAR_1 = VAR_6;
  return (((void*)0));
 }

 return (VAR_5);
}
