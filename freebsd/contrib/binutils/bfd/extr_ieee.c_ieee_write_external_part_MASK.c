
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_14__ ;


struct TYPE_23__ {int external_part; } ;
struct TYPE_24__ {TYPE_2__ r; } ;
struct TYPE_25__ {TYPE_3__ w; } ;
typedef TYPE_4__ ieee_data_type ;
typedef int file_ptr ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_26__ {int flags; TYPE_6__** outsymbols; } ;
typedef TYPE_5__ bfd ;
struct TYPE_27__ {unsigned int value; int flags; TYPE_14__* section; int name; } ;
typedef TYPE_6__ asymbol ;
struct TYPE_22__ {unsigned int vma; int symbol; } ;
struct TYPE_21__ {int symbol; } ;
struct TYPE_20__ {unsigned int output_offset; TYPE_1__* output_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_17__* VAR_6 ;
 int FUNC_1 (TYPE_14__*) ;
 scalar_t__ FUNC_2 (TYPE_14__*) ;
 scalar_t__ FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,unsigned int,int ,scalar_t__,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd *VAR_12)
{
  asymbol **VAR_13;
  ieee_data_type *VAR_14 = FUNC_0 (VAR_12);
  unsigned int VAR_15 = VAR_4;
  unsigned int VAR_16 = VAR_3 + 2;
  file_ptr VAR_17 = FUNC_4 (VAR_12);
  bfd_boolean VAR_18 = VAR_2;

  if (VAR_12->outsymbols != (asymbol **) ((void*)0))
    {

      for (VAR_13 = VAR_12->outsymbols; *VAR_13 != (asymbol *) ((void*)0); VAR_13++)
 {
   asymbol *VAR_19 = *VAR_13;

   if (FUNC_3 (VAR_19->section))
     {

       if (! FUNC_6 (VAR_12, VAR_8)
    || ! FUNC_9 (VAR_12, (bfd_vma) VAR_15)
    || ! FUNC_8 (VAR_12, VAR_19->name))
  return VAR_2;
       VAR_19->value = VAR_15;
       VAR_15++;
       VAR_18 = VAR_5;
     }
   else if (FUNC_2 (VAR_19->section))
     {

       if (! FUNC_6 (VAR_12, VAR_8)
    || ! FUNC_9 (VAR_12, (bfd_vma) VAR_15)
    || ! FUNC_8 (VAR_12, VAR_19->name)
    || ! FUNC_6 (VAR_12,
     VAR_11)
    || ! FUNC_9 (VAR_12, (bfd_vma) VAR_15)
    || ! FUNC_9 (VAR_12, VAR_19->value))
  return VAR_2;
       VAR_19->value = VAR_15;
       VAR_15++;
       VAR_18 = VAR_5;
     }
   else if (VAR_19->flags & VAR_0)
     {

       if (! FUNC_6 (VAR_12, VAR_9)
    || ! FUNC_9 (VAR_12, (bfd_vma) VAR_16)
    || ! FUNC_8 (VAR_12, VAR_19->name)
    || ! FUNC_5 (VAR_12, VAR_7)
    || ! FUNC_9 (VAR_12, (bfd_vma) VAR_16)
    || ! FUNC_6 (VAR_12, 15)
    || ! FUNC_6 (VAR_12, 19)
    || ! FUNC_6 (VAR_12, 1))
  return VAR_2;


       if (! FUNC_5 (VAR_12, VAR_10)
    || ! FUNC_9 (VAR_12, (bfd_vma) VAR_16))
  return VAR_2;
       if (! FUNC_1 (VAR_19->section))
  {
    if (VAR_12->flags & VAR_1)
      {


        if (! (FUNC_9
        (VAR_12,
         (VAR_19->value
          + VAR_19->section->output_offset
          + VAR_19->section->output_section->vma))))
   return VAR_2;
      }
    else
      {
        if (! (FUNC_7
        (VAR_12,
         VAR_19->value + VAR_19->section->output_offset,
         VAR_19->section->output_section->symbol,
         VAR_2, 0)))
   return VAR_2;
      }
  }
       else
  {
    if (! FUNC_7 (VAR_12,
            VAR_19->value,
            VAR_6->symbol,
            VAR_2, 0))
      return VAR_2;
  }
       VAR_19->value = VAR_16;
       VAR_16++;
       VAR_18 = VAR_5;
     }
   else
     {


     }
 }
    }
  if (VAR_18)
    VAR_14->w.r.external_part = VAR_17;

  return VAR_5;
}
