
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_rules_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fib_rules_ops*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fib_rules_ops *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, 0, VAR_2, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_4, 0x7FFE, VAR_3, 0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_4, 0x7FFF, VAR_1, 0);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
