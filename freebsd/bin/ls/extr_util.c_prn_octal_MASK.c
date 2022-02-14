
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (int*,char const*,int ,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char const) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int) ;

int
FUNC_7(const char *VAR_3)
{
 static const char VAR_4[] = "\\\\\"\"\aa\bb\ff\nn\rr\tt\vv";
 const char *VAR_5;
 mbstate_t VAR_6;
 wchar_t VAR_7;
 size_t VAR_8;
 unsigned char VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_12 = 0;
 while ((VAR_8 = FUNC_1(&VAR_7, VAR_3, VAR_0, &VAR_6)) != 0) {
  VAR_10 = VAR_8 != (size_t)-1 && VAR_8 != (size_t)-2;
  if (VAR_10 && FUNC_0(VAR_7) && VAR_7 != L'\"' && VAR_7 != L'\\') {
   for (VAR_11 = 0; VAR_11 < (int)VAR_8; VAR_11++)
    FUNC_3((unsigned char)VAR_3[VAR_11]);
   VAR_12 += FUNC_6(VAR_7);
  } else if (VAR_10 && VAR_2 &&



      VAR_7 <= (wchar_t)VAR_1 &&
      (VAR_5 = FUNC_4(VAR_4, (char)VAR_7)) != ((void*)0)) {
   FUNC_3('\\');
   FUNC_3(VAR_5[1]);
   VAR_12 += 2;
  } else {
   if (VAR_10)
    VAR_13 = VAR_8;
   else if (VAR_8 == (size_t)-1)
    VAR_13 = 1;
   else
    VAR_13 = FUNC_5(VAR_3);
   for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
    VAR_9 = (unsigned char)VAR_3[VAR_11];
    FUNC_3('\\');
    FUNC_3('0' + (VAR_9 >> 6));
    FUNC_3('0' + ((VAR_9 >> 3) & 7));
    FUNC_3('0' + (VAR_9 & 7));
    VAR_12 += 4;
   }
  }
  if (VAR_8 == (size_t)-2)
   break;
  if (VAR_8 == (size_t)-1) {
   FUNC_2(&VAR_6, 0, sizeof(VAR_6));
   VAR_3++;
  } else
   VAR_3 += VAR_8;
 }
 return (VAR_12);
}
