
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpuidlestat {int idlecalls; int oldidlecalls; } ;


 struct pcpuidlestat* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 () ;

void
FUNC_8(void *VAR_6)
{
 struct pcpuidlestat *VAR_7;

 FUNC_1();
 VAR_7 = FUNC_0(VAR_4);
 for (;;) {
  FUNC_4(&VAR_0, VAR_1);

  while (FUNC_7() == 0) {
   FUNC_2(VAR_7->idlecalls + VAR_7->oldidlecalls > 64);
   VAR_7->idlecalls++;
  }

  FUNC_5(&VAR_5);
  FUNC_3(VAR_3 | VAR_2, ((void*)0));
  FUNC_6(&VAR_5);
 }
}
