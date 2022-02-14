
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {int (* to_xfer_memory ) (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct cleanup* FUNC_5 () ;
 int FUNC_6 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4, int VAR_5,
         struct mem_attrib *VAR_6, struct target_ops *VAR_7)
{
  struct cleanup *VAR_8 = FUNC_5 ();
  int VAR_9;

  if (FUNC_2 (VAR_0))
    {


      if (!FUNC_7 (VAR_0))
 VAR_0 = FUNC_4 (FUNC_0 (VAR_0));
      else
 VAR_0 = FUNC_3 (VAR_0);
    }

  VAR_9 =
    VAR_1->to_xfer_memory (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);

  FUNC_1 (VAR_8);
  return VAR_9;
}
