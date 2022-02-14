
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regset {int (* supply_regset ) (struct regset const*,int ,int,char*,int ) ;} ;
struct bfd_section {int dummy; } ;
typedef int file_ptr ;
typedef int bfd_size_type ;
struct TYPE_3__ {int (* core_read_registers ) (char*,int ,int,int ) ;} ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 struct bfd_section* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct bfd_section*,char*,int ,int ) ;
 int FUNC_4 (int ,struct bfd_section*) ;
 scalar_t__ FUNC_5 (int ,struct bfd_section*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 struct regset* FUNC_7 (scalar_t__,char*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (struct regset const*,int ,int,char*,int ) ;
 int FUNC_10 (char*,int ,int,int ) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_5,
      int VAR_6,
      char *VAR_7,
      int VAR_8)
{
  static char *VAR_9 = ((void*)0);
  struct bfd_section *VAR_10;
  bfd_size_type VAR_11;
  char *VAR_12;

  FUNC_12 (VAR_9);
  if (FUNC_0 (VAR_4))
    VAR_9 = FUNC_14 ("%s/%d", VAR_5, FUNC_0 (VAR_4));
  else
    VAR_9 = FUNC_13 (VAR_5);

  VAR_10 = FUNC_2 (VAR_0, VAR_9);
  if (! VAR_10)
    {
      if (VAR_8)
 FUNC_11 ("Couldn't find %s registers in core file.\n", VAR_7);
      return;
    }

  VAR_11 = FUNC_4 (VAR_0, VAR_10);
  VAR_12 = FUNC_1 (VAR_11);
  if (! FUNC_3 (VAR_0, VAR_10, VAR_12,
      (file_ptr) 0, VAR_11))
    {
      FUNC_11 ("Couldn't read %s registers from `%s' section in core file.\n",
        VAR_7, VAR_5);
      return;
    }

  if (VAR_1 && FUNC_8 (VAR_1))
    {
      const struct regset *VAR_13;

      VAR_13 = FUNC_7 (VAR_1, VAR_5, VAR_11);
      if (VAR_13 == ((void*)0))
 {
   if (VAR_8)
     FUNC_11 ("Couldn't recognize %s registers in core file.\n",
       VAR_7);
   return;
 }

      VAR_13->supply_regset (VAR_13, VAR_3, -1, VAR_12, VAR_11);
      return;
    }

  FUNC_6 (VAR_2);
  VAR_2->core_read_registers (VAR_12, VAR_11, VAR_6,
     ((CORE_ADDR)
      FUNC_5 (VAR_0, VAR_10)));
}
