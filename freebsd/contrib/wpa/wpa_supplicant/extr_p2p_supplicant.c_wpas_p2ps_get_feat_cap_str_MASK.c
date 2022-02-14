
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int pref ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,size_t,int const*,size_t) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, size_t VAR_2,
           const u8 *VAR_3, size_t VAR_4)
{
 static const char VAR_5[] = " feature_cap=";
 int VAR_6;

 VAR_1[0] = '\0';
 if (!VAR_3 || !VAR_4 || VAR_2 < sizeof(VAR_5) + 2)
  return;

 FUNC_0(VAR_1, VAR_5, sizeof(VAR_5));
 VAR_6 = FUNC_2(&VAR_1[sizeof(VAR_5) - 1],
          VAR_2 - sizeof(VAR_5) + 1,
          VAR_3, VAR_4);

 if (VAR_6 != (2 * (int) VAR_4))
  FUNC_1(VAR_0, "P2PS feature_cap bytes truncated");
}
