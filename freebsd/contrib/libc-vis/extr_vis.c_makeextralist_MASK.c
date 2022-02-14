
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ u_char ;
typedef int mbstate_t ;
typedef int mbstate ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int) ;
 int* FUNC_1 (scalar_t__,int) ;
 int* VAR_9 ;
 int* VAR_10 ;
 size_t FUNC_2 (int*,char const**,size_t,int *) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static wchar_t *
FUNC_5(int VAR_11, const char *VAR_12)
{
 wchar_t *VAR_13, *VAR_14;
 size_t VAR_15;
 const wchar_t *VAR_16;
 mbstate_t VAR_17;

 FUNC_0(&VAR_17, sizeof(VAR_17));
 VAR_15 = FUNC_3(VAR_12);
 if ((VAR_13 = FUNC_1(VAR_15 + VAR_0, sizeof(*VAR_13))) == ((void*)0))
  return ((void*)0);

 if ((VAR_11 & VAR_4) || FUNC_2(VAR_13, &VAR_12, VAR_15, &VAR_17) == (size_t)-1) {
  size_t VAR_18;
  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
   VAR_13[VAR_18] = (wchar_t)(u_char)VAR_12[VAR_18];
  VAR_14 = VAR_13 + VAR_15;
 } else
  VAR_14 = VAR_13 + FUNC_4(VAR_13);

 if (VAR_11 & VAR_2)
  for (VAR_16 = VAR_9; *VAR_16; *VAR_14++ = *VAR_16++)
   continue;

 if (VAR_11 & VAR_6)
  for (VAR_16 = VAR_10; *VAR_16; *VAR_14++ = *VAR_16++)
   continue;

 if (VAR_11 & VAR_7) *VAR_14++ = L' ';
 if (VAR_11 & VAR_8) *VAR_14++ = L'\t';
 if (VAR_11 & VAR_3) *VAR_14++ = L'\n';
 if (VAR_11 & VAR_1) *VAR_14++ = L'"';
 if ((VAR_11 & VAR_5) == 0) *VAR_14++ = L'\\';
 *VAR_14 = L'\0';

 return VAR_13;
}
