
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int tree_stmt_iterator ;
typedef int tree ;
typedef int location_t ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_23__ {int count; } ;
struct TYPE_22__ {int probability; int count; int flags; TYPE_2__* dest; TYPE_2__* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 int VAR_22 ;
 TYPE_2__* FUNC_4 (int ) ;
 int VAR_23 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 TYPE_2__* FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (int ) ;
 TYPE_1__* FUNC_21 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_24 ;
 int FUNC_22 (int ,int ,int ,int ) ;
 int FUNC_23 (int *) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_24 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_25 (TYPE_2__*,TYPE_2__*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_26 (int ) ;
 int VAR_35 ;
 int FUNC_27 (int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_28 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (int ,int ,int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int *,int ,int ) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int VAR_36 ;

__attribute__((used)) static void
FUNC_39 (tree VAR_37, tree VAR_38,
                              block_stmt_iterator *VAR_39,
                              location_t *VAR_40, tree VAR_41)
{
  tree_stmt_iterator VAR_42, VAR_43;
  block_stmt_iterator VAR_44;
  basic_block VAR_45, VAR_46, VAR_47;
  edge VAR_48;
  tree VAR_49, VAR_50, VAR_51, VAR_52;
  tree VAR_53;
  tree VAR_54;
  tree VAR_55;





  VAR_45 = FUNC_4 (FUNC_11 (*VAR_39));
  VAR_44 = *VAR_39;
  FUNC_9 (&VAR_44);
  if (! FUNC_5 (VAR_44))
    VAR_48 = FUNC_28 (VAR_45, FUNC_11 (VAR_44));
  else
    VAR_48 = FUNC_29 (VAR_45);
  VAR_45 = VAR_48->src;
  VAR_47 = VAR_48->dest;
  VAR_46 = FUNC_18 (VAR_45);
  FUNC_24 (VAR_45, VAR_46, VAR_9);
  FUNC_25 (VAR_46, VAR_47, VAR_7);


  VAR_48 = FUNC_21 (VAR_45, VAR_47);
  VAR_48->flags = VAR_8;
  VAR_48->count = VAR_45->count;
  VAR_48->probability = VAR_18;



  if (FUNC_20 (VAR_4))
    {
      FUNC_27 (VAR_4, VAR_46, VAR_45);
      FUNC_27 (VAR_4, VAR_47, VAR_45);
    }


  VAR_54 = FUNC_19 (VAR_33, "__mf_elem");
  VAR_53 = FUNC_19 (VAR_35, "__mf_base");
  VAR_55 = FUNC_19 (VAR_35, "__mf_limit");


  VAR_50 = FUNC_13 (VAR_15, VAR_36, VAR_53,
              FUNC_17 (VAR_35, FUNC_38 (VAR_37)));
  FUNC_0 (VAR_50, VAR_40);
  FUNC_23 (&VAR_50);
  VAR_42 = FUNC_36 (VAR_50);
  VAR_43 = FUNC_33 (VAR_50);


  VAR_50 = FUNC_13 (VAR_15, VAR_36, VAR_55,
              FUNC_17 (VAR_35, FUNC_38 (VAR_38)));
  FUNC_0 (VAR_50, VAR_40);
  FUNC_23 (&VAR_50);
  FUNC_34 (&VAR_43, VAR_50, VAR_21);



  VAR_50 = FUNC_13 (VAR_19, VAR_35, VAR_53,
              (VAR_24 ? VAR_30 : VAR_31));
  VAR_50 = FUNC_13 (VAR_2, VAR_35, VAR_50,
              (VAR_24 ? VAR_28 : VAR_29));
  VAR_50 = FUNC_15 (VAR_1,
              FUNC_2 (FUNC_2 (VAR_27)),
              VAR_27, VAR_50, VAR_16, VAR_16);
  VAR_50 = FUNC_12 (VAR_0, VAR_33, VAR_50);
  VAR_50 = FUNC_13 (VAR_15, VAR_36, VAR_54, VAR_50);
  FUNC_0 (VAR_50, VAR_40);
  FUNC_23 (&VAR_50);
  FUNC_34 (&VAR_43, VAR_50, VAR_21);
  VAR_50 = FUNC_14 (VAR_5, VAR_35,
              FUNC_12 (VAR_12, VAR_32, VAR_54),
              FUNC_3 (VAR_32), VAR_16);
  VAR_50 = FUNC_13 (VAR_11, VAR_23, VAR_50, VAR_53);
  VAR_51 = FUNC_14 (VAR_5, VAR_35,
              FUNC_12 (VAR_12, VAR_32, VAR_54),
              FUNC_1 (FUNC_3 (VAR_32)), VAR_16);

  VAR_52 = VAR_55;

  VAR_51 = FUNC_13 (VAR_13, VAR_23, VAR_51, VAR_52);




  VAR_50 = FUNC_13 (VAR_20, VAR_23, VAR_50, VAR_51);
  VAR_49 = FUNC_19 (VAR_23, "__mf_unlikely_cond");
  VAR_50 = FUNC_13 (VAR_15, VAR_23, VAR_49, VAR_50);
  FUNC_23 (&VAR_50);
  FUNC_34 (&VAR_43, VAR_50, VAR_21);



  VAR_50 = FUNC_14 (VAR_6, VAR_36, VAR_49,
              FUNC_12 (VAR_10, VAR_36, FUNC_30 (VAR_46)),
              FUNC_12 (VAR_10, VAR_36, FUNC_30 (VAR_47)));
  FUNC_0 (VAR_50, VAR_40);
  FUNC_34 (&VAR_43, VAR_50, VAR_21);
  VAR_44 = FUNC_7 (VAR_45);
  for (VAR_43 = VAR_42; ! FUNC_32 (VAR_43); FUNC_35 (&VAR_43))
    FUNC_6 (&VAR_44, FUNC_37 (VAR_43), VAR_3);
  VAR_51 = FUNC_31 (VAR_16,
                 FUNC_26 (VAR_40 == ((void*)0) ? VAR_22
                                             : *VAR_40),
                 VAR_16);
  VAR_51 = FUNC_31 (VAR_16, VAR_41, VAR_51);

  VAR_51 = FUNC_31 (VAR_16,
                 FUNC_22 (VAR_17, VAR_26,
         FUNC_22 (VAR_14, VAR_35, VAR_55, VAR_53),
         VAR_25),
                 VAR_51);
  VAR_51 = FUNC_31 (VAR_16, VAR_53, VAR_51);
  VAR_50 = FUNC_16 (VAR_34, VAR_51);
  FUNC_23 (&VAR_50);
  VAR_42 = FUNC_36 (VAR_50);
  VAR_43 = FUNC_33 (VAR_50);

  if (! VAR_24)
    {
      VAR_50 = FUNC_13 (VAR_15, VAR_36,
                  VAR_31, VAR_30);
      FUNC_34 (&VAR_43, VAR_50, VAR_21);

      VAR_50 = FUNC_13 (VAR_15, VAR_36,
                  VAR_29, VAR_28);
      FUNC_34 (&VAR_43, VAR_50, VAR_21);
    }


  VAR_44 = FUNC_10 (VAR_46);
  for (VAR_43 = VAR_42; ! FUNC_32 (VAR_43); FUNC_35 (&VAR_43))
    FUNC_6 (&VAR_44, FUNC_37 (VAR_43), VAR_3);

  *VAR_39 = FUNC_10 (VAR_47);
  FUNC_8 (VAR_39);
}
