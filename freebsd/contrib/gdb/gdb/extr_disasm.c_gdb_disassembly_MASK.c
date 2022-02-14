
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_stream {int stream; } ;
struct ui_out {int dummy; } ;
struct symtab {TYPE_1__* linetable; } ;
struct linetable_entry {int dummy; } ;
struct disassemble_info {int dummy; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {int nitems; struct linetable_entry* item; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct ui_out*,struct disassemble_info*,int ,int ,int,struct ui_stream*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (struct ui_out*,struct disassemble_info*,int,struct linetable_entry*,int ,int ,struct symtab*,int,struct ui_stream*) ;
 struct symtab* FUNC_3 (int ) ;
 struct disassemble_info FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 struct cleanup* FUNC_6 (struct ui_stream*) ;
 struct ui_stream* FUNC_7 (struct ui_out*) ;

void
FUNC_8 (struct ui_out *VAR_2,
  char *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6, CORE_ADDR VAR_7, CORE_ADDR VAR_8)
{
  struct ui_stream *VAR_9 = FUNC_7 (VAR_2);
  struct cleanup *VAR_10 = FUNC_6 (VAR_9);
  struct disassemble_info VAR_11 = FUNC_4 (VAR_0, VAR_9->stream);

  struct symtab *VAR_12 = ((void*)0);
  struct linetable_entry *VAR_13 = ((void*)0);
  int VAR_14 = -1;


  VAR_12 = FUNC_3 (VAR_7);

  if (VAR_12 != ((void*)0) && VAR_12->linetable != ((void*)0))
    {

      VAR_13 = VAR_12->linetable->item;
      VAR_14 = VAR_12->linetable->nitems;
    }

  if (!VAR_5 || VAR_14 <= 0
      || VAR_12 == ((void*)0) || VAR_12->linetable == ((void*)0))
    FUNC_0 (VAR_2, &VAR_11, VAR_7, VAR_8, VAR_6, VAR_9);

  else if (VAR_5)
    FUNC_2 (VAR_2, &VAR_11, VAR_14, VAR_13, VAR_7,
      VAR_8, VAR_12, VAR_6, VAR_9);

  FUNC_1 (VAR_10);
  FUNC_5 (VAR_1);
}
