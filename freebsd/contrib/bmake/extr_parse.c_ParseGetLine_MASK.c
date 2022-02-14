
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* P_ptr; char* P_end; int lineno; int * nextbuf; } ;
typedef TYPE_1__ IFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static char *
FUNC_2(int VAR_5, int *VAR_6)
{
    IFile *VAR_7 = VAR_4;
    char *VAR_8;
    char VAR_9;
    char *VAR_10;
    char *VAR_11;
    char *VAR_12;
    char *VAR_13;
    char *VAR_14;


    for (;;) {
 VAR_7->lineno++;
 VAR_10 = VAR_7->P_ptr;
 VAR_8 = VAR_10;
 VAR_11 = VAR_10;
 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 for (;;) {
     if (VAR_7->P_end != ((void*)0) && VAR_8 == VAR_7->P_end) {

  VAR_9 = 0;
  break;
     }
     VAR_9 = *VAR_8;
     if (VAR_9 == 0 || (VAR_9 == '\\' && VAR_8[1] == 0)) {
  if (VAR_7->P_end == ((void*)0))

      break;

  while (VAR_8++ < VAR_7->P_end) {
      if ((VAR_9 = *VAR_8) == '\n') {
   if (VAR_8 > VAR_10 && VAR_8[-1] == '\\')
       continue;
   FUNC_0(VAR_3,
       "Zero byte read from file, skipping rest of line.");
   break;
      }
  }
  if (VAR_7->nextbuf != ((void*)0)) {




      break;
  }
  FUNC_0(VAR_0, "Zero byte read from file");
  return ((void*)0);
     }

     if (VAR_9 == '\\') {

  if (VAR_12 == ((void*)0))
      VAR_12 = VAR_8;
  if (VAR_8[1] == '\n')
      VAR_7->lineno++;
  VAR_8 += 2;
  VAR_11 = VAR_8;
  continue;
     }
     if (VAR_9 == '#' && VAR_13 == ((void*)0)) {


  if (!(VAR_8 > VAR_10 && VAR_8[-1] == '['))
      VAR_13 = VAR_11;
     }
     VAR_8++;
     if (VAR_9 == '\n')
  break;
     if (!FUNC_1((unsigned char)VAR_9))

  VAR_11 = VAR_8;
 }


 VAR_7->P_ptr = VAR_8;


 if (VAR_11 == VAR_10 || VAR_13 == VAR_10) {
     if (VAR_9 == 0)

  return ((void*)0);

     continue;
 }


 *VAR_11 = 0;

 if (VAR_5 & VAR_1) {

     *VAR_6 = VAR_11 - VAR_10;
     return VAR_10;
 }

 if (VAR_5 & VAR_2) {

     if (VAR_10[0] != '.')
  continue;

 }
 break;
    }


    if (VAR_13 != ((void*)0) && VAR_10[0] != '\t') {
 VAR_11 = VAR_13;
 *VAR_11 = 0;
    }


    if (VAR_12 == ((void*)0)) {
 *VAR_6 = VAR_11 - VAR_10;
 return VAR_10;
    }


    VAR_14 = VAR_8 = VAR_12;
    VAR_12 = VAR_10;
    for (; ; *VAR_14++ = VAR_9) {
 VAR_9 = *VAR_8++;
 if (VAR_9 != '\\') {
     if (VAR_9 == 0)
  break;
     continue;
 }

 VAR_9 = *VAR_8++;
 if (VAR_9 == 0) {

     VAR_14--;
     break;
 }

 if (VAR_9 == '#' && VAR_10[0] != '\t')

     continue;

 if (VAR_9 != '\n') {

     *VAR_14++ = '\\';

     VAR_12 = VAR_14 + 1;
     continue;
 }


 while (VAR_8[0] == ' ' || VAR_8[0] == '\t')
     VAR_8++;
 VAR_9 = ' ';
    }


    while (VAR_14 > VAR_12 && FUNC_1((unsigned char)VAR_14[-1]))
 VAR_14--;

    *VAR_14 = 0;
    *VAR_6 = VAR_14 - VAR_10;
    return VAR_10;
}
