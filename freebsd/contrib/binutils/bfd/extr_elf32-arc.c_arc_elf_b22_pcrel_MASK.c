
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_reloc_status_type ;
typedef int bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_4__ {scalar_t__ address; int addend; } ;
typedef TYPE_1__ arelent ;


 int FUNC_0 (int *,TYPE_1__*,int *,void*,int *,int *,char**) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_1 (bfd * VAR_0,
     arelent * VAR_1,
     asymbol * VAR_2,
     void * VAR_3,
     asection * VAR_4,
     bfd * VAR_5,
     char ** VAR_6)
{





  if (VAR_5 == ((void*)0))
    VAR_1->addend -= VAR_1->address;


  return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6);
}
