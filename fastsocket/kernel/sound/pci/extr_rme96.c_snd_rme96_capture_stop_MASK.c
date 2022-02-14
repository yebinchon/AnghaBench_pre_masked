
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int rcreg; scalar_t__ iobase; int wcreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct rme96 *VAR_4)
{
 VAR_4->rcreg = FUNC_0(VAR_4->iobase + VAR_1);
 if (VAR_4->rcreg & VAR_2) {
  FUNC_1(0, VAR_4->iobase + VAR_0);
 }
 VAR_4->wcreg &= ~VAR_3;
 FUNC_1(VAR_4->wcreg, VAR_4->iobase + VAR_1);
}
