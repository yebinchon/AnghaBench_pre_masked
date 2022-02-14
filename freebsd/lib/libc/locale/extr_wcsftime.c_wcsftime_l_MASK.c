
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct tm {int dummy; } ;
typedef int mbstate_t ;
typedef int locale_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,char const**,size_t,int *,int ) ;
 scalar_t__ FUNC_4 (char*,size_t,char*,struct tm const*,int ) ;
 size_t FUNC_5 (char*,int const**,size_t,int *,int ) ;

size_t
FUNC_6(wchar_t * __restrict VAR_4, size_t VAR_5,
 const wchar_t * __restrict VAR_6, const struct tm * __restrict VAR_7,
 locale_t VAR_8)
{
 static const mbstate_t VAR_9;
 mbstate_t VAR_10;
 char *VAR_11, *VAR_12;
 const char *VAR_13;
 const wchar_t *VAR_14;
 size_t VAR_15, VAR_16;
 int VAR_17;
 FUNC_0(VAR_8);

 VAR_12 = VAR_11 = ((void*)0);





 VAR_10 = VAR_9;
 VAR_14 = VAR_6;
 VAR_16 = FUNC_5(((void*)0), &VAR_14, 0, &VAR_10, VAR_8);
 if (VAR_16 == (size_t)-1)
  goto error;
 if ((VAR_12 = FUNC_2(VAR_16 + 1)) == ((void*)0))
  goto error;
 VAR_10 = VAR_9;
 FUNC_5(VAR_12, &VAR_14, VAR_16 + 1, &VAR_10, VAR_8);







 if (VAR_2 / VAR_1 <= VAR_5) {

  VAR_3 = VAR_0;
  goto error;
 }
 if ((VAR_11 = FUNC_2(VAR_5 * VAR_1)) == ((void*)0))
  goto error;
 if (FUNC_4(VAR_11, VAR_5, VAR_12, VAR_7, VAR_8) == 0)
  goto error;
 VAR_13 = VAR_11;
 VAR_10 = VAR_9;
 VAR_15 = FUNC_3(VAR_4, &VAR_13, VAR_5, &VAR_10, VAR_8);
 if (VAR_15 == (size_t)-2 || VAR_15 == (size_t)-1 || VAR_13 != ((void*)0))
  goto error;

 FUNC_1(VAR_12);
 FUNC_1(VAR_11);
 return (VAR_15);

error:
 VAR_17 = VAR_3;
 FUNC_1(VAR_12);
 FUNC_1(VAR_11);
 VAR_3 = VAR_17;
 return (0);
}
