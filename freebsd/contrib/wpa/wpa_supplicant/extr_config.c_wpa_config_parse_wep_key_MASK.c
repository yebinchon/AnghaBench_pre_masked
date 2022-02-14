
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int title ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,size_t*) ;
 int FUNC_6 (int ,char*,int *,size_t) ;
 int FUNC_7 (int ,char*,int,unsigned int,...) ;

__attribute__((used)) static int FUNC_8(u8 *VAR_3, size_t *VAR_4, int VAR_5,
        const char *VAR_6, int VAR_7)
{
 char *VAR_8, VAR_9[20];
 int VAR_10;

 VAR_8 = FUNC_5(VAR_6, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_7(VAR_1, "Line %d: Invalid WEP key %d '%s'.",
      VAR_5, VAR_7, VAR_6);
  return -1;
 }
 if (*VAR_4 > VAR_0) {
  FUNC_7(VAR_1, "Line %d: Too long WEP key %d '%s'.",
      VAR_5, VAR_7, VAR_6);
  FUNC_0(VAR_8);
  return -1;
 }
 if (*VAR_4 && *VAR_4 != 5 && *VAR_4 != 13 && *VAR_4 != 16) {
  FUNC_7(VAR_1, "Line %d: Invalid WEP key length %u - "
      "this network block will be ignored",
      VAR_5, (unsigned int) *VAR_4);
 }
 FUNC_1(VAR_3, VAR_8, *VAR_4);
 FUNC_4(VAR_8);
 VAR_10 = FUNC_2(VAR_9, sizeof(VAR_9), "wep_key%d", VAR_7);
 if (!FUNC_3(sizeof(VAR_9), VAR_10))
  FUNC_6(VAR_2, VAR_9, VAR_3, *VAR_4);
 return 0;
}
