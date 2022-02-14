
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {scalar_t__ fa_magic; int fa_fdflags; int * fa_cache; } ;
typedef TYPE_1__ fileargs_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char const*) ;

__attribute__((used)) static int
FUNC_8(fileargs_t *VAR_4, const char *VAR_5)
{
 int VAR_6;
 const nvlist_t *VAR_7;
 nvlist_t *VAR_8;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->fa_magic == VAR_0);
 FUNC_0(VAR_5 != ((void*)0));

 if (VAR_4->fa_cache == ((void*)0))
  return (-1);

 if ((VAR_4->fa_fdflags & VAR_3) != 0)
  return (-1);

 VAR_7 = FUNC_2(VAR_4->fa_cache, VAR_5, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (-1);

 VAR_8 = FUNC_7(VAR_4->fa_cache, VAR_5);

 if (!FUNC_5(VAR_8, "fd")) {
  FUNC_4(VAR_8);
  return (-1);
 }

 VAR_6 = FUNC_6(VAR_8, "fd");
 FUNC_4(VAR_8);

 if ((VAR_4->fa_fdflags & VAR_2) != VAR_2) {
  if (FUNC_3(VAR_6, VAR_1, VAR_4->fa_fdflags) == -1) {
   FUNC_1(VAR_6);
   return (-1);
  }
 }

 return (VAR_6);
}
