
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {char* filename; int f; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pr_handle*) ;
 char* FUNC_3 (struct pr_handle*) ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_2, const char *VAR_3, bfd_vma VAR_4)
{
  struct pr_handle *VAR_5 = (struct pr_handle *) VAR_2;
  char *VAR_6;
  char VAR_7[20];

  VAR_6 = FUNC_3 (VAR_5);
  if (VAR_6 == ((void*)0))
    return VAR_0;

  FUNC_2 (VAR_5);
  FUNC_4 (VAR_4, VAR_7, VAR_0, VAR_0);
  FUNC_0 (VAR_5->f, "%s\t%s\t0;\"\tkind:v\ttype:const %s\tvalue:%s\n",
    VAR_3, VAR_5->filename, VAR_6, VAR_7);

  FUNC_1 (VAR_6);

  return VAR_1;
}
