
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {scalar_t__ iobase; int wcreg; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct rme96 *VAR_3,
    size_t VAR_4)
{
 switch (VAR_4) {
 case 129:
  VAR_3->wcreg &= ~VAR_2;
  break;
 case 128:
  VAR_3->wcreg |= VAR_2;
  break;
 default:
  FUNC_0();
  break;
 }
 VAR_3->wcreg &= ~VAR_1;
 FUNC_1(VAR_3->wcreg, VAR_3->iobase + VAR_0);
}
