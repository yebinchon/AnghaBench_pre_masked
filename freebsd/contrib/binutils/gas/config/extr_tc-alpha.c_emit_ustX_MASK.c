
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_1__*,int,int) ;
 char** VAR_5 ;
 char** VAR_6 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;
 char** VAR_7 ;
 char** VAR_8 ;
 int FUNC_2 (TYPE_1__,int) ;
 int FUNC_3 (TYPE_1__,int ) ;
 int FUNC_4 (TYPE_1__,int ) ;

__attribute__((used)) static void
FUNC_5 (const expressionS *VAR_9,
    int VAR_10,
    const void * VAR_11)
{
  int VAR_12 = (int) (long) VAR_11;
  expressionS VAR_13[3];


  FUNC_1 (VAR_13, VAR_9, sizeof (expressionS) * VAR_10);
  VAR_13[0].X_add_number = VAR_0;
  FUNC_0 ("lda", VAR_13, VAR_10, 1);


  FUNC_4 (VAR_13[0], VAR_4);
  FUNC_2 (VAR_13[1], 0);
  FUNC_3 (VAR_13[2], VAR_0);
  FUNC_0 ("ldq_u", VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_1);
  FUNC_2 (VAR_13[1], (1 << VAR_12) - 1);
  FUNC_0 ("ldq_u", VAR_13, 3, 1);


  VAR_13[0] = VAR_9[0];
  FUNC_4 (VAR_13[1], VAR_0);
  FUNC_4 (VAR_13[2], VAR_2);
  FUNC_0 (VAR_6[VAR_12], VAR_13, 3, 1);


  FUNC_4 (VAR_13[2], VAR_3);
  FUNC_0 (VAR_5[VAR_12], VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_4);
  VAR_13[2] = VAR_13[0];
  FUNC_0 (VAR_8[VAR_12], VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_1);
  VAR_13[2] = VAR_13[0];
  FUNC_0 (VAR_7[VAR_12], VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_4);
  FUNC_4 (VAR_13[1], VAR_2);
  VAR_13[2] = VAR_13[0];
  FUNC_0 ("or", VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_1);
  FUNC_4 (VAR_13[1], VAR_3);
  VAR_13[2] = VAR_13[0];
  FUNC_0 ("or", VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_1);
  FUNC_2 (VAR_13[1], (1 << VAR_12) - 1);
  FUNC_3 (VAR_13[2], VAR_0);
  FUNC_0 ("stq_u", VAR_13, 3, 1);


  FUNC_4 (VAR_13[0], VAR_4);
  FUNC_2 (VAR_13[1], 0);
  FUNC_0 ("stq_u", VAR_13, 3, 1);
}
