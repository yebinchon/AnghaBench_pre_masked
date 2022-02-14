
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (long double,long double) ;
 int FUNC_3 (int ,char*,int,char const*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, int VAR_3, long double VAR_4, long double VAR_5,
    int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0);
 if (!FUNC_2(VAR_4, VAR_5)) {
  FUNC_3(VAR_1, "%d: %s returned %d, expecting %d\n",
      VAR_3, VAR_2, VAR_4, VAR_5);
  FUNC_0();
 }
 if (VAR_7 != VAR_6) {
  FUNC_3(VAR_1, "%d: %s raised 0x%x, expecting 0x%x\n",
      VAR_3, VAR_2, VAR_7, VAR_6);
  FUNC_0();
 }
}
