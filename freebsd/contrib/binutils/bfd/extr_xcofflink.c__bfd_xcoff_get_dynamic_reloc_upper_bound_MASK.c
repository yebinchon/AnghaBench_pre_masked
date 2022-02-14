
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct internal_ldhdr {int l_nreloc; } ;
struct external_ldhdr {int dummy; } ;
typedef int bfd_byte ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ bfd ;
typedef int asection ;
typedef int arelent ;
struct TYPE_9__ {int * contents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct external_ldhdr*,struct internal_ldhdr*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

long
FUNC_5 (bfd *VAR_3)
{
  asection *VAR_4;
  bfd_byte *VAR_5;
  struct internal_ldhdr VAR_6;

  if ((VAR_3->flags & VAR_0) == 0)
    {
      FUNC_1 (VAR_1);
      return -1;
    }

  VAR_4 = FUNC_0 (VAR_3, ".loader");
  if (VAR_4 == ((void*)0))
    {
      FUNC_1 (VAR_2);
      return -1;
    }

  if (! FUNC_4 (VAR_3, VAR_4))
    return -1;
  VAR_5 = FUNC_3 (VAR_3, VAR_4)->contents;

  FUNC_2 (VAR_3, (struct external_ldhdr *) VAR_5, &VAR_6);

  return (VAR_6.l_nreloc + 1) * sizeof (arelent *);
}
