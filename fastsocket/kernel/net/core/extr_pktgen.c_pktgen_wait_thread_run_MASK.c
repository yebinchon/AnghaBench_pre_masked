
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pktgen_thread*) ;
 int FUNC_1 (struct pktgen_thread*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pktgen_thread*) ;

__attribute__((used)) static int FUNC_5(struct pktgen_thread *VAR_1)
{
 FUNC_0(VAR_1);

 while (FUNC_4(VAR_1)) {

  FUNC_1(VAR_1);

  FUNC_2(100);

  if (FUNC_3(VAR_0))
   goto signal;
  FUNC_0(VAR_1);
 }
 FUNC_1(VAR_1);
 return 1;
signal:
 return 0;
}
