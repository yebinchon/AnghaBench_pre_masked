
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
struct callback_data {scalar_t__ load_start; scalar_t__ load_end; scalar_t__ load_offset; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char*,int ,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (struct cleanup*) ;
 int FUNC_9 (char*,int ,char*) ;
 struct cleanup* FUNC_10 (int ,char*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (scalar_t__,char*,scalar_t__) ;
 int FUNC_16 (char*,int ) ;
 int VAR_1 ;
 char* FUNC_17 (scalar_t__) ;

__attribute__((used)) static void
FUNC_18 (bfd *VAR_2, asection *VAR_3, void *VAR_4)
{
  struct callback_data *VAR_5 = VAR_4;
  bfd_vma VAR_6 = FUNC_7 (VAR_2, VAR_3);
  bfd_size_type VAR_7 = FUNC_6 (VAR_2, VAR_3);
  bfd_vma VAR_8 = VAR_6 + VAR_7;
  bfd_size_type VAR_9 = 0;
  bfd_size_type VAR_10 = VAR_7;
  struct cleanup *VAR_11;
  char *VAR_12;
  int VAR_13;


  if (!(FUNC_4 (VAR_2, VAR_3) & VAR_0))
    return;


  if (VAR_8 <= VAR_5->load_start
      || (VAR_5->load_end > 0 && VAR_6 >= VAR_5->load_end))
    {

      FUNC_12 ("skipping section %s...\n",
         FUNC_5 (VAR_2, VAR_3));
      return;
    }




  if (VAR_6 < VAR_5->load_start)
    VAR_9 = VAR_5->load_start - VAR_6;

  VAR_10 -= VAR_9;
  if (VAR_5->load_end > 0 && VAR_8 > VAR_5->load_end)
    VAR_10 -= VAR_8 - VAR_5->load_end;


  VAR_12 = FUNC_17 (VAR_7);
  VAR_11 = FUNC_10 (VAR_1, VAR_12);
  if (!FUNC_3 (VAR_2, VAR_3, VAR_12, 0, VAR_7))
    FUNC_9 ("Failed to read bfd file %s: '%s'.", FUNC_2 (VAR_2),
    FUNC_0 (FUNC_1 ()));

  FUNC_12 ("Restoring section %s (0x%lx to 0x%lx)",
     FUNC_5 (VAR_2, VAR_3),
     (unsigned long) VAR_6,
     (unsigned long) VAR_8);

  if (VAR_5->load_offset != 0 || VAR_5->load_start != 0 || VAR_5->load_end != 0)
    FUNC_12 (" into memory (0x%s to 0x%s)\n",
       FUNC_11 ((unsigned long) VAR_6
          + VAR_9 + VAR_5->load_offset),
       FUNC_11 ((unsigned long) VAR_6 + VAR_9
         + VAR_5->load_offset + VAR_10));
  else
    FUNC_13 ("\n");


  VAR_13 = FUNC_15 (VAR_6 + VAR_9 + VAR_5->load_offset,
        VAR_12 + VAR_9, VAR_10);
  if (VAR_13 != 0)
    FUNC_16 ("restore: memory write failed (%s).", FUNC_14 (VAR_13));
  FUNC_8 (VAR_11);
  return;
}
