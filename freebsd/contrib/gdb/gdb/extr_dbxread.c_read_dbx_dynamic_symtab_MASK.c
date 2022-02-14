
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct objfile {int section_offsets; int * obfd; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
struct TYPE_14__ {int value; int flags; int address; struct TYPE_14__** sym_ptr_ptr; TYPE_1__* howto; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_15__ {int vma; } ;
typedef TYPE_3__ asection ;
typedef TYPE_2__ arelent ;
struct TYPE_13__ {int type; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (struct objfile*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 long FUNC_5 (int *,TYPE_2__**,TYPE_2__**) ;
 long FUNC_6 (int *,TYPE_2__**) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (int *) ;
 long FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (struct cleanup*) ;
 struct cleanup* FUNC_16 (int ,TYPE_2__**) ;
 int VAR_12 ;
 int FUNC_17 (char*,int,int ,struct objfile*) ;
 int FUNC_18 (char*,int,int,struct objfile*) ;
 int VAR_13 ;
 scalar_t__ FUNC_19 (long) ;

__attribute__((used)) static void
FUNC_20 (struct objfile *VAR_14)
{
  bfd *VAR_15 = VAR_14->obfd;
  struct cleanup *VAR_16;
  int VAR_17;
  long VAR_18;
  long VAR_19;
  asymbol **VAR_20;
  asymbol **VAR_21;
  arelent **VAR_22;
  long VAR_23;
  long VAR_24;
  arelent **VAR_25;
  CORE_ADDR VAR_26;
  char *VAR_27;






  if (FUNC_11 (VAR_15) != VAR_11
      || (FUNC_10 (VAR_15) & VAR_1) == 0
      || FUNC_7 (VAR_15) == VAR_10)
    return;

  VAR_18 = FUNC_9 (VAR_15);
  if (VAR_18 < 0)
    return;

  VAR_20 = (asymbol **) FUNC_19 (VAR_18);
  VAR_16 = FUNC_16 (VAR_13, VAR_20);

  VAR_19 = FUNC_6 (VAR_15, VAR_20);
  if (VAR_19 < 0)
    {
      FUNC_15 (VAR_16);
      return;
    }



  if (FUNC_14 (VAR_15) <= 0)
    {
      VAR_21 = VAR_20;
      for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++, VAR_21++)
 {
   asymbol *VAR_28 = *VAR_21;
   asection *VAR_29;
   int VAR_30;

   VAR_29 = FUNC_12 (VAR_28);


   VAR_26 = VAR_28->value + VAR_29->vma;

   if (FUNC_13 (VAR_15, VAR_29) & VAR_8)
     {
       VAR_26 += FUNC_0 (VAR_14->section_offsets, FUNC_3 (VAR_14));
       VAR_30 = VAR_5;
     }
   else if (FUNC_13 (VAR_15, VAR_29) & VAR_9)
     {
       VAR_26 += FUNC_0 (VAR_14->section_offsets, FUNC_2 (VAR_14));
       VAR_30 = VAR_3;
     }
   else if (FUNC_13 (VAR_15, VAR_29) & VAR_7)
     {
       VAR_26 += FUNC_0 (VAR_14->section_offsets, FUNC_1 (VAR_14));
       VAR_30 = VAR_2;
     }
   else
     continue;

   if (VAR_28->flags & VAR_0)
     VAR_30 |= VAR_4;

   FUNC_18 ((char *) FUNC_4 (VAR_28), VAR_26,
     VAR_30, VAR_14);
 }
    }





  VAR_23 = FUNC_8 (VAR_15);
  if (VAR_23 < 0)
    {
      FUNC_15 (VAR_16);
      return;
    }

  VAR_25 = (arelent **) FUNC_19 (VAR_23);
  FUNC_16 (VAR_13, VAR_25);

  VAR_24 = FUNC_5 (VAR_15, VAR_25, VAR_20);
  if (VAR_24 < 0)
    {
      FUNC_15 (VAR_16);
      return;
    }

  for (VAR_17 = 0, VAR_22 = VAR_25;
       VAR_17 < VAR_24;
       VAR_17++, VAR_22++)
    {
      arelent *VAR_31 = *VAR_22;
      CORE_ADDR VAR_32 =
      VAR_31->address + FUNC_0 (VAR_14->section_offsets, FUNC_2 (VAR_14));

      switch (FUNC_7 (VAR_15))
 {
 case 128:
   if (VAR_31->howto->type != VAR_6)
     continue;
   break;
 case 129:

   if (VAR_31->howto->type != 16)
     continue;



   VAR_32 -= 2;
   break;
 default:
   continue;
 }

      VAR_27 = (char *) FUNC_4 (*VAR_31->sym_ptr_ptr);
      FUNC_17 (VAR_27, VAR_32, VAR_12,
      VAR_14);
    }

  FUNC_15 (VAR_16);
}
