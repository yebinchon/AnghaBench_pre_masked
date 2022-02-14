
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* dump_info_p ;
struct TYPE_3__ {int column; int stream; } ;


 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_1 (dump_info_p VAR_0, unsigned int VAR_1)
{
  FUNC_0 (VAR_0->stream, "@%-6u ", VAR_1);
  VAR_0->column += 8;
}
