
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct buffer *VAR_0, const char *VAR_1)
{
 static const char *VAR_2 = "drivers/staging";

 if (FUNC_2(VAR_2, VAR_1, FUNC_1(VAR_2)) == 0)
  FUNC_0(VAR_0, "\nMODULE_INFO(staging, \"Y\");\n");
}
