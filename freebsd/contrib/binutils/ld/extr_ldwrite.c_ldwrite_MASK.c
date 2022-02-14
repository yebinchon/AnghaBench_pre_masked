
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ bfd_size_type ;
struct TYPE_2__ {unsigned int split_by_reloc; scalar_t__ split_by_file; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int) ;

void
FUNC_8 (void)
{


  FUNC_3 (VAR_0);
  FUNC_5 (VAR_1);

  if (VAR_2.split_by_reloc != (unsigned) -1
      || VAR_2.split_by_file != (bfd_size_type) -1)
    FUNC_6 (VAR_4, &VAR_3);
  if (!FUNC_1 (VAR_4, &VAR_3))
    {




      if (FUNC_2 () != VAR_0)
 FUNC_4 (FUNC_0("%F%P: final link failed: %E\n"));
      else
 FUNC_7 (1);
    }
}
