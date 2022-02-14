
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_6__ {scalar_t__ fa_magic; int * fa_chann; } ;
typedef TYPE_1__ fileargs_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_1__*,char const*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

int
FUNC_9(fileargs_t *VAR_4, const char *VAR_5)
{
 int VAR_6;
 nvlist_t *VAR_7;
 char *VAR_8;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->fa_magic == VAR_2);

 if (VAR_5 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-1);
 }

 if (VAR_4->fa_chann == ((void*)0)) {
  VAR_3 = VAR_1;
  return (-1);
 }

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6 != -1)
  return (VAR_6);

 VAR_7 = FUNC_1(VAR_4, VAR_5, "open");
 if (VAR_7 == ((void*)0))
  return (-1);

 VAR_6 = FUNC_6(VAR_7, "fd");
 VAR_8 = FUNC_7(VAR_7, "cmd");
 if (FUNC_8(VAR_8, "cache") == 0)
  FUNC_3(VAR_4, VAR_7);
 else
  FUNC_5(VAR_7);
 FUNC_4(VAR_8);

 return (VAR_6);
}
