
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*,size_t,int) ;
 char* FUNC_1 (int*,size_t*) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0) {
  char *VAR_1;
  size_t VAR_2;
  int VAR_3;
  const char *VAR_4 = FUNC_1(&VAR_3, &VAR_2);

  if (VAR_4 == ((void*)0))
    return FUNC_3(VAR_0);

  VAR_1 = FUNC_2(VAR_2 + 1 + FUNC_4(VAR_0) + 1);
  FUNC_0(VAR_1, VAR_0, VAR_4, VAR_2,
                       VAR_3);

  return VAR_1;
}
