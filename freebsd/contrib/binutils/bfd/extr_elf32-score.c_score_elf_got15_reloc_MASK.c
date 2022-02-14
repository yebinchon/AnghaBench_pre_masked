
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_reloc_status_type ;
typedef int bfd ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ asymbol ;
typedef int asection ;
typedef int arelent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_1__*,void*,int *,int *,char**) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,TYPE_1__*,void*,int *,int *,char**) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_5 (bfd *VAR_2, arelent *VAR_3, asymbol *VAR_4,
         void *VAR_5, asection *VAR_6,
         bfd *VAR_7, char **VAR_8)
{
  if ((VAR_4->flags & (VAR_0 | VAR_1)) != 0
      || FUNC_3 (FUNC_1 (VAR_4))
      || FUNC_2 (FUNC_1 (VAR_4)))

    return FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7,
      VAR_8);

  return FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7, VAR_8);
}
