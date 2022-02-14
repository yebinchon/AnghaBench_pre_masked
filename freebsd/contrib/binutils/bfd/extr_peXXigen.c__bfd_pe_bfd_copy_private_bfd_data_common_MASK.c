
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_12__ {TYPE_3__* xvec; } ;
typedef TYPE_4__ bfd ;
struct TYPE_10__ {TYPE_1__* DataDirectory; } ;
struct TYPE_13__ {TYPE_2__ pe_opthdr; int has_reloc_section; int dll; } ;
struct TYPE_11__ {scalar_t__ flavour; } ;
struct TYPE_9__ {scalar_t__ Size; scalar_t__ VirtualAddress; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;

bfd_boolean
FUNC_1 (bfd * VAR_3, bfd * VAR_4)
{

  if (VAR_3->xvec->flavour != VAR_2
      || VAR_4->xvec->flavour != VAR_2)
    return VAR_1;

  FUNC_0 (VAR_4)->pe_opthdr = FUNC_0 (VAR_3)->pe_opthdr;
  FUNC_0 (VAR_4)->dll = FUNC_0 (VAR_3)->dll;



  if (! FUNC_0 (VAR_4)->has_reloc_section)
    {
      FUNC_0 (VAR_4)->pe_opthdr.DataDirectory[VAR_0].VirtualAddress = 0;
      FUNC_0 (VAR_4)->pe_opthdr.DataDirectory[VAR_0].Size = 0;
    }
  return VAR_1;
}
