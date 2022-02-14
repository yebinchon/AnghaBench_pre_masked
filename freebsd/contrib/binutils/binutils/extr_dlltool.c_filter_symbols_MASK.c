
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_5__ {int flags; int name; int section; } ;
typedef TYPE_1__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int ,void const*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,unsigned int) ;

__attribute__((used)) static long
FUNC_8 (bfd *VAR_3, void *VAR_4, long VAR_5, unsigned int VAR_6)
{
  bfd_byte *VAR_7, *VAR_8, *VAR_9;
  asymbol *VAR_10;

  VAR_10 = FUNC_4 (VAR_3);
  if (VAR_10 == ((void*)0))
    FUNC_0 (FUNC_1 (VAR_3));

  VAR_7 = (bfd_byte *) VAR_4;
  VAR_8 = VAR_7 + VAR_5 * VAR_6;
  VAR_9 = (bfd_byte *) VAR_4;

  for (; VAR_7 < VAR_8; VAR_7 += VAR_6)
    {
      int VAR_11 = 0;
      asymbol *VAR_12;

      VAR_12 = FUNC_5 (VAR_3, VAR_2, (const void *) VAR_7, VAR_10);
      if (VAR_12 == ((void*)0))
 FUNC_0 (FUNC_1 (VAR_3));


      VAR_11 = (((VAR_12->flags & VAR_0) != 0
        || (VAR_12->flags & VAR_1) != 0
        || FUNC_2 (VAR_12->section))
       && ! FUNC_3 (VAR_12->section));

      VAR_11 = VAR_11 && ! FUNC_6 (VAR_12->name);

      if (VAR_11)
 {
   FUNC_7 (VAR_9, VAR_7, VAR_6);
   VAR_9 += VAR_6;
 }
    }

  return (VAR_9 - (bfd_byte *) VAR_4) / VAR_6;
}
