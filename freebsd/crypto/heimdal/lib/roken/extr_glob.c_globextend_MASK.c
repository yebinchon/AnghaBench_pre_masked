
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gl_pathc; int gl_offs; char** gl_pathv; int gl_flags; } ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*,char*) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (char**,size_t) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_4, glob_t *VAR_5, size_t *VAR_6)
{
 char **VAR_7;
 int VAR_8;
 size_t VAR_9, VAR_10;
 char *VAR_11;
 const Char *VAR_12;

 VAR_9 = sizeof(*VAR_7) * (2 + VAR_5->gl_pathc + VAR_5->gl_offs);
 VAR_7 = VAR_5->gl_pathv ?
      FUNC_2(VAR_5->gl_pathv, VAR_9) :
      FUNC_1(VAR_9);
 if (VAR_7 == ((void*)0))
  return(VAR_2);

 if (VAR_5->gl_pathv == ((void*)0) && VAR_5->gl_offs > 0) {

  VAR_7 += VAR_5->gl_offs;
  for (VAR_8 = VAR_5->gl_offs; --VAR_8 >= 0; )
   *--VAR_7 = ((void*)0);
 }
 VAR_5->gl_pathv = VAR_7;

 for (VAR_12 = VAR_4; *VAR_12++;)
  continue;
 VAR_10 = (size_t)(VAR_12 - VAR_4);
 *VAR_6 += VAR_10;
 if ((VAR_11 = FUNC_1(VAR_10)) != ((void*)0)) {
  FUNC_0(VAR_4, VAR_11);
  VAR_7[VAR_5->gl_offs + VAR_5->gl_pathc++] = VAR_11;
 }
 VAR_7[VAR_5->gl_offs + VAR_5->gl_pathc] = ((void*)0);

 if ((VAR_5->gl_flags & VAR_1) && (VAR_9 + *VAR_6) >= VAR_0) {
  VAR_3 = 0;
  return(VAR_2);
 }

 return(VAR_11 == ((void*)0) ? VAR_2 : 0);
}
