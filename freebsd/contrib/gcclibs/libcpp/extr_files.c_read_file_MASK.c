
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_6__ {int dont_read; int fd; scalar_t__ err_no; scalar_t__ buffer_valid; } ;
typedef TYPE_1__ _cpp_file ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_4 (cpp_reader *VAR_0, _cpp_file *VAR_1)
{

  if (VAR_1->buffer_valid)
    return 1;


  if (VAR_1->dont_read || VAR_1->err_no)
    return 0;

  if (VAR_1->fd == -1 && !FUNC_1 (VAR_1))
    {
      FUNC_2 (VAR_0, VAR_1, 0);
      return 0;
    }

  VAR_1->dont_read = !FUNC_3 (VAR_0, VAR_1);
  FUNC_0 (VAR_1->fd);
  VAR_1->fd = -1;

  return !VAR_1->dont_read;
}
