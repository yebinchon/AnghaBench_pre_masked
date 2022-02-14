
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int _ISO2022State ;
typedef int _ISO2022EncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*,int,char**,int *,size_t*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(_ISO2022EncodingInfo * __restrict VAR_2,
    char * __restrict VAR_3, size_t VAR_4, _ISO2022State * __restrict VAR_5,
    size_t * __restrict VAR_6)
{
 char *VAR_7;
 char VAR_8[VAR_1];
 size_t VAR_9;
 int VAR_10;


 VAR_10 = FUNC_0(VAR_2, L'\0', VAR_8, sizeof(VAR_8), &VAR_7, VAR_5,
     &VAR_9);
 if (VAR_10) {
  *VAR_6 = VAR_9;
  return (VAR_10);
 }

 if (sizeof(VAR_8) < VAR_9 || VAR_4 < VAR_9-1) {

  *VAR_6 = (size_t)-1;
  return (VAR_0);
 }

 FUNC_1(VAR_3, VAR_8, VAR_9 - 1);
 *VAR_6 = VAR_9 - 1;
 return (0);
}
