
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* sections; } ;
typedef TYPE_2__ bfd ;
typedef int asymbol ;
struct TYPE_13__ {int * relocation; struct TYPE_13__* next; } ;
typedef TYPE_3__ asection ;
typedef int arelent ;
struct TYPE_11__ {scalar_t__ sh_link; scalar_t__ sh_type; } ;
struct TYPE_14__ {TYPE_1__ this_hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int **,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static long
FUNC_5 (bfd *VAR_3, arelent **VAR_4,
     asymbol **VAR_5)
{
  asection *VAR_6;
  long VAR_7;

  if (FUNC_3 (VAR_3) == 0)
    {
      FUNC_0 (VAR_2);
      return -1;
    }

  VAR_7 = 0;
  for (VAR_6 = VAR_3->sections; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      if (FUNC_4 (VAR_6)->this_hdr.sh_link == FUNC_3 (VAR_3)
   && (FUNC_4 (VAR_6)->this_hdr.sh_type == VAR_0))
 {
   arelent *VAR_8;
   long VAR_9, VAR_10;

   if (! FUNC_2 (VAR_3, VAR_6, VAR_5, VAR_1))
     return -1;
   VAR_9 = FUNC_1 (VAR_6);
   VAR_8 = VAR_6->relocation;
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
     *VAR_4++ = VAR_8++;
   VAR_7 += VAR_9;
 }
    }

  *VAR_4 = ((void*)0);

  return VAR_7;
}
