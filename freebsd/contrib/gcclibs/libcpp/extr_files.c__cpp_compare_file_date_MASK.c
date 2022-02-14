
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct cpp_dir {int dummy; } ;
struct TYPE_15__ {TYPE_4__* buffer; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_11__ {scalar_t__ st_mtime; } ;
struct TYPE_16__ {int fd; TYPE_1__ st; scalar_t__ err_no; } ;
typedef TYPE_6__ _cpp_file ;
struct TYPE_14__ {TYPE_3__* file; } ;
struct TYPE_12__ {scalar_t__ st_mtime; } ;
struct TYPE_13__ {TYPE_2__ st; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,char const*,struct cpp_dir*,int,int) ;
 int FUNC_1 (int) ;
 struct cpp_dir* FUNC_2 (TYPE_5__*,char const*,int,int ) ;

int
FUNC_3 (cpp_reader *VAR_1, const char *VAR_2,
   int VAR_3)
{
  _cpp_file *VAR_4;
  struct cpp_dir *VAR_5;

  VAR_5 = FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_0);
  if (!VAR_5)
    return -1;

  VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_5, 0, VAR_3);
  if (VAR_4->err_no)
    return -1;

  if (VAR_4->fd != -1)
    {
      FUNC_1 (VAR_4->fd);
      VAR_4->fd = -1;
    }

  return VAR_4->st.st_mtime > VAR_1->buffer->file->st.st_mtime;
}
