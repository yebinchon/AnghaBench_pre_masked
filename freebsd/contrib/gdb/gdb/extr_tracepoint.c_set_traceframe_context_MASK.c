
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {scalar_t__ modifiable; } ;
typedef struct type* VALUE_TYPE ;
struct TYPE_5__ {TYPE_1__* symtab; scalar_t__ line; scalar_t__ pc; } ;
struct TYPE_4__ {int * filename; } ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (struct type*) ;
 struct value* FUNC_2 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct type* FUNC_3 (struct type*,int ,struct type*) ;
 struct type* FUNC_4 (struct type*,int ,int ,int) ;
 int * FUNC_5 (int) ;
 TYPE_2__ FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 struct type* FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (int ,struct type*) ;
 int FUNC_11 (int *) ;
 int * VAR_2 ;
 TYPE_2__ VAR_3 ;
 struct type* FUNC_12 (int ,int ) ;
 struct type* FUNC_13 (struct type*,int ) ;

__attribute__((used)) static void
FUNC_14 (CORE_ADDR VAR_4)
{
  static struct type *VAR_5, *VAR_6;
  static struct type *VAR_7, *VAR_8;
  struct value *VAR_9;
  struct value *VAR_10;
  static struct type *VAR_11;
  int VAR_12;

  if (VAR_11 == (struct type *) ((void*)0))
    VAR_11 = FUNC_8 (VAR_0);

  if (VAR_4 == -1)
    {
      VAR_2 = 0;
      VAR_3.pc = VAR_3.line = 0;
      VAR_3.symtab = ((void*)0);
      FUNC_10 (FUNC_7 ("trace_func"),
         FUNC_13 (VAR_11, (LONGEST) 0));
      FUNC_10 (FUNC_7 ("trace_file"),
         FUNC_13 (VAR_11, (LONGEST) 0));
      FUNC_10 (FUNC_7 ("trace_line"),
         FUNC_12 (VAR_1, (LONGEST) - 1));
      return;
    }


  VAR_3 = FUNC_6 (VAR_4, 0);
  VAR_2 = FUNC_5 (VAR_4);


  FUNC_10 (FUNC_7 ("trace_line"),
     FUNC_12 (VAR_1,
           (LONGEST) VAR_3.line));


  if (VAR_2 == ((void*)0) ||
      FUNC_0 (VAR_2) == ((void*)0))
    FUNC_10 (FUNC_7 ("trace_func"),
       FUNC_13 (VAR_11, (LONGEST) 0));
  else
    {
      VAR_12 = FUNC_11 (FUNC_0 (VAR_2));
      VAR_7 = FUNC_4 (VAR_7,
          VAR_1, 0, VAR_12 - 1);
      VAR_5 = FUNC_3 (VAR_5,
           VAR_0, VAR_7);
      VAR_9 = FUNC_2 (VAR_5);
      VALUE_TYPE (VAR_13) = VAR_5;
      FUNC_9 (FUNC_1 (VAR_13),
       FUNC_0 (VAR_2),
       VAR_12);
      VAR_13->modifiable = 0;
      FUNC_10 (FUNC_7 ("trace_func"), VAR_13);
    }


  if (VAR_3.symtab == ((void*)0) ||
      VAR_3.symtab->filename == ((void*)0))
    FUNC_10 (FUNC_7 ("trace_file"),
       FUNC_13 (VAR_11, (LONGEST) 0));
  else
    {
      VAR_12 = FUNC_11 (VAR_3.symtab->filename);
      VAR_8 = FUNC_4 (VAR_8,
          VAR_1, 0, VAR_12 - 1);
      VAR_6 = FUNC_3 (VAR_6,
           VAR_0, VAR_8);
      VAR_10 = FUNC_2 (VAR_6);
      VALUE_TYPE (VAR_14) = VAR_6;
      FUNC_9 (FUNC_1 (VAR_14),
       VAR_3.symtab->filename,
       VAR_12);
      VAR_14->modifiable = 0;
      FUNC_10 (FUNC_7 ("trace_file"), VAR_14);
    }
}
