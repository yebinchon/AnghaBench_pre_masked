
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* priority_info ;
struct TYPE_3__ {int initializations_p; int destructions_p; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 TYPE_1__* FUNC_12 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_13 (scalar_t__,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_14 (tree VAR_6, bool VAR_7)
{
  tree VAR_8, VAR_9, VAR_10;


  VAR_9 = FUNC_6 ();
  VAR_10 = VAR_7 ? VAR_3 : VAR_4;
  VAR_10 = FUNC_8 (VAR_0,
      VAR_2,
      VAR_10);
  FUNC_10 (VAR_10, VAR_9);

  VAR_8 = VAR_6;
  do {
    tree VAR_11 = FUNC_4 (VAR_8);
    tree VAR_12;
    int VAR_13;
    priority_info VAR_14;



    if (!VAR_7 && FUNC_5 (FUNC_3 (VAR_11)))
      {
 VAR_8 = FUNC_1 (VAR_8);
 continue;
      }



    VAR_13 = FUNC_0 (VAR_11);
    VAR_14 = FUNC_12 (VAR_13);
    if (VAR_7)
      VAR_14->initializations_p = 1;
    else
      VAR_14->destructions_p = 1;



    VAR_12 = FUNC_6 ();
    VAR_10 = FUNC_8 (VAR_0,
          VAR_5,
          FUNC_7 (VAR_1, VAR_13));
    FUNC_10 (VAR_10, VAR_12);


    for (; VAR_8
    && FUNC_0 (FUNC_4 (VAR_8)) == VAR_13;
  VAR_8 = FUNC_1 (VAR_8))

      FUNC_13 (FUNC_4 (VAR_8),
      FUNC_2 (VAR_8), VAR_7);


    FUNC_11 (VAR_12);
    FUNC_9 (VAR_12);

  } while (VAR_8);


  FUNC_11 (VAR_9);
  FUNC_9 (VAR_9);
}
