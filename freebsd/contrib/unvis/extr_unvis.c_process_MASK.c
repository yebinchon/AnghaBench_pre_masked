
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char) ;
 int const FUNC_3 (char*,char,int*,int) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7;
 int VAR_8 = 0;
 char VAR_9;

 while ((VAR_6 = FUNC_1(VAR_2)) != VAR_0) {
  VAR_5++;
 again:
  switch(VAR_7 = FUNC_3(&VAR_9, (char)VAR_6, &VAR_8, VAR_4)) {
  case 129:
   (void)FUNC_2(VAR_9);
   break;
  case 128:
   (void)FUNC_2(VAR_9);
   goto again;
  case 130:
   FUNC_4("%s: offset: %d: can't decode", VAR_3, VAR_5);
   VAR_8 = 0;
   break;
  case 0:
  case 131:
   break;
  default:
   FUNC_0(1, "bad return value (%d), can't happen", VAR_7);

  }
 }
 if (FUNC_3(&VAR_9, (char)0, &VAR_8, VAR_4 | VAR_1) == 129)
  (void)FUNC_2(VAR_9);
}
