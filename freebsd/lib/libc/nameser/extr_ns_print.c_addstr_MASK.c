
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (size_t,char**,size_t*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, size_t VAR_3, char **VAR_4, size_t *VAR_5) {
 if (VAR_3 >= *VAR_5) {
  VAR_1 = VAR_0;
  return (-1);
 }
 FUNC_1(*VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_3, VAR_4, VAR_5);
 **VAR_4 = '\0';
 return (0);
}
