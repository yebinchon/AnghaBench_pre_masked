
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* buffer; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_9__ {scalar_t__ prev; } ;
typedef TYPE_2__ cpp_buffer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_1)
{
  cpp_buffer *VAR_2 = VAR_1->buffer;

  if (VAR_2->prev == 0)
    FUNC_1 (VAR_1, VAR_0,
        "#pragma system_header ignored outside include file");
  else
    {
      FUNC_0 (VAR_1);
      FUNC_3 (VAR_1);
      FUNC_2 (VAR_1, 1, 0);
    }
}
