
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {scalar_t__ iobase; int wcreg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct rme96 *VAR_3,
         int VAR_4)
{
 if (VAR_4 & 1) {
  VAR_3->wcreg |= VAR_1;
 } else {
  VAR_3->wcreg &= ~VAR_1;
 }
 if (VAR_4 & 2) {
  VAR_3->wcreg |= VAR_2;
 } else {
  VAR_3->wcreg &= ~VAR_2;
 }
 FUNC_0(VAR_3->wcreg, VAR_3->iobase + VAR_0);
 return 0;
}
