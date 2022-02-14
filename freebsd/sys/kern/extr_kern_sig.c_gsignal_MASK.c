
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgrp {int dummy; } ;
typedef int ksiginfo_t ;


 int FUNC_0 (struct pgrp*) ;
 struct pgrp* FUNC_1 (int) ;
 int FUNC_2 (struct pgrp*,int,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(int VAR_1, int VAR_2, ksiginfo_t *VAR_3)
{
 struct pgrp *VAR_4;

 if (VAR_1 != 0) {
  FUNC_3(&VAR_0);
  VAR_4 = FUNC_1(VAR_1);
  FUNC_4(&VAR_0);
  if (VAR_4 != ((void*)0)) {
   FUNC_2(VAR_4, VAR_2, 0, VAR_3);
   FUNC_0(VAR_4);
  }
 }
}
