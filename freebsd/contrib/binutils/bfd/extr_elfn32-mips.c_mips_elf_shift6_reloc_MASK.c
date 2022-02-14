
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
struct TYPE_6__ {int addend; TYPE_1__* howto; } ;
typedef TYPE_2__ arelent ;
struct TYPE_5__ {scalar_t__ partial_inplace; } ;


 int FUNC_0 (int *,TYPE_2__*,int *,void*,int *,int *,char**) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_1 (bfd *VAR_0, arelent *VAR_1, asymbol *VAR_2,
         void *VAR_3, asection *VAR_4, bfd *VAR_5,
         char **VAR_6)
{
  if (VAR_1->howto->partial_inplace)
    {
      VAR_1->addend = ((VAR_1->addend & 0x00007c0)
        | (VAR_1->addend & 0x00000800) >> 9);
    }

  return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6);
}
