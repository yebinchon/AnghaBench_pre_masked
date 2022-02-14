
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_17__ {int flags; size_t index; unsigned long target_index; unsigned char* contents; int size; struct TYPE_17__* output_section; } ;
typedef TYPE_4__ asection ;
struct TYPE_16__ {unsigned long sh_info; unsigned char* contents; } ;
struct TYPE_19__ {unsigned int this_idx; TYPE_3__ this_hdr; } ;
struct TYPE_15__ {unsigned long i; } ;
struct TYPE_18__ {TYPE_2__ udata; } ;
struct TYPE_14__ {unsigned long i; } ;
struct TYPE_13__ {TYPE_1__ udata; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned int,unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 unsigned char* FUNC_2 (int *,int) ;
 TYPE_10__* FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 TYPE_6__* FUNC_5 (TYPE_4__*) ;
 TYPE_5__** FUNC_6 (int *) ;

void
FUNC_7 (bfd *VAR_6, asection *VAR_7, void *VAR_8)
{
  bfd_boolean *VAR_9 = VAR_8;
  unsigned long VAR_10;
  asection *VAR_11, *VAR_12;
  unsigned char *VAR_13;
  bfd_boolean VAR_14;



  if (((VAR_7->flags & (VAR_2 | VAR_3)) != VAR_2)
      || *VAR_9)
    return;

  VAR_10 = 0;
  if (FUNC_3 (VAR_7) != ((void*)0))
    VAR_10 = FUNC_3 (VAR_7)->udata.i;

  if (VAR_10 == 0)
    {


      if (FUNC_6 (VAR_6) != ((void*)0))
 VAR_10 = FUNC_6 (VAR_6)[VAR_7->index]->udata.i;
      else
 VAR_10 = VAR_7->target_index;
    }
  FUNC_5 (VAR_7)->this_hdr.sh_info = VAR_10;


  VAR_14 = VAR_5;
  if (VAR_7->contents == ((void*)0))
    {
      VAR_14 = VAR_0;
      VAR_7->contents = FUNC_2 (VAR_6, VAR_7->size);


      FUNC_5 (VAR_7)->this_hdr.contents = VAR_7->contents;
      if (VAR_7->contents == ((void*)0))
 {
   *VAR_9 = VAR_5;
   return;
 }
    }

  VAR_13 = VAR_7->contents + VAR_7->size;




  VAR_12 = VAR_11 = FUNC_4 (VAR_7);





  while (VAR_11 != ((void*)0))
    {
      asection *VAR_15;
      unsigned int VAR_16;

      VAR_13 -= 4;
      VAR_15 = VAR_11;
      if (!VAR_14)
 VAR_15 = VAR_15->output_section;
      VAR_16 = 0;
      if (VAR_15 != ((void*)0))
 VAR_16 = FUNC_5 (VAR_15)->this_idx;
      FUNC_0 (VAR_6, VAR_16, VAR_13);
      VAR_11 = FUNC_4 (VAR_11);
      if (VAR_11 == VAR_12)
 break;
    }

  if ((VAR_13 -= 4) != VAR_7->contents)
    FUNC_1 ();

  FUNC_0 (VAR_6, VAR_7->flags & VAR_4 ? VAR_1 : 0, VAR_13);
}
