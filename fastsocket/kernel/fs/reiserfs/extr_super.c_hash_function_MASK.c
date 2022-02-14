
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef int * hashf_t ;





 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct super_block*,char*) ;
 int FUNC_1 (struct super_block*) ;
 int * VAR_2 ;

__attribute__((used)) static hashf_t FUNC_2(struct super_block *VAR_3)
{
 switch (FUNC_1(VAR_3)) {
 case 129:
  FUNC_0(VAR_3, "Using tea hash to sort names\n");
  return VAR_0;
 case 128:
  FUNC_0(VAR_3, "Using rupasov hash to sort names\n");
  return VAR_2;
 case 130:
  FUNC_0(VAR_3, "Using r5 hash to sort names\n");
  return VAR_1;
 }
 return ((void*)0);
}
