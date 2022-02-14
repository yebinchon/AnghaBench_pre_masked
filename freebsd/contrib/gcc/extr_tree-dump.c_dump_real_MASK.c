
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dump_info_p ;
typedef int buf ;
struct TYPE_4__ {int column; int stream; } ;
typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (char*,int const*,int,int ,int) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (dump_info_p VAR_0, const char *VAR_1, const REAL_VALUE_TYPE *VAR_2)
{
  char VAR_3[32];
  FUNC_2 (VAR_3, VAR_2, sizeof (VAR_3), 0, 1);
  FUNC_0 (VAR_0);
  FUNC_1 (VAR_0->stream, "%-4s: %s ", VAR_1, VAR_3);
  VAR_0->column += FUNC_3 (VAR_3) + 7;
}
