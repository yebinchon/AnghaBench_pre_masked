
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int tb_path; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct tree_balance*,int) ;
 int FUNC_3 (struct tree_balance*,int) ;

__attribute__((used)) static int FUNC_4(struct tree_balance *VAR_0, int VAR_1)
{
 FUNC_1(!(FUNC_0(VAR_0->tb_path, VAR_1)),
        "vs-8250: S is not initialized");

 if (VAR_1)
  return FUNC_2(VAR_0, VAR_1);
 else
  return FUNC_3(VAR_0, VAR_1);
}
