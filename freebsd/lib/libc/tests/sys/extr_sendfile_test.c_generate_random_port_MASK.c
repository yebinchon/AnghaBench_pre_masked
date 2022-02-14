
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4)
{
 int VAR_5;

 FUNC_1("Generating a random port with seed=%d\n", VAR_4);
 if (VAR_2 == 0) {
  VAR_2 = FUNC_0(VAR_0);
  FUNC_1("Port range lower bound: %d\n", VAR_2);
 }

 if (VAR_3 == 0) {
  VAR_3 = FUNC_0(VAR_1);
  FUNC_1("Port range upper bound: %d\n", VAR_3);
 }

 FUNC_3((unsigned)VAR_4);

 VAR_5 = FUNC_2() % (VAR_3 - VAR_2) +
     VAR_2;

 FUNC_1("Random port generated: %d\n", VAR_5);
 return (VAR_5);
}
