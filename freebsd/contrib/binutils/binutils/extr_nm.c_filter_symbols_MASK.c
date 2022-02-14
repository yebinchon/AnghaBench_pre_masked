
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int flags; int section; } ;
typedef TYPE_1__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int ,void const*,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *,int *,unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static long
FUNC_10 (bfd *VAR_9, bfd_boolean VAR_10, void *VAR_11,
  long VAR_12, unsigned int VAR_13)
{
  bfd_byte *VAR_14, *VAR_15, *VAR_16;
  asymbol *VAR_17;

  VAR_17 = FUNC_7 (VAR_9);
  if (VAR_17 == ((void*)0))
    FUNC_1 (FUNC_2 (VAR_9));

  VAR_14 = (bfd_byte *) VAR_11;
  VAR_15 = VAR_14 + VAR_12 * VAR_13;
  VAR_16 = (bfd_byte *) VAR_11;

  for (; VAR_14 < VAR_15; VAR_14 += VAR_13)
    {
      int VAR_18 = 0;
      asymbol *VAR_19;

      FUNC_0 (1);

      VAR_19 = FUNC_8 (VAR_9, VAR_10, (const void *) VAR_14, VAR_17);
      if (VAR_19 == ((void*)0))
 FUNC_1 (FUNC_2 (VAR_9));

      if (VAR_8)
 VAR_18 = FUNC_6 (VAR_19->section);
      else if (VAR_5)
 VAR_18 = ((VAR_19->flags & VAR_1) != 0
  || (VAR_19->flags & VAR_2) != 0
  || FUNC_6 (VAR_19->section)
  || FUNC_4 (VAR_19->section));
      else
 VAR_18 = 1;

      if (VAR_18
   && ! VAR_6
   && (VAR_19->flags & VAR_0) != 0)
 VAR_18 = 0;

      if (VAR_18
   && VAR_7
   && (FUNC_3 (VAR_19->section)
       || FUNC_6 (VAR_19->section)))
 VAR_18 = 0;

      if (VAR_18
   && VAR_4)
 {
   if (FUNC_6 (VAR_19->section))
     VAR_18 = 0;
 }

      if (VAR_18
   && FUNC_5 (VAR_9, VAR_19)
   && ! VAR_3)
 VAR_18 = 0;

      if (VAR_18)
 {
   FUNC_9 (VAR_16, VAR_14, VAR_13);
   VAR_16 += VAR_13;
 }
    }

  return (VAR_16 - (bfd_byte *) VAR_11) / VAR_13;
}
