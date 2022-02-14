
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long long FUNC_0 (char const*,char**,int) ;

long long
FUNC_1(const char *VAR_8, long long VAR_9, long long VAR_10,
    const char **VAR_11)
{
 long long VAR_12 = 0;
 int VAR_13 = 0;
 char *VAR_14;
 struct errval {
  const char *errstr;
  int err;
 } VAR_15[4] = {
  { ((void*)0), 0 },
  { "invalid", VAR_0 },
  { "too small", VAR_1 },
  { "too large", VAR_1 },
 };

 VAR_15[0].err = VAR_7;
 VAR_7 = 0;
 if (VAR_9 > VAR_10) {
  VAR_13 = VAR_2;
 } else {
  VAR_12 = FUNC_0(VAR_8, &VAR_14, 10);
  if (VAR_7 == VAR_0 || VAR_8 == VAR_14 || *VAR_14 != '\0')
   VAR_13 = VAR_2;
  else if ((VAR_12 == VAR_4 && VAR_7 == VAR_1) || VAR_12 < VAR_9)
   VAR_13 = VAR_6;
  else if ((VAR_12 == VAR_3 && VAR_7 == VAR_1) || VAR_12 > VAR_10)
   VAR_13 = VAR_5;
 }
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_15[VAR_13].errstr;
 VAR_7 = VAR_15[VAR_13].err;
 if (VAR_13)
  VAR_12 = 0;

 return (VAR_12);
}
