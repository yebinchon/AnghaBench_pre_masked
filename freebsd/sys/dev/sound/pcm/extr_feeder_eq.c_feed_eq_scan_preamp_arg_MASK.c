
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,int,int,...) ;
 int FUNC_5 (char const*,char*,int*,int*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char*,char*,int) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static int32_t
FUNC_9(const char *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 size_t VAR_10;
 char VAR_11[32];

 FUNC_3(VAR_11, sizeof(VAR_11));



 VAR_7 = FUNC_5(VAR_6, "%d.%d", &VAR_8, &VAR_9);

 if (VAR_7 == 1 && !(VAR_8 < VAR_4 || VAR_8 > VAR_3)) {
  FUNC_4(VAR_11, sizeof(VAR_11), "%c%d",
      FUNC_1(VAR_8), FUNC_2(VAR_8));
  VAR_9 = 0;
 } else if (VAR_7 == 2 &&
     !(VAR_8 < VAR_4 || VAR_8 > VAR_3 ||
     VAR_9 < VAR_2 || VAR_9 > VAR_1))
  FUNC_4(VAR_11, sizeof(VAR_11), "%c%d.%d",
      FUNC_1(VAR_8), FUNC_2(VAR_8), VAR_9);
 else
  return (VAR_5);

 VAR_10 = FUNC_8(VAR_6);
 if (VAR_10 > 2 && FUNC_6(VAR_6 + VAR_10 - 2, "dB") == 0)
  FUNC_7(VAR_11, "dB", sizeof(VAR_11));

 if (VAR_8 == 0 && *VAR_6 == '-')
  *VAR_11 = '-';

 if (FUNC_6(VAR_11 + ((*VAR_6 >= '0' && *VAR_6 <= '9') ? 1 : 0), VAR_6) != 0)
  return (VAR_5);

 while ((VAR_9 / VAR_0) > 0)
  VAR_9 /= VAR_0;

 return (((VAR_8 < 0 || *VAR_11 == '-') ? -1 : 1) * FUNC_0(VAR_8, VAR_9));
}
