
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct external_nlist {int* e_type; int e_value; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_16__ {int flags; int * name; scalar_t__ value; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_17__ {scalar_t__ vma; struct TYPE_17__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_2__ asection ;
struct TYPE_18__ {int type; } ;
typedef TYPE_3__ aout_symbol_type ;


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
 int FUNC_0 (int *,scalar_t__,int ) ;
 int VAR_20 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 int VAR_21 ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (int *,int ,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_17 (bfd *VAR_22,
          asymbol *VAR_23,
          struct external_nlist *VAR_24)
{
  bfd_vma VAR_25 = VAR_23->value;
  asection *VAR_26;
  bfd_vma VAR_27;



  VAR_24->e_type[0] &= ~VAR_13;

  VAR_26 = FUNC_5 (VAR_23);
  VAR_27 = 0;

  if (VAR_26 == ((void*)0))
    {


      FUNC_2)
 (FUNC_1("%s: can not represent section for symbol `%s' in a.out object file format"),
  FUNC_4 (VAR_22),
  VAR_23->name != ((void*)0) ? VAR_23->name : FUNC_1("*unknown*"));
      FUNC_11 (VAR_21);
      return VAR_6;
    }

  if (VAR_26->output_section != ((void*)0))
    {
      VAR_27 = VAR_26->output_offset;
      VAR_26 = VAR_26->output_section;
    }

  if (FUNC_7 (VAR_26))
    VAR_24->e_type[0] |= 132;
  else if (VAR_26 == FUNC_14 (VAR_22))
    VAR_24->e_type[0] |= 129;
  else if (VAR_26 == FUNC_13 (VAR_22))
    VAR_24->e_type[0] |= 130;
  else if (VAR_26 == FUNC_12 (VAR_22))
    VAR_24->e_type[0] |= 131;
  else if (FUNC_10 (VAR_26))
    VAR_24->e_type[0] = 128 | VAR_7;
  else if (FUNC_9 (VAR_26))
    VAR_24->e_type[0] = VAR_8;
  else if (FUNC_8 (VAR_26))
    VAR_24->e_type[0] = 128 | VAR_7;
  else
    {
      if (FUNC_3 (VAR_22, VAR_26))
 VAR_24->e_type[0] |= 129;
      else
 {
          FUNC_2)
    (FUNC_1("%s: can not represent section `%s' in a.out object file format"),
      FUNC_4 (VAR_22), FUNC_6 (VAR_22, VAR_26));
          FUNC_11 (VAR_21);
          return VAR_6;
 }
    }


  VAR_25 += VAR_26->vma + VAR_27;

  if ((VAR_23->flags & VAR_4) != 0)
    VAR_24->e_type[0] = VAR_14;

  if ((VAR_23->flags & VAR_1) != 0)
    VAR_24->e_type[0] = ((aout_symbol_type *) VAR_23)->type;
  else if ((VAR_23->flags & VAR_2) != 0)
    VAR_24->e_type[0] |= VAR_7;
  else if ((VAR_23->flags & VAR_3) != 0)
    VAR_24->e_type[0] &= ~VAR_7;

  if ((VAR_23->flags & VAR_0) != 0)
    {
      int VAR_28 = ((aout_symbol_type *) VAR_23)->type;

      switch (VAR_28)
 {
 case 132: VAR_28 = VAR_9; break;
 case 129: VAR_28 = VAR_12; break;
 case 130: VAR_28 = VAR_11; break;
 case 131: VAR_28 = VAR_10; break;
 }
      VAR_24->e_type[0] = VAR_28;
    }

  if ((VAR_23->flags & VAR_5) != 0)
    {
      int VAR_29;

      switch (VAR_24->e_type[0] & VAR_13)
 {
 default:
 case 132: VAR_29 = VAR_15; break;
 case 129: VAR_29 = VAR_18; break;
 case 130: VAR_29 = VAR_17; break;
 case 131: VAR_29 = VAR_16; break;
 case 128: VAR_29 = VAR_19; break;
 }
      VAR_24->e_type[0] = VAR_29;
    }

  FUNC_0 (VAR_22, VAR_25, VAR_24->e_value);

  return VAR_20;
}
