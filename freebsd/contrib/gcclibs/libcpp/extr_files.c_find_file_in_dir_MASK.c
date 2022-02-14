
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int hashval_t ;
struct TYPE_15__ {int nonexistent_file_hash; int nonexistent_file_ob; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_16__ {char* name; scalar_t__ err_no; char* path; TYPE_3__* dir; } ;
typedef TYPE_2__ _cpp_file ;
struct TYPE_17__ {char* (* construct ) (char*,TYPE_3__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,TYPE_3__*) ;
 int FUNC_2 (char*) ;
 void** FUNC_3 (int ,char*,int ,int ) ;
 int * FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int *,char*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_2__*,int*) ;
 int VAR_2 ;
 char* FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_13 (cpp_reader *VAR_3, _cpp_file *VAR_4, bool *VAR_5)
{
  char *VAR_6;

  if (FUNC_0 (VAR_3, VAR_2) && (VAR_6 = FUNC_10 (VAR_3, VAR_4)))
    ;
  else
    if (VAR_4->dir->construct)
      VAR_6 = VAR_4->dir->construct (VAR_4->name, VAR_4->dir);
    else
      VAR_6 = FUNC_1 (VAR_4->name, VAR_4->dir);

  if (VAR_6)
    {
      hashval_t VAR_7 = FUNC_5 (VAR_6);
      char *VAR_8;
      void **VAR_9;

      if (FUNC_4 (VAR_3->nonexistent_file_hash, VAR_6, VAR_7) != ((void*)0))
 {
   VAR_4->err_no = VAR_0;
   return 0;
 }

      VAR_4->path = VAR_6;
      if (FUNC_9 (VAR_3, VAR_4, VAR_5))
 return 1;

      if (FUNC_7 (VAR_4))
 return 1;

      if (VAR_4->err_no != VAR_0)
 {
   FUNC_8 (VAR_3, VAR_4, 0);
   return 1;
 }




      VAR_8 = FUNC_6 (&VAR_3->nonexistent_file_ob, VAR_6,
       FUNC_11 (VAR_6));
      FUNC_2 (VAR_6);
      VAR_9 = FUNC_3 (VAR_3->nonexistent_file_hash,
         VAR_8, VAR_7, VAR_1);
      *VAR_9 = VAR_8;

      VAR_4->path = VAR_4->name;
    }
  else
    {
      VAR_4->err_no = VAR_0;
      VAR_4->path = ((void*)0);
    }

  return 0;
}
