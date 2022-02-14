
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
struct TYPE_4__ {char* path; int fd; scalar_t__ err_no; TYPE_3__ st; } ;
typedef TYPE_1__ _cpp_file ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,TYPE_3__*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static bool
FUNC_5 (_cpp_file *VAR_6)
{
  if (VAR_6->path[0] == '\0')
    {
      VAR_6->fd = 0;
      FUNC_4 ();
    }
  else
    VAR_6->fd = FUNC_3 (VAR_6->path, VAR_4 | VAR_3 | VAR_2, 0666);

  if (VAR_6->fd != -1)
    {
      if (FUNC_2 (VAR_6->fd, &VAR_6->st) == 0)
 {
   if (!FUNC_0 (VAR_6->st.st_mode))
     {
       VAR_6->err_no = 0;
       return 1;
     }



   VAR_5 = VAR_0;
 }

      FUNC_1 (VAR_6->fd);
      VAR_6->fd = -1;
    }
  else if (VAR_5 == VAR_1)
    VAR_5 = VAR_0;

  VAR_6->err_no = VAR_5;

  return 0;
}
