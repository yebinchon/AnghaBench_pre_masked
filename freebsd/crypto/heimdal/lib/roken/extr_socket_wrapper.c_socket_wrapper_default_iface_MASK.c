
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(void)
{
 const char *VAR_1 = FUNC_0("SOCKET_WRAPPER_DEFAULT_IFACE");
 if (VAR_1) {
  unsigned int VAR_2;
  if (FUNC_1(VAR_1, "%u", &VAR_2) == 1) {
   if (VAR_2 >= 1 && VAR_2 <= VAR_0) {
    return VAR_2;
   }
  }
 }

 return 1;
}
