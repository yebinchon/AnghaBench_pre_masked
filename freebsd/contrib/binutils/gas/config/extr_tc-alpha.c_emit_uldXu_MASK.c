
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int X_add_number; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_1__*,int,int) ;
 char** VAR_4 ;
 char** VAR_5 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_4 (TYPE_1__,int) ;
 int FUNC_5 (TYPE_1__,int ) ;
 int FUNC_6 (TYPE_1__,int ) ;

__attribute__((used)) static void
FUNC_7 (const expressionS *VAR_6,
     int VAR_7,
     const void * VAR_8)
{
  long VAR_9 = (long) VAR_8;
  expressionS VAR_10[3];

  if (VAR_3)
    FUNC_1 (FUNC_0("macro requires $at register while noat in effect"));


  FUNC_3 (VAR_10, VAR_6, sizeof (expressionS) * VAR_7);
  VAR_10[0].X_add_number = VAR_0;
  FUNC_2 ("lda", VAR_10, VAR_7, 1);


  FUNC_6 (VAR_10[0], VAR_2);
  FUNC_4 (VAR_10[1], 0);
  FUNC_5 (VAR_10[2], VAR_0);
  FUNC_2 ("ldq_u", VAR_10, 3, 1);


  FUNC_6 (VAR_10[0], VAR_1);
  FUNC_4 (VAR_10[1], (1 << VAR_9) - 1);
  FUNC_2 ("ldq_u", VAR_10, 3, 1);


  FUNC_6 (VAR_10[0], VAR_2);
  FUNC_6 (VAR_10[1], VAR_0);
  FUNC_6 (VAR_10[2], VAR_2);
  FUNC_2 (VAR_5[VAR_9], VAR_10, 3, 1);


  FUNC_6 (VAR_10[0], VAR_1);
  FUNC_6 (VAR_10[2], VAR_1);
  FUNC_2 (VAR_4[VAR_9], VAR_10, 3, 1);


  FUNC_6 (VAR_10[0], VAR_2);
  FUNC_6 (VAR_10[1], VAR_1);
  VAR_10[2] = VAR_6[0];
  FUNC_2 ("or", VAR_10, 3, 1);
}
