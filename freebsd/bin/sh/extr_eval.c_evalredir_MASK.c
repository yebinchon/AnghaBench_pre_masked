
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n; int redirect; } ;
union node {TYPE_1__ nredir; } ;
struct jmploc {int loc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct jmploc* VAR_7 ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(union node *VAR_9, int VAR_10)
{
 struct jmploc VAR_11;
 struct jmploc *VAR_12;
 volatile int VAR_13 = 1;

 VAR_8 = VAR_6;
 FUNC_1(VAR_9->nredir.redirect);
 VAR_12 = VAR_7;
 if (FUNC_5(VAR_11.loc)) {
  int VAR_14;

  VAR_7 = VAR_12;
  VAR_14 = VAR_5;
  FUNC_3();
  if (VAR_14 == VAR_0 && VAR_13) {
   VAR_1;
   return;
  }
  FUNC_2(VAR_7->loc, 1);
 } else {
  VAR_2;
  VAR_7 = &VAR_11;
  FUNC_4(VAR_9->nredir.redirect, VAR_4);
  VAR_13 = 0;
  VAR_3;
  FUNC_0(VAR_9->nredir.n, VAR_10);
 }
 VAR_2;
 VAR_7 = VAR_12;
 FUNC_3();
 VAR_3;
}
