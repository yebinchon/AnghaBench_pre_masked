
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int nvlist_t ;
struct TYPE_3__ {scalar_t__ fa_magic; int * fa_cache; } ;
typedef TYPE_1__ fileargs_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (struct stat*,void const*,size_t) ;
 int FUNC_3 (int const*,char*) ;
 void* FUNC_4 (int const*,char*,size_t*) ;

__attribute__((used)) static int
FUNC_5(fileargs_t *VAR_1, const char *VAR_2, struct stat *VAR_3)
{
 const nvlist_t *VAR_4;
 size_t VAR_5;
 const void *VAR_6;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->fa_magic == VAR_0);
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_1->fa_cache == ((void*)0))
  return (-1);

 VAR_4 = FUNC_1(VAR_1->fa_cache, VAR_2, ((void*)0));
 if (VAR_4 == ((void*)0))
  return (-1);

 if (!FUNC_3(VAR_4, "stat")) {
  return (-1);
 }

 VAR_6 = FUNC_4(VAR_4, "stat", &VAR_5);
 FUNC_0(VAR_5 == sizeof(*VAR_3));
 FUNC_2(VAR_3, VAR_6, VAR_5);

 return (0);
}
