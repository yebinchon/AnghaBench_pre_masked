
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char const*,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, int VAR_1,
  const char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 if (!FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_5))

  VAR_4 = sizeof(struct fdt_property) + FUNC_3(VAR_2) + 1;

 if (VAR_3 > VAR_5)

  VAR_4 += FUNC_0(VAR_3) - FUNC_0(VAR_5);

 return FUNC_1(VAR_0, VAR_4);
}
