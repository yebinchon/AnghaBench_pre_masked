
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (char const*,unsigned char*) ;
 unsigned char* FUNC_4 (char const*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3)
{
 unsigned char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_1, "cannot verify %s", VAR_3);
 if (FUNC_3(VAR_3, VAR_4)) {
  VAR_5 = FUNC_5();
 } else {
  FUNC_0(VAR_0, "cannot load %s", VAR_3);
 }
 FUNC_2(VAR_4);
 return (VAR_5);
}
