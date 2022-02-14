
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct passwd {char* pw_dir; } ;
struct TYPE_3__ {int gl_flags; } ;
typedef TYPE_1__ glob_t ;
typedef scalar_t__ Char ;


 char VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 struct passwd* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (int ) ;

__attribute__((used)) static const Char *
FUNC_4(const Char *VAR_4, Char *VAR_5, glob_t *VAR_6)
{
 struct passwd *VAR_7;
 char *VAR_8;
 const Char *VAR_9;
 Char *VAR_10;

 if (*VAR_4 != VAR_2 || !(VAR_6->gl_flags & VAR_3))
  return VAR_4;


 for (VAR_9 = VAR_4 + 1, VAR_8 = (char *) VAR_5; *VAR_9 && *VAR_9 != VAR_1;
      *VAR_8++ = *VAR_9++)
  continue;

 *VAR_8 = VAR_0;

 if (((char *) VAR_5)[0] == VAR_0) {




  if ((VAR_8 = FUNC_0("HOME")) == ((void*)0)) {
   if ((VAR_7 = FUNC_3(FUNC_1())) == ((void*)0))
    return VAR_4;
   else
    VAR_8 = VAR_7->pw_dir;
  }
 }
 else {



  if ((VAR_7 = FUNC_2((char*) VAR_5)) == ((void*)0))
   return VAR_4;
  else
   VAR_8 = VAR_7->pw_dir;
 }


 for (VAR_10 = VAR_5; *VAR_8; *VAR_10++ = *VAR_8++)
  continue;


 while ((*VAR_10++ = *VAR_9++) != VAR_0)
  continue;

 return VAR_5;
}
