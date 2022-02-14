
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char const*,char const*) ;
 int * FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, const char *VAR_2,
    char *VAR_3)
{
 FUNC_0(FUNC_4(VAR_2));
 const char *VAR_4 = VAR_2 + VAR_0;
 if (FUNC_2(VAR_4, '@') == ((void*)0)) {
  (void) FUNC_1(VAR_3, "%s@%s", VAR_1, VAR_4);
 } else {
  (void) FUNC_3(VAR_3, VAR_4);
 }
}
