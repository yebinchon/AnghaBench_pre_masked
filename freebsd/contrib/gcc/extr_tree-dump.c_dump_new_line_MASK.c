
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* dump_info_p ;
struct TYPE_3__ {char* column; int stream; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1 (dump_info_p VAR_1)
{
  FUNC_0 (VAR_1->stream, "\n%*s", VAR_0, "");
  VAR_1->column = VAR_0;
}
