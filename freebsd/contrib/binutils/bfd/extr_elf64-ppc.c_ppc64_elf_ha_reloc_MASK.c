
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_reloc_status_type ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_4__ {int addend; } ;
typedef TYPE_1__ arelent ;


 int FUNC_0 (int *,TYPE_1__*,int *,void*,int *,int *,char**) ;
 int VAR_0 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_1 (bfd *VAR_1, arelent *VAR_2, asymbol *VAR_3,
      void *VAR_4, asection *VAR_5,
      bfd *VAR_6, char **VAR_7)
{



  if (VAR_6 != ((void*)0))
    return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);




  VAR_2->addend += 0x8000;
  return VAR_0;
}
