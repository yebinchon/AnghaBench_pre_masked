
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct print_buf {int dummy; } ;


 int FUNC_0 (struct print_buf*,char*) ;

__attribute__((used)) static void FUNC_1(struct print_buf *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0, "Type       ");

 if (VAR_1 > 1)
  FUNC_0(VAR_0, "Lower      Upper      ");
 if (VAR_1 > 2)
  FUNC_0(VAR_0, "Port Identity              ");
 if (VAR_1 > 3)
  FUNC_0(VAR_0, "Publication");

 FUNC_0(VAR_0, "\n-----------");

 if (VAR_1 > 1)
  FUNC_0(VAR_0, "--------------------- ");
 if (VAR_1 > 2)
  FUNC_0(VAR_0, "-------------------------- ");
 if (VAR_1 > 3)
  FUNC_0(VAR_0, "------------------");

 FUNC_0(VAR_0, "\n");
}
