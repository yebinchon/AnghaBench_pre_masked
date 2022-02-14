
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;


 struct workqueue_struct* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct workqueue_struct* VAR_0 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct workqueue_struct *VAR_1;




 FUNC_1("RPC:       creating workqueue rpciod\n");
 VAR_1 = FUNC_0("rpciod");
 VAR_0 = VAR_1;
 return VAR_0 != ((void*)0);
}
