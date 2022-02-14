
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdi_stopped_status; } ;


 int VAR_0 ;



 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_4 = 1;

  while (VAR_4)
    {
      int VAR_5;
      VAR_5 = FUNC_3 (VAR_3, 1);
      while (VAR_5 == VAR_1)
 {
   VAR_0;
   FUNC_1 ("Waiting for target..\n");
   VAR_5 = FUNC_3 (VAR_3, 1);
 }

      switch (VAR_5)
 {
 case 129:
   FUNC_0 ();
   break;
 case 128:
   FUNC_2 ("B", &VAR_2.rdi_stopped_status);
   VAR_4 = 0;
   break;
 case 130:
   FUNC_1 ("Target reset\n");
   VAR_4 = 0;
   break;
 default:
   FUNC_1 ("Ignoring %x\n", VAR_5);
   break;
 }
    }
}
