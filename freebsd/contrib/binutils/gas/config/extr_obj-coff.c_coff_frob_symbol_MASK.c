
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {int x_dimen; } ;
struct TYPE_22__ {TYPE_3__ x_ary; } ;
struct TYPE_23__ {TYPE_4__ x_fcnary; } ;
union internal_auxent {TYPE_5__ x_sym; } ;
typedef int symbolS ;
struct TYPE_19__ {int offset; int * sym; } ;
struct TYPE_24__ {TYPE_1__ u; scalar_t__ line_number; } ;
struct line_no {struct line_no* next; TYPE_6__ l; TYPE_2__* frag; } ;
typedef int stack ;
typedef TYPE_6__ alent ;
struct TYPE_25__ {int X_add_symbol; } ;
struct TYPE_20__ {int fr_address; } ;
struct TYPE_18__ {TYPE_6__* lineno; } ;
struct TYPE_17__ {int * sym; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 union internal_auxent* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,scalar_t__) ;
 int FUNC_25 (int *,scalar_t__) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (char*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (char*,...) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int *,int *) ;
 int FUNC_33 (int *) ;
 int * VAR_17 ;
 int * VAR_18 ;
 TYPE_13__* FUNC_34 (TYPE_11__*) ;
 scalar_t__ VAR_19 ;
 int FUNC_35 (int ,int ,int) ;
 TYPE_12__* FUNC_36 (scalar_t__) ;
 int * FUNC_37 (int,int) ;
 scalar_t__ FUNC_38 (int *) ;
 int FUNC_39 (int *,char*) ;
 scalar_t__ FUNC_40 (int ,char*) ;
 scalar_t__ FUNC_41 (int *) ;
 scalar_t__ FUNC_42 (int *) ;
 int * FUNC_43 (int ,int) ;
 TYPE_11__* FUNC_44 (int *) ;
 int FUNC_45 (int *) ;
 TYPE_10__* FUNC_46 (int *) ;
 TYPE_8__* FUNC_47 (int *) ;
 int FUNC_48 (int *,int ) ;
 int FUNC_49 (int *,TYPE_8__*) ;
 int FUNC_50 (int *) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_51 (int ) ;
 scalar_t__ FUNC_52 (int ) ;
 int FUNC_53 (int ) ;
 TYPE_6__* FUNC_54 (int) ;

