
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* valid_pch ) (TYPE_3__*,char const*,int) ;} ;
struct TYPE_12__ {TYPE_2__* line_table; TYPE_1__ cb; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_13__ {char* path; int fd; } ;
typedef TYPE_4__ _cpp_file ;
struct TYPE_11__ {unsigned int depth; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char,char const*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_4 (char,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,char const*,int) ;

__attribute__((used)) static bool
FUNC_6 (cpp_reader *VAR_2, _cpp_file *VAR_3, const char *VAR_4)
{
  const char *VAR_5 = VAR_3->path;
  bool VAR_6 = 0;

  VAR_3->path = VAR_4;
  if (FUNC_3 (VAR_3))
    {
      VAR_6 = 1 & VAR_2->cb.valid_pch (VAR_2, VAR_4, VAR_3->fd);

      if (!VAR_6)
 {
   FUNC_1 (VAR_3->fd);
   VAR_3->fd = -1;
 }

      if (FUNC_0 (VAR_2, VAR_0))
 {
   unsigned int VAR_7;
   for (VAR_7 = 1; VAR_7 < VAR_2->line_table->depth; VAR_7++)
     FUNC_4 ('.', VAR_1);
   FUNC_2 (VAR_1, "%c %s\n",
     VAR_6 ? '!' : 'x', VAR_4);
 }
    }

  VAR_3->path = VAR_5;
  return VAR_6;
}
