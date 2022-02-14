
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;


 int FUNC_0 (struct item_head*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct item_head *VAR_0, char *VAR_1)
{
 int VAR_2 = 0;


 FUNC_1("\"");
 while (VAR_2 < FUNC_0(VAR_0))
  FUNC_1("%c", VAR_1[VAR_2++]);
 FUNC_1("\"\n");
}
