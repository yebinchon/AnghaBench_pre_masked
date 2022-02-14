
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct cpp_dir {int dummy; } ;
typedef enum include_type { ____Placeholder_include_type } include_type ;
struct TYPE_11__ {TYPE_2__* buffer; struct cpp_dir* quote_include; scalar_t__ quote_ignores_source_dir; struct cpp_dir* bracket_include; TYPE_4__* main_file; struct cpp_dir no_search_path; } ;
typedef TYPE_3__ cpp_reader ;
typedef struct cpp_dir cpp_dir ;
struct TYPE_12__ {TYPE_1__* dir; } ;
typedef TYPE_4__ _cpp_file ;
struct TYPE_10__ {int sysp; TYPE_4__* file; } ;
struct TYPE_9__ {struct cpp_dir* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*,char const*) ;
 char* FUNC_2 (TYPE_4__*) ;
 struct cpp_dir* FUNC_3 (TYPE_3__*,char*,int) ;

__attribute__((used)) static struct cpp_dir *
FUNC_4 (cpp_reader *VAR_3, const char *VAR_4, int VAR_5,
    enum include_type VAR_6)
{
  cpp_dir *VAR_7;
  _cpp_file *VAR_8;

  if (FUNC_0 (VAR_4))
    return &VAR_3->no_search_path;


  VAR_8 = VAR_3->buffer == ((void*)0) ? VAR_3->main_file : VAR_3->buffer->file;




  if (VAR_6 == VAR_2 && VAR_8->dir)
    VAR_7 = VAR_8->dir->next;
  else if (VAR_5)
    VAR_7 = VAR_3->bracket_include;
  else if (VAR_6 == VAR_1)


    return FUNC_3 (VAR_3, "./", 0);
  else if (VAR_3->quote_ignores_source_dir)
    VAR_7 = VAR_3->quote_include;
  else
    return FUNC_3 (VAR_3, FUNC_2 (VAR_8),
    VAR_3->buffer ? VAR_3->buffer->sysp : 0);

  if (VAR_7 == ((void*)0))
    FUNC_1 (VAR_3, VAR_0,
        "no include path in which to search for %s", VAR_4);

  return VAR_7;
}
