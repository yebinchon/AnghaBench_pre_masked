
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char***,size_t*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, int VAR_1, int VAR_2,
    int VAR_3, int VAR_4, char ***VAR_5, size_t *VAR_6)
{
 char *VAR_7;
 int VAR_8 = 0, VAR_9 = FUNC_4(VAR_0 + VAR_2 + 1);

 if ((VAR_7 = FUNC_2(VAR_1 + (VAR_4 - VAR_3) +
     VAR_9 + 1)) == ((void*)0))
  return -1;


 if (VAR_1 > 0) {
  FUNC_3(VAR_7, VAR_0, VAR_1);
  VAR_8 = VAR_1;
 }

 if (VAR_4 - VAR_3 > 0) {
  FUNC_3(VAR_7 + VAR_8, VAR_0 + VAR_3,
      VAR_4 - VAR_3);
  VAR_8 += VAR_4 - VAR_3;
 }

 if (VAR_9 > 0) {
  FUNC_3(VAR_7 + VAR_8, VAR_0 + VAR_2 + 1, VAR_9);
  VAR_8 += VAR_9;
 }
 VAR_7[VAR_8] = '\0';
 if (FUNC_0(VAR_7, VAR_5, VAR_6) != 0) {
  FUNC_1(VAR_7);
  return -1;
 }
 return 0;
}
