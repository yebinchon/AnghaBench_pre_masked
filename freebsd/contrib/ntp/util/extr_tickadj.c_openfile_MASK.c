
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(
 const char *VAR_2,
 int VAR_3
 )
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0)
 {
  (void) FUNC_1(VAR_1, "%s: open %s: ", VAR_0, VAR_2);
  FUNC_3("");
  FUNC_0(1);
 }
 return VAR_4;
}
