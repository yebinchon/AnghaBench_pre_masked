
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int * tree ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_30__ {int succs; } ;
struct TYPE_29__ {int flags; int dest_idx; TYPE_2__* dest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 unsigned int VAR_3 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*,TYPE_1__*,TYPE_1__*,int *,int *,int *) ;
 TYPE_2__** FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_1__*,TYPE_1__*,int *,int *,int *) ;
 int FUNC_8 (TYPE_2__**) ;
 int FUNC_9 (int) ;
 int * FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_2__*,TYPE_1__*,TYPE_1__*,int *,int *,int *) ;
 unsigned int VAR_5 ;
 int * FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (TYPE_2__*,TYPE_2__*,TYPE_1__*,TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static unsigned int
FUNC_17 (void)
{
  basic_block VAR_6;
  basic_block *VAR_7;
  unsigned VAR_8, VAR_9;
  bool VAR_10 = 0;
  VAR_7 = FUNC_6 ();
  VAR_8 = VAR_5 - VAR_3;

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      tree VAR_11;
      tree VAR_12;
      basic_block VAR_13, VAR_14;
      edge VAR_15, VAR_16;
      tree VAR_17, VAR_18;

      VAR_6 = VAR_7[VAR_9];

      VAR_11 = FUNC_10 (VAR_6);

      if (!VAR_11
          || FUNC_4 (VAR_11) != VAR_0)
        continue;

      VAR_15 = FUNC_1 (VAR_6, 0);
      VAR_13 = VAR_15->dest;
      VAR_16 = FUNC_1 (VAR_6, 1);
      VAR_14 = VAR_16->dest;


      if ((VAR_15->flags & VAR_1) != 0
          || (VAR_16->flags & VAR_1) != 0)
       continue;


      if (FUNC_0 (VAR_13->succs) == 0
          || VAR_14 == ((void*)0)
   || FUNC_0 (VAR_14->succs) == 0)
        continue;


      if (FUNC_1 (VAR_13, 0)->dest == VAR_14)
        ;
      else if (FUNC_1 (VAR_14, 0)->dest == VAR_13)
        {
   basic_block VAR_19 = VAR_13;
   edge VAR_20 = VAR_15;
   VAR_13 = VAR_14;
   VAR_14 = VAR_19;
   VAR_15 = VAR_16;
   VAR_16 = VAR_20;
 }
      else
        continue;

      VAR_15 = FUNC_1 (VAR_13, 0);


      if (!FUNC_15 (VAR_13)
   || (VAR_15->flags & VAR_2) == 0)
        continue;



      if (!FUNC_14 (VAR_13)
          || FUNC_13 (VAR_13) != VAR_6)
 continue;

      VAR_12 = FUNC_12 (VAR_14);




      if (!VAR_12 || FUNC_3 (VAR_12) != ((void*)0))
 continue;

      VAR_17 = FUNC_2 (VAR_12, VAR_15->dest_idx);
      VAR_18 = FUNC_2 (VAR_12, VAR_16->dest_idx);



      FUNC_9 (VAR_17 != ((void*)0) && VAR_18 != ((void*)0));


      if (FUNC_7 (VAR_6, VAR_13, VAR_15, VAR_16, VAR_12, VAR_17, VAR_18))
 VAR_10 = 1;
      else if (FUNC_16 (VAR_6, VAR_13, VAR_15, VAR_16, VAR_12, VAR_17, VAR_18))
 VAR_10 = 1;
      else if (FUNC_5 (VAR_6, VAR_13, VAR_15, VAR_16, VAR_12, VAR_17, VAR_18))
 VAR_10 = 1;
      else if (FUNC_11 (VAR_6, VAR_13, VAR_15, VAR_16, VAR_12, VAR_17, VAR_18))
 VAR_10 = 1;
    }

  FUNC_8 (VAR_7);


  return VAR_10 ? VAR_4 : 0;
}
