
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct_softc {int curgrp; int iores; } ;


 int FUNC_0 (struct nct_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nct_softc *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1);
 if (VAR_2 != VAR_1->curgrp) {
  FUNC_1(VAR_1->iores, VAR_0, VAR_2);
  VAR_1->curgrp = VAR_2;
 }
}
