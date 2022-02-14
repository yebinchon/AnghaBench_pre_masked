
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgrp {scalar_t__ pg_jobc; } ;


 int FUNC_0 (struct pgrp*) ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct pgrp*) ;

__attribute__((used)) static void
FUNC_3(struct pgrp *VAR_0, int VAR_1)
{

 FUNC_0(VAR_0);
 if (VAR_1)
  VAR_0->pg_jobc++;
 else {
  --VAR_0->pg_jobc;
  if (VAR_0->pg_jobc == 0)
   FUNC_2(VAR_0);
 }
 FUNC_1(VAR_0);
}
