
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int const,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_7(int VAR_5)
{
 switch(VAR_5) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  if (VAR_2)
   FUNC_5("Signal on pipe: cannot recover\n");
  FUNC_4("Rewriting attempted as response to unknown signal.\n");
  (void)FUNC_2(VAR_3);
  (void)FUNC_2(VAR_4);
  FUNC_0();
  FUNC_1(VAR_1);

 case 130:
  FUNC_4("SIGSEGV: ABORTING!\n");
  (void)FUNC_6(130, VAR_0);
  (void)FUNC_3(0, 130);

 }
}
