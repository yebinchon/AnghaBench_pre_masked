
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct objfile {int section_offsets; TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; int * obfd; } ;
struct cleanup {int dummy; } ;
typedef int file_ptr ;
typedef int bfd ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (scalar_t__,unsigned int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 struct objfile* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (struct cleanup*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct objfile*,int) ;
 struct cleanup* FUNC_7 (int (*) (scalar_t__),scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ,int ,struct objfile*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned int) ;

void
FUNC_11 (struct objfile *VAR_7, int VAR_8, file_ptr VAR_9,
        unsigned int VAR_10, file_ptr VAR_11,
        unsigned int VAR_12)
{
  bfd *VAR_13 = VAR_7->obfd;
  struct cleanup *VAR_14;

  VAR_3 = VAR_7;
  VAR_6 = VAR_10;
  VAR_4 = FUNC_10 (VAR_6);
  VAR_5 = 0;
  if ((FUNC_3 (VAR_13, VAR_9, VAR_0) != 0) ||
      (FUNC_1 (VAR_4, VAR_6, VAR_13) != VAR_6))
    {
      FUNC_9 (VAR_4);
      FUNC_5 ("can't read DWARF data from '%s'", FUNC_2 (VAR_13));
    }
  VAR_14 = FUNC_7 (FUNC_9, VAR_4);





  if (VAR_8
      || (VAR_7->global_psymbols.size == 0
   && VAR_7->static_psymbols.size == 0))
    {
      FUNC_6 (VAR_7, 1024);
    }



  VAR_1 = VAR_7->section_offsets;
  VAR_2 = FUNC_0 (VAR_7->section_offsets, 0);





  FUNC_8 (VAR_4, VAR_4 + VAR_6, VAR_9, VAR_11, VAR_7);

  FUNC_4 (VAR_14);
  VAR_3 = ((void*)0);
}
