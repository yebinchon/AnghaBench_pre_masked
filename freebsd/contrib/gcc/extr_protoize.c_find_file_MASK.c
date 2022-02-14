
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* time_t ;
struct stat {void* st_mtime; } ;
struct TYPE_6__ {TYPE_2__* fip; } ;
typedef TYPE_1__ hash_table_entry ;
struct TYPE_7__ {void* mtime; int * defs_decs; TYPE_1__* hash_entry; } ;
typedef TYPE_2__ file_info ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,struct stat*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static file_info *
FUNC_6 (const char *VAR_3, int VAR_4)
{
  hash_table_entry *VAR_5;

  VAR_5 = FUNC_0 (VAR_1, VAR_3);
  if (VAR_5->fip)
    return VAR_5->fip;
  else
    {
      struct stat VAR_6;
      file_info *VAR_7 = FUNC_4 (sizeof (file_info));




      if (VAR_4)
 VAR_6.st_mtime = (time_t) 0;
      else
 {
   if (FUNC_3 (VAR_3, &VAR_6) == -1)
     {
       int VAR_8 = VAR_0;
       FUNC_1 ("%s: %s: can't get status: %s\n",
        VAR_2, FUNC_2 (((void*)0), VAR_3),
        FUNC_5 (VAR_8));
       VAR_6.st_mtime = (time_t) -1;
     }
 }

      VAR_5->fip = VAR_7;
      VAR_7->hash_entry = VAR_5;
      VAR_7->defs_decs = ((void*)0);
      VAR_7->mtime = VAR_6.st_mtime;
      return VAR_7;
    }
}
