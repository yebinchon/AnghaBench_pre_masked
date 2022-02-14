
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{
 VAR_2 = FUNC_2();
 FUNC_3("after swapcontext TLS pointer = %p\n", VAR_2);

 if (VAR_0) {
  FUNC_1(VAR_2, &VAR_4);
  FUNC_3("TLS pointer modified by swapcontext()\n");
 } else {
  FUNC_1(VAR_2, &VAR_5);
  FUNC_3("TLS pointer left untouched by swapcontext()\n");
 }


 FUNC_0(FUNC_4(&VAR_1, &VAR_3));


 return;
}
