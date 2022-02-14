
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_reloc_status_type ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_6__ {TYPE_1__* howto; } ;
typedef TYPE_2__ arelent ;
struct TYPE_5__ {char* name; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_2__*,int *,void*,int *,int *,char**) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_3 (bfd *VAR_1,
    arelent *VAR_2,
    asymbol *VAR_3,
    void *VAR_4,
    asection *VAR_5,
    bfd *VAR_6,
    char **VAR_7)
{



  if (VAR_6 != ((void*)0))
    return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);

  if (VAR_7 != ((void*)0))
    {
      static char VAR_8[60];
      FUNC_2 (VAR_8, FUNC_0("generic linker can't handle %s"),
        VAR_2->howto->name);
      *VAR_7 = VAR_8;
    }
  return VAR_0;
}
