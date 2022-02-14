
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_9__ {TYPE_1__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_10__ {int addend; } ;
typedef TYPE_3__ arelent ;
struct TYPE_8__ {int owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*,int *,void*,TYPE_2__*,int *,char**) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_3 (bfd *VAR_2, arelent *VAR_3, asymbol *VAR_4,
   void *VAR_5, asection *VAR_6,
   bfd *VAR_7, char **VAR_8)
{
  bfd_vma VAR_9;




  if (VAR_7 != ((void*)0))
    return FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8);

  VAR_9 = FUNC_0 (VAR_6->output_section->owner);
  if (VAR_9 == 0)
    VAR_9 = FUNC_2 (VAR_6->output_section->owner);


  VAR_3->addend -= VAR_9 + VAR_0;


  VAR_3->addend += 0x8000;
  return VAR_1;
}
