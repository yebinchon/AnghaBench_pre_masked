
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int lua_State ;
typedef int int64_t ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int**,int*) ;
 int FUNC_13 (int *,char***,int*) ;
 int FUNC_14 (int *,int**,int*) ;
 int FUNC_15 (char*,int,char*,int,char*) ;
 int FUNC_16 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_17(lua_State *VAR_1, nvpair_t *VAR_2,
    char *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2 == ((void*)0)) {
  FUNC_7(VAR_1);
  return (0);
 }

 switch (FUNC_11(VAR_2)) {
 case 134:
  (void) FUNC_5(VAR_1,
      FUNC_0(VAR_2));
  break;
 case 130:
  (void) FUNC_8(VAR_1, FUNC_3(VAR_2));
  break;
 case 133:
  (void) FUNC_6(VAR_1, FUNC_1(VAR_2));
  break;
 case 131:
  VAR_5 = FUNC_16(VAR_1,
      FUNC_2(VAR_2), VAR_3, VAR_4);
  break;
 case 129: {
  char **VAR_6;
  uint_t VAR_7;
  (void) FUNC_13(VAR_2, &VAR_6, &VAR_7);
  FUNC_4(VAR_1);
  for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   (void) FUNC_6(VAR_1, VAR_8 + 1);
   (void) FUNC_8(VAR_1, VAR_6[VAR_8]);
   (void) FUNC_9(VAR_1, -3);
  }
  break;
 }
 case 128: {
  uint64_t *VAR_9;
  uint_t VAR_10;
  (void) FUNC_14(VAR_2, &VAR_9, &VAR_10);
  FUNC_4(VAR_1);
  for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   (void) FUNC_6(VAR_1, VAR_11 + 1);
   (void) FUNC_6(VAR_1, VAR_9[VAR_11]);
   (void) FUNC_9(VAR_1, -3);
  }
  break;
 }
 case 132: {
  int64_t *VAR_12;
  uint_t VAR_13;
  (void) FUNC_12(VAR_2, &VAR_12, &VAR_13);
  FUNC_4(VAR_1);
  for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   (void) FUNC_6(VAR_1, VAR_14 + 1);
   (void) FUNC_6(VAR_1, VAR_12[VAR_14]);
   (void) FUNC_9(VAR_1, -3);
  }
  break;
 }
 default: {
  if (VAR_3 != ((void*)0)) {
   (void) FUNC_15(VAR_3, VAR_4,
       "Unhandled nvpair type %d for key '%s'",
       FUNC_11(VAR_2), FUNC_10(VAR_2));
  }
  return (VAR_0);
 }
 }
 return (VAR_5);
}
