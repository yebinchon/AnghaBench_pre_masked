
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {scalar_t__ value; int flags; TYPE_3__* section; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_8__ {scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ,int ,int ,int) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd *VAR_13,
         bfd_vma VAR_14,
         asymbol *VAR_15,
         bfd_boolean VAR_16,
         unsigned int VAR_17)
{
  unsigned int VAR_18 = 0;

  if (VAR_14 != 0)
    {
      if (! FUNC_9 (VAR_13, VAR_14))
 return VAR_3;
      VAR_18++;
    }



  if (VAR_15 != ((void*)0))
    {
      if (FUNC_5 (VAR_15->section)
   || FUNC_6 (VAR_15->section))
 {

   if (! FUNC_8 (VAR_13, VAR_12)
       || ! FUNC_9 (VAR_13, VAR_15->value))
     return VAR_3;
   VAR_18 ++;
 }
      else if (! FUNC_4 (VAR_15->section))
 {

   if (VAR_15->flags & VAR_0)
     {
       if (! FUNC_8 (VAR_13, VAR_9)
    || ! FUNC_9 (VAR_13, VAR_15->value))
  return VAR_3;
       VAR_18++;
     }
   else if (VAR_15->flags & (VAR_1 | VAR_2))
     {


       if (! FUNC_8 (VAR_13, VAR_11)
    || ! FUNC_8 (VAR_13,
     (bfd_byte) (VAR_15->section->index
          + VAR_4)))
  return VAR_3;

       VAR_18++;
       if (VAR_15->value != 0)
  {
    if (! FUNC_9 (VAR_13, VAR_15->value))
      return VAR_3;
    VAR_18++;
  }
     }
   else
     {
       FUNC_1)
  (FUNC_0("%s: unrecognized symbol `%s' flags 0x%x"),
   FUNC_3 (VAR_13), FUNC_2 (VAR_15),
   VAR_15->flags);
       FUNC_7 (VAR_6);
       return VAR_3;
     }
 }
    }

  if (VAR_16)
    {

      if (! FUNC_8 (VAR_13, VAR_10)
   || ! FUNC_8 (VAR_13,
    (bfd_byte) (VAR_17 + VAR_4))
   || ! FUNC_8 (VAR_13, VAR_7))
 return VAR_3;
    }


  if (VAR_18 == 0)
    if (! FUNC_9 (VAR_13, (bfd_vma) 0))
      return VAR_3;

  while (VAR_18 > 1)
    {
      if (! FUNC_8 (VAR_13, VAR_8))
 return VAR_3;
      VAR_18--;
    }

  return VAR_5;
}
