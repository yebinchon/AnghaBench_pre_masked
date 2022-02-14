
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {scalar_t__ iobase; int wcreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct rme96 *VAR_3,
    int VAR_4)
{
 if (!VAR_4) {
  FUNC_0(0, VAR_3->iobase + VAR_1);
 }

 VAR_3->wcreg |= VAR_2;
 FUNC_0(VAR_3->wcreg, VAR_3->iobase + VAR_0);
}
