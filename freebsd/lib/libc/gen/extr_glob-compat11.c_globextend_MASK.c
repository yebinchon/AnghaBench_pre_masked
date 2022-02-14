
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct glob_limit {scalar_t__ l_path_lim; scalar_t__ l_string_cnt; } ;
struct TYPE_3__ {int gl_flags; scalar_t__ gl_matchc; int gl_pathc; int gl_offs; char** gl_pathv; } ;
typedef TYPE_1__ glob11_t ;
typedef int Char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const*,char*,size_t) ;
 char* FUNC_2 (size_t) ;
 char** FUNC_3 (char**,size_t,int) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(const Char *VAR_7, glob11_t *VAR_8, struct glob_limit *VAR_9,
    const char *VAR_10)
{
 char **VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 char *VAR_15;
 const Char *VAR_16;

 if ((VAR_8->gl_flags & VAR_2) &&
     VAR_8->gl_matchc > VAR_9->l_path_lim) {
  VAR_6 = VAR_0;
  return (VAR_4);
 }

 VAR_13 = 2 + VAR_8->gl_pathc + VAR_8->gl_offs;

 VAR_11 = FUNC_3(VAR_8->gl_pathv, VAR_13, sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return (VAR_4);

 if (VAR_8->gl_pathv == ((void*)0) && VAR_8->gl_offs > 0) {

  VAR_11 += VAR_8->gl_offs;
  for (VAR_12 = VAR_8->gl_offs + 1; --VAR_12 > 0; )
   *--VAR_11 = ((void*)0);
 }
 VAR_8->gl_pathv = VAR_11;

 if (VAR_10 != ((void*)0))
  VAR_15 = FUNC_4(VAR_10);
 else {
  for (VAR_16 = VAR_7; *VAR_16++ != VAR_1;)
   continue;
  VAR_14 = VAR_5 * (size_t)(VAR_16 - VAR_7);
  if ((VAR_15 = FUNC_2(VAR_14)) != ((void*)0)) {
   if (FUNC_1(VAR_7, VAR_15, VAR_14)) {
    FUNC_0(VAR_15);
    VAR_6 = VAR_0;
    return (VAR_4);
   }
  }
 }
 if (VAR_15 != ((void*)0)) {
  VAR_9->l_string_cnt += FUNC_5(VAR_15) + 1;
  if ((VAR_8->gl_flags & VAR_2) &&
      VAR_9->l_string_cnt >= VAR_3) {
   FUNC_0(VAR_15);
   VAR_6 = VAR_0;
   return (VAR_4);
  }
  VAR_11[VAR_8->gl_offs + VAR_8->gl_pathc++] = VAR_15;
 }
 VAR_11[VAR_8->gl_offs + VAR_8->gl_pathc] = ((void*)0);
 return (VAR_15 == ((void*)0) ? VAR_4 : 0);
}
