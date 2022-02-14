
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int * avail_occr; int hash; int expr; } ;
typedef int rtx ;
typedef int hashval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ,struct expr*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct expr*) ;

__attribute__((used)) static struct expr *
FUNC_4 (rtx VAR_3)
{
  int VAR_4;
  struct expr **VAR_5, *VAR_6;
  hashval_t VAR_7 = FUNC_0 (VAR_3, &VAR_4);

  if (VAR_4)
    return ((void*)0);

  VAR_6 = (struct expr *) FUNC_2 (&VAR_1,
         sizeof (struct expr));
  VAR_6->expr = VAR_3;
  VAR_6->hash = VAR_7;
  VAR_6->avail_occr = ((void*)0);

  VAR_5 = (struct expr **) FUNC_1 (VAR_2, VAR_6,
                                                    VAR_7, VAR_0);
  FUNC_3 (&VAR_1, VAR_6);

  if (!VAR_5)
    return ((void*)0);
  else
    return (*VAR_5);
}
