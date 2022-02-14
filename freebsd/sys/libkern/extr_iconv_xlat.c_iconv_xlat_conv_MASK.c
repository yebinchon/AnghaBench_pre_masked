
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
struct iconv_xlat {int * d_table; } ;


 int FUNC_0 (size_t,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, const char **VAR_1,
 size_t *VAR_2, char **VAR_3, size_t *VAR_4,
 int VAR_5, int VAR_6)
{
 struct iconv_xlat *VAR_7 = (struct iconv_xlat*)VAR_0;
 const char *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || *VAR_3 == ((void*)0))
  return 0;
 if (VAR_6 != 0)
  return -1;
 if (VAR_5 == 1)
  VAR_11 = VAR_10 = 1;
 else
  VAR_11 = VAR_10 = FUNC_0(*VAR_2, *VAR_4);
 VAR_8 = *VAR_1;
 VAR_9 = *VAR_3;
 while(VAR_11--)
  *VAR_9++ = VAR_7->d_table[(u_char)*VAR_8++];
 *VAR_1 += VAR_10;
 *VAR_3 += VAR_10;
 *VAR_2 -= VAR_10;
 *VAR_4 -= VAR_10;
 return 0;
}
