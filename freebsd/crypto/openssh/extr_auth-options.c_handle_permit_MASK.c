
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**) ;
 char* FUNC_4 (char const**,char const**) ;
 char** FUNC_5 (char**,size_t,size_t,int) ;
 int * FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(const char **VAR_2, int VAR_3,
    char ***VAR_4, size_t *VAR_5, const char **VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9, *VAR_10, **VAR_11 = *VAR_4;
 size_t VAR_12 = *VAR_5;
 const char *VAR_13 = "unknown error";

 if (VAR_12 > VAR_0) {
  *VAR_6 = "too many permission directives";
  return -1;
 }
 if ((VAR_7 = FUNC_4(VAR_2, &VAR_13)) == ((void*)0)) {
  return -1;
 }
 if (VAR_3 && FUNC_6(VAR_7, ':') == ((void*)0)) {




  if (FUNC_1(&VAR_8, "*:%s", VAR_7) < 0) {
   *VAR_6 = "memory allocation failed";
   return -1;
  }
  FUNC_2(VAR_7);
  VAR_7 = VAR_8;
 }
 if ((VAR_8 = FUNC_8(VAR_7)) == ((void*)0)) {
  FUNC_2(VAR_7);
  *VAR_6 = "memory allocation failed";
  return -1;
 }
 VAR_9 = VAR_8;

 VAR_10 = FUNC_3(&VAR_9);
 if (VAR_10 == ((void*)0) || FUNC_9(VAR_10) >= VAR_1) {
  FUNC_2(VAR_8);
  FUNC_2(VAR_7);
  *VAR_6 = "invalid permission hostname";
  return -1;
 }




 if (VAR_9 == ((void*)0) ||
     (FUNC_7(VAR_9, "*") != 0 && FUNC_0(VAR_9) <= 0)) {
  FUNC_2(VAR_8);
  FUNC_2(VAR_7);
  *VAR_6 = "invalid permission port";
  return -1;
 }

 FUNC_2(VAR_8);

 if ((VAR_11 = FUNC_5(VAR_11, VAR_12, VAR_12 + 1,
     sizeof(*VAR_11))) == ((void*)0)) {
  FUNC_2(VAR_7);

  *VAR_6 = "memory allocation failed";
  return -1;
 }
 VAR_11[VAR_12++] = VAR_7;
 *VAR_4 = VAR_11;
 *VAR_5 = VAR_12;
 return 0;
}
