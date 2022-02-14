
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {TYPE_2__* next; } ;
struct TYPE_7__ {scalar_t__ kind; scalar_t__ type; TYPE_1__ u; scalar_t__ check_copy_constructor_p; scalar_t__ bad_p; } ;
typedef TYPE_2__ conversion ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_2__*,scalar_t__,scalar_t__,int ,int,int,int) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__,int ) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (int *,void*) ;
 scalar_t__ FUNC_24 (int ,scalar_t__) ;
 int FUNC_25 (scalar_t__) ;
 TYPE_2__* FUNC_26 (scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_27 (scalar_t__,int,int ) ;
 int VAR_12 ;
 int FUNC_28 (scalar_t__,scalar_t__,int ) ;

tree
FUNC_29 (tree VAR_13, tree VAR_14, tree VAR_15, tree *VAR_16)
{
  conversion *VAR_17;
  void *VAR_18;

  if (VAR_13 == VAR_11 || FUNC_18 (VAR_14))
    return VAR_11;


  VAR_18 = FUNC_12 (0);

  VAR_17 = FUNC_26 (VAR_13, FUNC_1 (VAR_14), VAR_14, 0,
       VAR_3);
  if (!VAR_17 || VAR_17->bad_p)
    {
      if (!(FUNC_3 (FUNC_1 (VAR_13)) & VAR_6)
   && !FUNC_25 (VAR_14))
 FUNC_17 ("invalid initialization of non-const reference of "
        "type %qT from a temporary of type %qT",
        VAR_13, FUNC_1 (VAR_14));
      else
 FUNC_17 ("invalid initialization of reference of type "
        "%qT from expression of type %qT", VAR_13,
        FUNC_1 (VAR_14));
      return VAR_11;
    }
  FUNC_19 (VAR_17->kind == VAR_9);
  if (VAR_15)
    {
      tree VAR_19;
      tree VAR_20;


      VAR_17 = VAR_17->u.next;


      if (VAR_17->kind == VAR_8)
 {
   if (VAR_17->check_copy_constructor_p)
     FUNC_11 (FUNC_1 (VAR_14), VAR_14);
   VAR_20 = VAR_17->type;
   VAR_17 = VAR_17->u.next;
 }
      else
 VAR_20 = VAR_4;

      VAR_14 = FUNC_14 (VAR_17, VAR_14,
           VAR_4, 0,
              -1,
                                  1,
                 0);
      if (FUNC_18 (VAR_14))
 VAR_14 = VAR_11;
      else
 {
   if (!FUNC_25 (VAR_14))
     {
       tree VAR_21;
       tree VAR_22;


       VAR_22 = FUNC_1 (VAR_14);
       VAR_19 = FUNC_22 (VAR_15, VAR_22);
       FUNC_21 (VAR_19, 0);
       if (FUNC_0 (VAR_14) != VAR_5)
  VAR_14 = FUNC_20 (VAR_14);


       VAR_21 = FUNC_6 (VAR_2, VAR_22, VAR_19, VAR_14);
       if (FUNC_5 ())
  {
    FUNC_4 (VAR_19);
    *VAR_16 = FUNC_16 (VAR_19);
  }
       else
  {
    FUNC_27 (VAR_19, 1, VAR_7);
    if (FUNC_2 (VAR_22))
      VAR_12 = FUNC_28 (VAR_4, VAR_19,
         VAR_12);
  }

       VAR_14 = FUNC_7 (VAR_19);
       if (VAR_20)
  VAR_14 = FUNC_15 (VAR_14,
     FUNC_9 (VAR_20),
                      1,
                 1);
       VAR_14 = FUNC_6 (VAR_1, FUNC_1 (VAR_14), VAR_21, VAR_14);
     }
   else

     VAR_14 = FUNC_10 (VAR_0, VAR_14, 0);

   if (VAR_20)
     VAR_14 = (FUNC_24
      (FUNC_9 (VAR_20), VAR_14));
   VAR_14 = FUNC_8 (VAR_13, VAR_14);
 }
    }
  else

    VAR_14 = FUNC_13 (VAR_17, VAR_14);


  FUNC_23 (&VAR_10, VAR_18);

  return VAR_14;
}
