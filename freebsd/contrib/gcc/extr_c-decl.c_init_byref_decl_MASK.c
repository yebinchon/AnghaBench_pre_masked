
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int,int) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static tree

FUNC_24 (tree VAR_13, tree VAR_14, int VAR_15)
{
  tree VAR_16;
  tree VAR_17 = FUNC_4 (VAR_13);
  int VAR_18 = FUNC_3 (FUNC_7 (VAR_17));
  unsigned VAR_19 = 0;
  tree VAR_20;

  if (FUNC_0 (VAR_13))
    VAR_19 = VAR_4;

  VAR_20 = FUNC_6 (VAR_17);


  VAR_16 = FUNC_23 (VAR_20, FUNC_17 (VAR_10, ((VAR_15 & VAR_3) != 0) ? VAR_8
                 : VAR_9), 0);

  VAR_20 = FUNC_2 (VAR_20);

  VAR_16 = FUNC_23 (VAR_20,
    FUNC_13 (VAR_0, VAR_13, 0), VAR_16);

  VAR_20 = FUNC_2 (VAR_20);

  VAR_16 = FUNC_23 (VAR_20, FUNC_12 (FUNC_4 (VAR_20), VAR_19),
    VAR_16);
  VAR_20 = FUNC_2 (VAR_20);
  VAR_16 = FUNC_23 (VAR_20, FUNC_12 (FUNC_4 (VAR_20), VAR_18),
    VAR_16);
  VAR_20 = FUNC_2 (VAR_20);

  if (FUNC_0 (VAR_13))
    {
      char VAR_21[64];
      int VAR_22 = FUNC_16 ((FUNC_1 (VAR_13)+FUNC_5 (VAR_10)-1) / FUNC_5 (VAR_10));
      int VAR_23;
      if (VAR_22 == -1 || VAR_22 > VAR_1) {
 FUNC_15 ("invalid alignment for __block variable");
 VAR_23 = 0;
      } else
 VAR_23 = VAR_22*VAR_2 + VAR_15;


      if (!VAR_6[VAR_23])
 {

   tree VAR_24 =
     FUNC_10 (VAR_12,
     FUNC_23 (VAR_5, VAR_10,
         FUNC_23 (VAR_5, VAR_10,
             VAR_11)));
   FUNC_20 (VAR_21, "__Block_byref_id_object_copy%d", VAR_23);
   VAR_6[VAR_23] = FUNC_11 (FUNC_18 (VAR_21),
             VAR_24);

   FUNC_21 (VAR_15, VAR_23);
 }
      VAR_16 = FUNC_23 (VAR_20,
       FUNC_9 (VAR_6[VAR_23]),
       VAR_16);
      VAR_20 = FUNC_2 (VAR_20);

      if (!VAR_7[VAR_23])
 {


   tree VAR_25 =
     FUNC_10 (VAR_12,
     FUNC_23 (VAR_5, VAR_10, VAR_11));
   FUNC_20 (VAR_21, "__Block_byref_id_object_dispose%d", VAR_23);
   VAR_7[VAR_23] = FUNC_11 (FUNC_18 (VAR_21),
         VAR_25);

   FUNC_22 (VAR_15, VAR_23);
 }
      VAR_16 = FUNC_23 (VAR_20,
       FUNC_9 (VAR_7[VAR_23]),
       VAR_16);
      VAR_20 = FUNC_2 (VAR_20);
    }

  if (VAR_14)
    {
      VAR_14 = FUNC_14 (FUNC_4 (VAR_20), VAR_14);
      VAR_16 = FUNC_23 (VAR_20, VAR_14, VAR_16);
    }
  VAR_14 = FUNC_8 (VAR_17, FUNC_19 (VAR_16));
  return VAR_14;
}
