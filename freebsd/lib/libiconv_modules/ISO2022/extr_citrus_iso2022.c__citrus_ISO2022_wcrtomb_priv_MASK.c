
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int buf ;
typedef int _ISO2022State ;
typedef int _ISO2022EncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int,char**,int *,size_t*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(_ISO2022EncodingInfo * __restrict VAR_2,
    char * __restrict VAR_3, size_t VAR_4, wchar_t VAR_5,
    _ISO2022State * __restrict VAR_6, size_t * __restrict VAR_7)
{
 char *VAR_8;
 char VAR_9[VAR_1];
 size_t VAR_10;
 int VAR_11;


 VAR_11 = FUNC_0(VAR_2, VAR_5, VAR_9, sizeof(VAR_9), &VAR_8, VAR_6,
     &VAR_10);
 if (VAR_11) {
  *VAR_7 = VAR_10;
  return (VAR_11);
 }

 if (sizeof(VAR_9) < VAR_10 || VAR_4 < VAR_10) {

  *VAR_7 = (size_t)-1;
  return (VAR_0);
 }

 FUNC_1(VAR_3, VAR_9, VAR_10);
 *VAR_7 = VAR_10;
 return (0);
}
