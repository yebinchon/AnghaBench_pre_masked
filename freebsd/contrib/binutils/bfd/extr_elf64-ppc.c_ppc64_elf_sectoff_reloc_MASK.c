
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd_reloc_status_type ;
typedef int bfd ;
struct TYPE_11__ {TYPE_2__* section; } ;
typedef TYPE_3__ asymbol ;
typedef int asection ;
struct TYPE_12__ {int addend; } ;
typedef TYPE_4__ arelent ;
struct TYPE_10__ {TYPE_1__* output_section; } ;
struct TYPE_9__ {scalar_t__ vma; } ;


 int FUNC_0 (int *,TYPE_4__*,TYPE_3__*,void*,int *,int *,char**) ;
 int VAR_0 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_1 (bfd *VAR_1, arelent *VAR_2, asymbol *VAR_3,
    void *VAR_4, asection *VAR_5,
    bfd *VAR_6, char **VAR_7)
{



  if (VAR_6 != ((void*)0))
    return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);


  VAR_2->addend -= VAR_3->section->output_section->vma;
  return VAR_0;
}
