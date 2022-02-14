
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sym; } ;
struct TYPE_4__ {int saved_text_seg; TYPE_1__ proc_pending; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_1)
{
  if (VAR_0.proc_pending.sym
      && (!VAR_0.saved_text_seg || FUNC_0 (VAR_1, "endp") == 0))
    return 1;
  return FUNC_1 ("procedure", VAR_1);
}
