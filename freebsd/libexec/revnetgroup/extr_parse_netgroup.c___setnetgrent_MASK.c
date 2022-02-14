
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netgrp {int dummy; } ;
struct TYPE_2__ {char* grname; struct netgrp* gr; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct netgrp* VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

void
FUNC_6(char *VAR_2)
{


 if (VAR_2 == ((void*)0) || !FUNC_5(VAR_2))
  return;

 if (VAR_0.gr == (struct netgrp *)0 ||
  FUNC_3(VAR_2, VAR_0.grname)) {
  FUNC_0();
  if (FUNC_2(VAR_2))
   FUNC_0();
  else {
   VAR_0.grname = (char *)
    FUNC_1(FUNC_5(VAR_2) + 1);
   FUNC_4(VAR_0.grname, VAR_2);
  }
 }
 VAR_1 = VAR_0.gr;
}
