
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ name; scalar_t__ rawsize; TYPE_1__* output_section; int owner; scalar_t__ output_offset; } ;
typedef TYPE_2__ asection ;
struct TYPE_9__ {int hash; scalar_t__ reduce_memory_overheads; } ;
struct TYPE_7__ {scalar_t__ owner; scalar_t__ vma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 () ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (char*,scalar_t__,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (asection *VAR_5)
{
  bfd_size_type VAR_6 = VAR_5->size;
  int VAR_7;
  bfd_vma VAR_8;

  FUNC_3 ();

  FUNC_7 ();
  FUNC_4 ("%s", VAR_5->name);

  VAR_7 = 1 + FUNC_8 (VAR_5->name);
  if (VAR_7 >= VAR_0 - 1)
    {
      FUNC_6 ();
      VAR_7 = 0;
    }
  while (VAR_7 < VAR_0)
    {
      FUNC_7 ();
      ++VAR_7;
    }

  if (VAR_5->output_section != ((void*)0) && VAR_5->output_section->owner == VAR_2)
    VAR_8 = VAR_5->output_section->vma + VAR_5->output_offset;
  else
    {
      VAR_8 = VAR_3;
      VAR_6 = 0;
    }

  FUNC_4 ("0x%V %W %B\n", VAR_8, FUNC_0 (VAR_6), VAR_5->owner);

  if (VAR_6 != VAR_5->rawsize && VAR_5->rawsize != 0)
    {
      VAR_7 = VAR_0 + 3;



      VAR_7 += 8;

      while (VAR_7 > 0)
 {
   FUNC_7 ();
   --VAR_7;
 }

      FUNC_4 (FUNC_1("%W (size before relaxing)\n"), VAR_5->rawsize);
    }

  if (VAR_5->output_section != ((void*)0) && VAR_5->output_section->owner == VAR_2)
    {
      if (VAR_1.reduce_memory_overheads)
 FUNC_2 (VAR_1.hash, VAR_4, VAR_5);
      else
 FUNC_5 (VAR_5);

      VAR_3 = VAR_8 + FUNC_0 (VAR_6);
    }
}