void
FUNC_55 (symbolS *VAR_22, int *VAR_23)
{
  static symbolS *VAR_24;
  static stack *VAR_25;
  static symbolS *VAR_26;
  symbolS *VAR_27 = ((void*)0);

  if (VAR_22 == &VAR_15)
    {
      *VAR_23 = 1;
      return;
    }

  if (VAR_19)
    FUNC_33 (((void*)0));

  if (!VAR_25)
    VAR_25 = FUNC_37 (512, sizeof (symbolS*));
  if (FUNC_19 (VAR_22))
    FUNC_25 (VAR_22, VAR_13);


  if (!FUNC_17 (VAR_22)
      && !FUNC_19 (VAR_22)
      && FUNC_14 (VAR_22) != VAR_12)
    FUNC_25 (VAR_22, VAR_6);

  if (!FUNC_3 (VAR_22))
    {
      symbolS * VAR_28;

      if (!FUNC_5 (VAR_22)
   && !FUNC_7 (VAR_22)
   && FUNC_14 (VAR_22) != VAR_9
   && FUNC_41 (VAR_22)
   && (VAR_28 = FUNC_43 (FUNC_11 (VAR_22), 1))
   && FUNC_14 (VAR_28) == VAR_11
   && VAR_28 != VAR_22)
 {
   FUNC_32 (VAR_22, VAR_28);
   *VAR_23 = 1;
   return;
 }

      if (!FUNC_17 (VAR_22) && !FUNC_5 (VAR_22))
 {
   FUNC_31 (FUNC_15 (VAR_22) == 0);
   if (FUNC_20 (VAR_22))
     *VAR_23 = 1;
   else
     FUNC_21 (VAR_22);
 }
      else if (FUNC_14 (VAR_22) == VAR_11)
 {
   if (FUNC_13 (VAR_22) == VAR_20
       && VAR_22 != FUNC_36 (VAR_20)->sym)
     FUNC_25 (VAR_22, VAR_9);
   else
     FUNC_25 (VAR_22, VAR_12);
 }

      if (FUNC_6 (VAR_22))
 {
   if (FUNC_14 (VAR_22) == VAR_3)
     {
       if (FUNC_40 (FUNC_11 (VAR_22), ".bb"))
  FUNC_39 (VAR_25, (char *) &VAR_22);
       else
  {
    symbolS *VAR_29;

    VAR_29 = *(symbolS **) FUNC_38 (VAR_25);
    if (VAR_29 == 0)
      FUNC_30 (FUNC_27("mismatched .eb"));
    else
      VAR_27 = VAR_29;
  }
     }

   if (VAR_18 == 0 && FUNC_4 (VAR_22))
     {
       union internal_auxent *VAR_30;

       VAR_18 = VAR_22;
       if (FUNC_12 (VAR_22) < 1)
  FUNC_23 (VAR_22, 1);
       VAR_30 = FUNC_9 (VAR_22);
       FUNC_35 (VAR_30->x_sym.x_fcnary.x_ary.x_dimen, 0,
        sizeof (VAR_30->x_sym.x_fcnary.x_ary.x_dimen));
     }

   if (FUNC_14 (VAR_22) == VAR_4)
     {
       if (VAR_18 == 0)
  FUNC_29 (FUNC_27("C_EFCN symbol for %s out of scope"),
     FUNC_11 (VAR_22));
       FUNC_1 (VAR_18,
    (long) (FUNC_15 (VAR_22)
     - FUNC_15 (VAR_18)));
       VAR_27 = VAR_18;
       VAR_18 = 0;
     }
 }

      if (FUNC_18 (VAR_22))
 FUNC_25 (VAR_22, VAR_6);
      else if (FUNC_5 (VAR_22))
 *VAR_23 = 1;

      if (FUNC_4 (VAR_22))
 FUNC_44 (VAR_22)->flags |= VAR_0;
    }


  if (FUNC_19 (VAR_22) && FUNC_16 (VAR_22))
    FUNC_28 (FUNC_27("Symbol `%s' can not be both weak and common"),
     FUNC_11 (VAR_22));

  if (FUNC_8 (VAR_22))
    VAR_24 = VAR_22;
  else if (FUNC_14 (VAR_22) == VAR_5)
    VAR_27 = VAR_24;
  if (VAR_26 != (symbolS *) ((void*)0)
      && ! *VAR_23
      && ((FUNC_44 (VAR_22)->flags & VAR_1) != 0
   || (FUNC_17 (VAR_22)
       && ! FUNC_16 (VAR_22)
       && (! FUNC_18 (VAR_22) || FUNC_4 (VAR_22)))))
    {
      FUNC_0 (VAR_26, VAR_22);
      VAR_26 = ((void*)0);
    }

  if (VAR_27 != ((void*)0))
    {
      if (VAR_26 != ((void*)0))
 FUNC_30 ("Warning: internal error: forgetting to set endndx of %s",
   FUNC_11 (VAR_26));
      VAR_26 = VAR_27;
    }


  if (! *VAR_23
      && FUNC_14 (VAR_22) == VAR_7
      && FUNC_40 (FUNC_11 (VAR_22), ".bf"))
    {
      if (VAR_17 != ((void*)0))
 FUNC_0 (VAR_17, VAR_22);
      VAR_17 = VAR_22;
    }

  if (FUNC_34 (FUNC_44 (VAR_22))->lineno)
    {
      int VAR_31;
      struct line_no *VAR_32;
      alent *VAR_33;

      VAR_32 = (struct line_no *) FUNC_34 (FUNC_44 (VAR_22))->lineno;
      for (VAR_31 = 0; VAR_32; VAR_32 = VAR_32->next)
 VAR_31++;
      VAR_32 = (struct line_no *) FUNC_34 (FUNC_44 (VAR_22))->lineno;




      VAR_33 = FUNC_54 ((VAR_31 + 2) * sizeof (* VAR_33));
      FUNC_34 (FUNC_44 (VAR_22))->lineno = VAR_33;
      VAR_33[VAR_31 + 1].line_number = 0;
      VAR_33[VAR_31 + 1].u.sym = ((void*)0);
      for (; VAR_31 > 0; VAR_31--)
 {
   if (VAR_32->frag)
     VAR_32->l.u.offset += VAR_32->frag->fr_address / VAR_14;
   VAR_33[VAR_31] = VAR_32->l;
   VAR_32 = VAR_32->next;
 }
    }
}
