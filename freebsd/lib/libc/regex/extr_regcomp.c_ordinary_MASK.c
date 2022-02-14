
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wint_t ;
struct parse {TYPE_1__* g; } ;
typedef int cset ;
struct TYPE_2__ {int cflags; int * sets; } ;


 int FUNC_0 (struct parse*,int *,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (struct parse*) ;
 int FUNC_3 (struct parse*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct parse *VAR_4, wint_t VAR_5)
{
 cset *VAR_6;

 if ((VAR_4->g->cflags&VAR_3) && FUNC_4(VAR_5) && FUNC_5(VAR_5) != VAR_5)
  FUNC_3(VAR_4, VAR_5);
 else if ((VAR_5 & VAR_2) == VAR_5)
  FUNC_1(VAR_1, VAR_5);
 else {




  if ((VAR_6 = FUNC_2(VAR_4)) == ((void*)0))
   return;
  FUNC_0(VAR_4, VAR_6, VAR_5);
  FUNC_1(VAR_0, (int)(VAR_6 - VAR_4->g->sets));
 }
}
