
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * (* missing_header_cb ) (TYPE_2__*,char const*,int **) ;
struct TYPE_8__ {int * (* missing_header ) (TYPE_2__*,char const*,int **) ;} ;
struct TYPE_9__ {TYPE_1__ cb; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_10__ {int * name; int * path; int * dir; } ;
typedef TYPE_4__ _cpp_file ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static bool
FUNC_2 (cpp_reader *VAR_0, const char *VAR_1, _cpp_file *VAR_2)
{
  missing_header_cb VAR_3 = VAR_0->cb.missing_header;



  if (VAR_3
      && VAR_2->dir == ((void*)0))
    {
      if ((VAR_2->path = VAR_3 (VAR_0, VAR_1, &VAR_2->dir)) != ((void*)0))
 {
   if (FUNC_1 (VAR_2))
     return 1;
   FUNC_0 ((void *)VAR_2->path);
 }
      VAR_2->path = VAR_2->name;
    }

  return 0;
}
