
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n; int redirect; } ;
union node {scalar_t__ type; TYPE_1__ nredir; } ;
struct job {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct job*,union node*,int) ;
 int FUNC_3 () ;
 struct job* FUNC_4 (union node*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct job*,int*) ;

__attribute__((used)) static void
FUNC_7(union node *VAR_7, int VAR_8)
{
 struct job *VAR_9;
 int VAR_10 = (VAR_7->type == VAR_4);

 VAR_6 = VAR_5;
 FUNC_1(VAR_7->nredir.redirect);
 if ((!VAR_10 && VAR_8 & VAR_0 && !FUNC_3()) ||
   FUNC_2(VAR_9 = FUNC_4(VAR_7, 1), VAR_7, VAR_10) == 0) {
  if (VAR_10)
   VAR_8 &=~ VAR_1;
  FUNC_5(VAR_7->nredir.redirect, 0);
  FUNC_0(VAR_7->nredir.n, VAR_8 | VAR_0);
 } else if (! VAR_10) {
  VAR_2;
  VAR_5 = FUNC_6(VAR_9, (int *)((void*)0));
  VAR_3;
 } else
  VAR_5 = 0;
}
