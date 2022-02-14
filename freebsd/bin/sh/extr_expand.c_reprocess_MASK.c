
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worddest {int dummy; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char,int,char*,struct worddest*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* VAR_5 ;
 int FUNC_5 (char*,char*,size_t) ;
 char* FUNC_6 () ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,int,struct worddest*) ;

__attribute__((used)) static void
FUNC_9(int VAR_6, int VAR_7, int VAR_8, int VAR_9,
    struct worddest *VAR_10)
{
 static char *VAR_11 = ((void*)0);
 static size_t VAR_12 = 0;
 char *VAR_13;
 size_t VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_6() + VAR_6;
 VAR_14 = VAR_5 - VAR_13;
 if (VAR_14 >= VAR_4 / 2 || VAR_14 > VAR_3)
  FUNC_2();
 VAR_1;
 if (VAR_14 >= VAR_12) {
  FUNC_3(VAR_11);
  VAR_11 = ((void*)0);
 }
 if (VAR_12 < 128)
  VAR_12 = 128;
 while (VAR_14 >= VAR_12)
  VAR_12 <<= 1;
 if (VAR_11 == ((void*)0))
  VAR_11 = FUNC_4(VAR_12);
 VAR_2;
 FUNC_5(VAR_11, VAR_13, VAR_14);
 VAR_11[VAR_14] = '\0';
 FUNC_1(-(ptrdiff_t)VAR_14, VAR_5);
 for (VAR_15 = 0;;) {
  VAR_16 = FUNC_7(VAR_11 + VAR_15);
  FUNC_8(VAR_11 + VAR_15, VAR_7, VAR_8, VAR_9, VAR_10);
  VAR_15 += VAR_16 + 1;
  if (VAR_15 == VAR_14 + 1)
   break;
  if (VAR_7 & VAR_0 && (VAR_9 || (VAR_16 > 0 && VAR_15 < VAR_14)))
   FUNC_0('\0', VAR_7, VAR_5, VAR_10);
 }
}
