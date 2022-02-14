
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,char const*,char const) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_9)
{
 const char *VAR_10;
 int VAR_11;

 VAR_11 = 0;

 VAR_10 = FUNC_3(VAR_9, ':');
 if (VAR_10 != ((void*)0)) {
  for (VAR_10++; FUNC_1((int) *VAR_10); VAR_10++) {

   int VAR_12 = *VAR_10;
   if (FUNC_2(VAR_12))
    VAR_12 = FUNC_4(VAR_12);
   switch (VAR_12) {
   case 'a':
    VAR_11 |= VAR_0;
    break;
   case 'b':
    VAR_11 |= VAR_1;
    break;
   case 'g':
    VAR_11 |= VAR_2;
    break;
   case 'n':
    VAR_11 |= VAR_4;
    break;
   case 'd':
    VAR_11 |= VAR_7;
    break;
   case 't':

    if ((VAR_11 & (VAR_6|VAR_4)) == 0)
     VAR_11 |= VAR_7;
    break;
   case 's':
    VAR_11 |= VAR_6;
    break;
   case 'h':
    VAR_11 |= VAR_3;
    break;
   case 'q':
    VAR_11 |= VAR_5;
    break;
   case 'v':

    VAR_11 |= VAR_8;
    break;
   default:
    FUNC_0(-1, "%s: Invalid mode attribute %c\n",
        VAR_9, *VAR_10);
   }
  }
 }
 return VAR_11;
}
