
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tree ;
typedef int edge_iterator ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_12__ {int succs; } ;
struct TYPE_11__ {scalar_t__ probability; int flags; scalar_t__ count; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_18 (basic_block VAR_5, block_stmt_iterator VAR_6)
{
  edge VAR_7;
  bool VAR_8 = 0;
  tree VAR_9 = FUNC_4 (VAR_6), VAR_10;

  if (!FUNC_17 (VAR_5))
    {
      edge VAR_11;
      edge_iterator VAR_12;
      bool VAR_13;

      FUNC_10 ();

      switch (FUNC_2 (VAR_9))
 {
 case 129:
   VAR_10 = FUNC_9 (FUNC_0 (VAR_9));
   break;

 case 128:
   VAR_10 = FUNC_9 (FUNC_1 (VAR_9));
   if (FUNC_2 (VAR_10) != VAR_2)
     {
       FUNC_11 ();
       return 0;
     }
   break;

 default:
   FUNC_14 ();
 }

      VAR_7 = FUNC_8 (VAR_5, VAR_10);
      if (!VAR_7)
 {
   FUNC_11 ();
   return 0;
 }


      VAR_13 = 0;
      for (VAR_12 = FUNC_7 (VAR_5->succs); (VAR_11 = FUNC_6 (VAR_12)); )
 {
   if (VAR_11 != VAR_7)
     {
       if (!VAR_13)
  {
    FUNC_12
      (1, VAR_9, VAR_4);
    VAR_13 = 1;
  }

       VAR_7->probability += VAR_11->probability;
       VAR_7->count += VAR_11->count;
       FUNC_15 (VAR_11);
       VAR_8 = 1;
     }
   else
     FUNC_5 (&VAR_12);
 }
      if (!VAR_13)
 FUNC_11 ();
      if (VAR_7->probability > VAR_3)
 VAR_7->probability = VAR_3;
    }
  else
    VAR_7 = FUNC_16 (VAR_5);

  FUNC_3 (&VAR_6, 1);
  VAR_7->flags = VAR_1;


  FUNC_13 (VAR_0);

  return VAR_8;
}
