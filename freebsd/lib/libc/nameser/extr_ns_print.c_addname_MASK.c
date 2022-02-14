
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (size_t,char**,size_t*) ;
 int FUNC_1 (int const*,int const*,int const*,char*,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const u_char *VAR_2, size_t VAR_3,
 const u_char **VAR_4, const char *VAR_5,
 char **VAR_6, size_t *VAR_7)
{
 size_t VAR_8, VAR_9 = *VAR_7;
 char *VAR_10 = *VAR_6;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_2 + VAR_3, *VAR_4, *VAR_6, *VAR_7);
 if (VAR_11 < 0)
  goto enospc;
 VAR_8 = FUNC_2(*VAR_6, VAR_5);
 if (**VAR_6 == '\0') {
  goto root;
 } else if (VAR_8 == 0U) {

  if (VAR_8 + 2 > *VAR_7)
   goto enospc;
  (*VAR_6)[VAR_8++] = '@';
  (*VAR_6)[VAR_8] = '\0';
 } else {
  if (((VAR_5 == ((void*)0) || VAR_5[0] == '\0') ||
      (VAR_5[0] != '.' && VAR_5[1] != '\0' &&
      (*VAR_6)[VAR_8] == '\0')) && (*VAR_6)[VAR_8 - 1] != '.') {

 root:
   if (VAR_8 + 2 > *VAR_7)
    goto enospc;
   (*VAR_6)[VAR_8++] = '.';
   (*VAR_6)[VAR_8] = '\0';
  }
 }
 *VAR_4 += VAR_11;
 FUNC_0(VAR_8, VAR_6, VAR_7);
 **VAR_6 = '\0';
 return (VAR_8);
 enospc:
 VAR_1 = VAR_0;
 *VAR_6 = VAR_10;
 *VAR_7 = VAR_9;
 return (-1);
}
