
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dump_info_p ;
struct TYPE_4__ {int column; int stream; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const*,int) ;

void
FUNC_2 (dump_info_p VAR_0, const char *VAR_1, int VAR_2)
{
  FUNC_0 (VAR_0);
  FUNC_1 (VAR_0->stream, "%-4s: %-7d ", VAR_1, VAR_2);
  VAR_0->column += 14;
}
