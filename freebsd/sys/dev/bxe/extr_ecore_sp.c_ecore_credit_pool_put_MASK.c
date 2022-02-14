
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_credit_pool_obj {scalar_t__ pool_sz; int credit; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct ecore_credit_pool_obj *VAR_0, int VAR_1)
{
 bool VAR_2;

 FUNC_0();


 VAR_2 = FUNC_1(&VAR_0->credit, VAR_1, VAR_0->pool_sz + 1);

 FUNC_0();

 return VAR_2;
}
