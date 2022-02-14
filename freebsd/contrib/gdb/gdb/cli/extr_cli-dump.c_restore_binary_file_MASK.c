
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {long load_start; long load_end; scalar_t__ load_offset; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int * FUNC_1 (char*,int ) ;
 long FUNC_2 (char*,int,long,int *) ;
 scalar_t__ FUNC_3 (int *,long,int ) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (long) ;
 long FUNC_9 (scalar_t__,char*,long) ;
 int FUNC_10 (char*,int ) ;
 int VAR_3 ;
 char* FUNC_11 (long) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_4, struct callback_data *VAR_5)
{
  FILE *VAR_6 = FUNC_1 (VAR_4, VAR_0);
  int VAR_7;
  char *VAR_8;
  long VAR_9;


  if (FUNC_3 (VAR_6, 0, VAR_1) == 0)
    VAR_9 = FUNC_4 (VAR_6);
  else
    FUNC_6 (VAR_4);

  if (VAR_9 <= VAR_5->load_start)
    FUNC_0 ("Start address is greater than length of binary file %s.",
    VAR_4);


  if (VAR_5->load_end != 0 && VAR_5->load_end < VAR_9)
    VAR_9 = VAR_5->load_end;

  if (VAR_5->load_start > 0)
    VAR_9 -= VAR_5->load_start;

  FUNC_7
    ("Restoring binary file %s into memory (0x%lx to 0x%lx)\n",
     VAR_4,
     (unsigned long) VAR_5->load_start + VAR_5->load_offset,
     (unsigned long) VAR_5->load_start + VAR_5->load_offset + VAR_9);


  if (FUNC_3 (VAR_6, VAR_5->load_start, VAR_2) != 0)
    FUNC_6 (VAR_4);


  VAR_8 = FUNC_11 (VAR_9);
  FUNC_5 (VAR_3, VAR_8);
  if (FUNC_2 (VAR_8, 1, VAR_9, VAR_6) != VAR_9)
    FUNC_6 (VAR_4);


  VAR_9 = FUNC_9 (VAR_5->load_start + VAR_5->load_offset, VAR_8, VAR_9);
  if (VAR_9 != 0)
    FUNC_10 ("restore: memory write failed (%s).", FUNC_8 (VAR_9));
  return;
}
