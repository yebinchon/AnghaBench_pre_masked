
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int (* read_pch ) (TYPE_4__*,int ,int,scalar_t__) ;} ;
struct TYPE_21__ {TYPE_5__* all_files; int seen_once_only; TYPE_2__ cb; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_20__ {scalar_t__ st_mtime; scalar_t__ st_size; } ;
struct TYPE_22__ {int fd; scalar_t__ err_no; scalar_t__ path; int buffer_valid; scalar_t__ buffer; TYPE_3__ st; int name; int dir; scalar_t__ once_only; struct TYPE_22__* next_file; int pchname; scalar_t__ pch; TYPE_1__* cmacro; scalar_t__ stack_count; } ;
typedef TYPE_5__ _cpp_file ;
struct TYPE_18__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,int ,int,scalar_t__) ;

__attribute__((used)) static bool
FUNC_8 (cpp_reader *VAR_1, _cpp_file *VAR_2, bool VAR_3)
{
  _cpp_file *VAR_4;


  if (VAR_2->once_only)
    return 0;




  if (VAR_3)
    {
      FUNC_0 (VAR_1, VAR_2);


      if (VAR_2->stack_count)
 return 0;
    }



  if (VAR_2->cmacro && VAR_2->cmacro->type == VAR_0)
    return 0;


  if (VAR_2->pch)
    {
      VAR_1->cb.read_pch (VAR_1, VAR_2->pchname, VAR_2->fd, VAR_2->path);
      FUNC_2 (VAR_2->fd);
      VAR_2->fd = -1;
      return 0;
    }

  if (!FUNC_6 (VAR_1, VAR_2))
    return 0;




  if (FUNC_1 (VAR_1, VAR_2, VAR_3))
    {



      if (! VAR_3)
 FUNC_0 (VAR_1, VAR_2);
      return 0;
    }



  if (!VAR_1->seen_once_only)
    return 1;



  for (VAR_4 = VAR_1->all_files; VAR_4; VAR_4 = VAR_4->next_file)
    {
      if (VAR_4 == VAR_2)
 continue;

      if ((VAR_3 || VAR_4->once_only)
   && VAR_4->err_no == 0
   && VAR_4->st.st_mtime == VAR_2->st.st_mtime
   && VAR_4->st.st_size == VAR_2->st.st_size)
 {
   _cpp_file *VAR_5;
   bool VAR_6 = 0;

   if (VAR_4->buffer && !VAR_4->buffer_valid)
     {


       VAR_5 = FUNC_4 (VAR_1, VAR_4->dir, VAR_4->name);
       VAR_5->path = VAR_4->path;
     }
   else

     VAR_5 = VAR_4;

   VAR_6 = FUNC_6 (VAR_1, VAR_5)

   && VAR_5->st.st_size == VAR_2->st.st_size
   && !FUNC_5 (VAR_5->buffer,
        VAR_2->buffer,
        VAR_2->st.st_size);

   if (VAR_4->buffer && !VAR_4->buffer_valid)
     {
       VAR_5->path = 0;
       FUNC_3 (VAR_5);
     }

   if (VAR_6)
     break;
 }
    }

  return VAR_4 == ((void*)0);
}
