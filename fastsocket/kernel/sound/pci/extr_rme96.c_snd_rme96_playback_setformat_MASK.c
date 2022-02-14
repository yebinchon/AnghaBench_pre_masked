
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {scalar_t__ iobase; int wcreg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct rme96 *VAR_3,
        int VAR_4)
{
 switch (VAR_4) {
 case 129:
  VAR_3->wcreg &= ~VAR_2;
  break;
 case 128:
  VAR_3->wcreg |= VAR_2;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_3->wcreg, VAR_3->iobase + VAR_1);
 return 0;
}
