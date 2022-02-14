
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sym255 ;
typedef int sym128 ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,char*,char*) ;
 scalar_t__ FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;
 struct archive* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct archive*,unsigned char*,size_t,size_t*) ;
 scalar_t__ FUNC_6 (struct archive*,int) ;
 scalar_t__ FUNC_7 (struct archive*,int) ;
 scalar_t__ FUNC_8 (struct archive*) ;
 scalar_t__ FUNC_9 (struct archive*,int *,char*,int *) ;
 scalar_t__ FUNC_10 (struct archive*,char const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct archive*,int ,int ) ;

__attribute__((used)) static int
FUNC_14(unsigned char *VAR_1, size_t VAR_2, size_t *VAR_3,
    const char *VAR_4)
{
 struct archive *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 const int VAR_9[] = {
     0, 1, 3, 5, 7, 8, 9, 29, 30, 31, 32,
  62, 63, 64, 65, 101, 102, 103, 104,
     191, 192, 193, 194, 204, 205, 206, 207, 208,
  252, 253, 254, 255,
     -1 };
 char VAR_10[256];
 char VAR_11[256];
 char VAR_12[2];
 char VAR_13[129];
 char VAR_14[256];


 FUNC_11((VAR_5 = FUNC_4()) != ((void*)0));
 FUNC_12(0 == FUNC_8(VAR_5));
 FUNC_12(0 == FUNC_1(VAR_5));
 FUNC_12(0 == FUNC_9(VAR_5, ((void*)0), "pad", ((void*)0)));
 if (VAR_4)
  FUNC_12(0 == FUNC_10(VAR_5, VAR_4));
 FUNC_12(0 == FUNC_7(VAR_5, 1));
 FUNC_12(0 == FUNC_6(VAR_5, 1));
 FUNC_12(0 == FUNC_5(VAR_5, VAR_1, VAR_2, VAR_3));

 VAR_12[0] = 'x';
 VAR_12[1] = '\0';
 for (VAR_6 = 0; VAR_6 < (int)sizeof(VAR_13)-2; VAR_6++)
  VAR_13[VAR_6] = 'a';
 VAR_13[sizeof(VAR_13)-2] = 'x';
 VAR_13[sizeof(VAR_13)-1] = '\0';
 for (VAR_6 = 0; VAR_6 < (int)sizeof(VAR_14)-2; VAR_6++)
  VAR_14[VAR_6] = 'a';
 VAR_14[sizeof(VAR_14)-2] = 'x';
 VAR_14[sizeof(VAR_14)-1] = '\0';

 VAR_8 = 0;
 for (VAR_6 = 0; VAR_9[VAR_6] >= 0; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_9[VAR_6]; VAR_7++) {
   VAR_10[VAR_7] = 'a';
   VAR_11[VAR_7] = 'A';
  }
  if (VAR_7 > 0) {
   VAR_10[VAR_7] = '\0';
   VAR_11[VAR_7] = '\0';
   FUNC_0(VAR_5, VAR_10, ((void*)0));
   FUNC_0(VAR_5, VAR_11, VAR_12);
   VAR_8 += 2;
  }
  if (VAR_7 < 254) {
   VAR_10[VAR_7] = '.';
   VAR_10[VAR_7+1] = 'c';
   VAR_10[VAR_7+2] = '\0';
   VAR_11[VAR_7] = '.';
   VAR_11[VAR_7+1] = 'C';
   VAR_11[VAR_7+2] = '\0';
   FUNC_0(VAR_5, VAR_10, VAR_13);
   FUNC_0(VAR_5, VAR_11, VAR_14);
   VAR_8 += 2;
  }
  if (VAR_7 < 252) {
   VAR_10[VAR_7] = '.';
   VAR_10[VAR_7+1] = 'p';
   VAR_10[VAR_7+2] = 'n';
   VAR_10[VAR_7+3] = 'g';
   VAR_10[VAR_7+4] = '\0';
   VAR_11[VAR_7] = '.';
   VAR_11[VAR_7+1] = 'P';
   VAR_11[VAR_7+2] = 'N';
   VAR_11[VAR_7+3] = 'G';
   VAR_11[VAR_7+4] = '\0';
   FUNC_0(VAR_5, VAR_10, ((void*)0));
   FUNC_0(VAR_5, VAR_11, VAR_12);
   VAR_8 += 2;
  }
  if (VAR_7 < 251) {
   VAR_10[VAR_7] = '.';
   VAR_10[VAR_7+1] = 'j';
   VAR_10[VAR_7+2] = 'p';
   VAR_10[VAR_7+3] = 'e';
   VAR_10[VAR_7+4] = 'g';
   VAR_10[VAR_7+5] = '\0';
   VAR_11[VAR_7] = '.';
   VAR_11[VAR_7+1] = 'J';
   VAR_11[VAR_7+2] = 'P';
   VAR_11[VAR_7+3] = 'E';
   VAR_11[VAR_7+4] = 'G';
   VAR_11[VAR_7+5] = '\0';
   FUNC_0(VAR_5, VAR_10, VAR_13);
   FUNC_0(VAR_5, VAR_11, VAR_14);
   VAR_8 += 2;
  }
 }


 FUNC_13(VAR_5, VAR_0, FUNC_2(VAR_5));
 FUNC_13(VAR_5, VAR_0, FUNC_3(VAR_5));

 return (VAR_8);
}
