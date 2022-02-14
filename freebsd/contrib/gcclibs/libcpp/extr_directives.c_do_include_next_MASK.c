
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum include_type { ____Placeholder_include_type } include_type ;
struct TYPE_7__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_6__ {int prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2 (cpp_reader *VAR_3)
{
  enum include_type VAR_4 = VAR_2;



  if (! VAR_3->buffer->prev)
    {
      FUNC_0 (VAR_3, VAR_0,
   "#include_next in primary source file");
      VAR_4 = VAR_1;
    }
  FUNC_1 (VAR_3, VAR_4);
}
