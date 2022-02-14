
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {char* filename; int f; TYPE_1__* stack; } ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,char*,char const*,...) ;
 int FUNC_1 (void*,char const*,char const**,int *) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_2, const char *VAR_3, const char **VAR_4,
       bfd_signed_vma *VAR_5)
{
  struct pr_handle *VAR_6 = (struct pr_handle *) VAR_2;
  unsigned int VAR_7;
  const char *VAR_8;
  char VAR_9[20];

  if (! FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5))
    return VAR_0;

  VAR_8 = VAR_3 ? VAR_3 : "unknown";

  if (VAR_3)
    FUNC_0 (VAR_6->f, "%s\t%s\t0;\"\tkind:e\ttype:%s\n", VAR_3,
      VAR_6->filename, VAR_6->stack->type);


  if (VAR_4 != ((void*)0))
    {
      for (VAR_7 = 0; VAR_4[VAR_7] != ((void*)0); VAR_7++)
 {
   FUNC_2 (VAR_5[VAR_7], VAR_9, VAR_0, VAR_0);
   FUNC_0 (VAR_6->f, "%s\t%s\t0;\"\tkind:g\tenum:%s\tvalue:%s\n",
     VAR_4[VAR_7], VAR_6->filename, VAR_8, VAR_9);
 }
    }

  return VAR_1;
}
