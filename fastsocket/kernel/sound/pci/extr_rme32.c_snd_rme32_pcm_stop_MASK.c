
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int rcreg; int wcreg; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rme32 * VAR_7, int VAR_8)
{




 VAR_7->rcreg = FUNC_0(VAR_7->iobase + VAR_1);
 if (VAR_7->rcreg & VAR_3) {
  FUNC_1(0, VAR_7->iobase + VAR_0);
 }
 VAR_7->wcreg &= ~VAR_6;
 if (VAR_7->wcreg & VAR_5)
  VAR_7->wcreg |= VAR_4;
 FUNC_1(VAR_7->wcreg, VAR_7->iobase + VAR_1);
 if (! VAR_8)
  FUNC_1(0, VAR_7->iobase + VAR_2);
}
