
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int nvlist_t ;
struct TYPE_6__ {scalar_t__ fa_magic; int * fa_chann; } ;
typedef TYPE_1__ fileargs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_1__*,char const*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*,struct stat*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct stat*,void const*,size_t) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,char*,size_t*) ;
 char* FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

int
FUNC_10(fileargs_t *VAR_5, const char *VAR_6, struct stat *VAR_7)
{
 nvlist_t *VAR_8;
 const void *VAR_9;
 size_t VAR_10;
 char *VAR_11;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_5->fa_magic == VAR_3);

 if (VAR_6 == ((void*)0)) {
  VAR_4 = VAR_1;
  return (-1);
 }

 if (VAR_7 == ((void*)0)) {
  VAR_4 = VAR_0;
  return (-1);
 }

 if (VAR_5->fa_chann == ((void*)0)) {
  VAR_4 = VAR_2;
  return (-1);
 }

 if (FUNC_2(VAR_5, VAR_6, VAR_7) != -1)
  return (0);

 VAR_8 = FUNC_1(VAR_5, VAR_6, "lstat");
 if (VAR_8 == ((void*)0))
  return (-1);

 VAR_9 = FUNC_7(VAR_8, "stat", &VAR_10);
 FUNC_0(VAR_10 == sizeof(*VAR_7));
 FUNC_5(VAR_7, VAR_9, VAR_10);

 VAR_11 = FUNC_8(VAR_8, "cmd");
 if (FUNC_9(VAR_11, "cache") == 0)
  FUNC_3(VAR_5, VAR_8);
 else
  FUNC_6(VAR_8);
 FUNC_4(VAR_11);

 return (0);
}
