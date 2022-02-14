
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1938 {scalar_t__ irq; int pci; scalar_t__ rmidi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1938*,int ) ;
 int FUNC_1 (scalar_t__,struct es1938*) ;
 int FUNC_2 (struct es1938*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct es1938*) ;
 int FUNC_7 (struct es1938*,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct es1938 *VAR_2)
{

 FUNC_3(0x00, FUNC_0(VAR_2, VAR_1));
 if (VAR_2->rmidi)
  FUNC_7(VAR_2, VAR_0, 0x40, 0);

 FUNC_6(VAR_2);

 if (VAR_2->irq >= 0)
  FUNC_1(VAR_2->irq, VAR_2);
 FUNC_5(VAR_2->pci);
 FUNC_4(VAR_2->pci);
 FUNC_2(VAR_2);
 return 0;
}
