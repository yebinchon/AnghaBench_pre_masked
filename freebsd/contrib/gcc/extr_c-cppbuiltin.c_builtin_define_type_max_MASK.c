
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7 (const char *VAR_1, tree VAR_2, int VAR_3)
{
  static const char *const VAR_4[]
    = { "127", "255",
 "32767", "65535",
 "2147483647", "4294967295",
 "9223372036854775807", "18446744073709551615",
 "170141183460469231731687303715884105727",
 "340282366920938463463374607431768211455" };
  static const char *const VAR_5[] = { "", "U", "L", "UL", "LL", "ULL" };

  const char *VAR_6, *VAR_7;
  char *VAR_8;
  size_t VAR_9;




  switch (FUNC_0 (VAR_2))
    {
    case 8: VAR_9 = 0; break;
    case 16: VAR_9 = 2; break;
    case 32: VAR_9 = 4; break;
    case 64: VAR_9 = 6; break;
    case 128: VAR_9 = 8; break;
    default: FUNC_4 ();
    }

  VAR_6 = VAR_4[VAR_9 + FUNC_1 (VAR_2)];
  VAR_7 = VAR_5[VAR_3 * 2 + FUNC_1 (VAR_2)];

  VAR_8 = (char *) FUNC_2 (FUNC_6 (VAR_1) + 1 + FUNC_6 (VAR_6)
                         + FUNC_6 (VAR_7) + 1);
  FUNC_5 (VAR_8, "%s=%s%s", VAR_1, VAR_6, VAR_7);

  FUNC_3 (VAR_0, VAR_8);
}
