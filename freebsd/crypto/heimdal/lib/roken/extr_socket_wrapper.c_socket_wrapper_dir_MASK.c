
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_2(void)
{
 const char *VAR_0 = FUNC_0("SOCKET_WRAPPER_DIR");
 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }
 if (FUNC_1(VAR_0, "./", 2) == 0) {
  VAR_0 += 2;
 }
 return VAR_0;
}
