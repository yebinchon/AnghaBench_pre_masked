
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_19__ {int value; TYPE_10__* section; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_20__ {scalar_t__ output_offset; TYPE_2__* output_section; } ;
typedef TYPE_5__ asection ;
struct TYPE_21__ {int address; TYPE_3__* howto; scalar_t__ addend; } ;
typedef TYPE_6__ arelent ;
struct TYPE_18__ {long dst_mask; } ;
struct TYPE_17__ {scalar_t__ vma; } ;
struct TYPE_16__ {scalar_t__ vma; } ;
struct TYPE_15__ {TYPE_1__* output_section; } ;


 int FUNC_0 (int *,TYPE_6__*,TYPE_4__*,void*,TYPE_5__*,int *,char**) ;
 long FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,long,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_6 (bfd *VAR_3, arelent *VAR_4, asymbol *VAR_5,
       void *VAR_6, asection *VAR_7,
       bfd *VAR_8, char **VAR_9)
{
  bfd_size_type VAR_10;
  bfd_vma VAR_11;
  long VAR_12;




  if (VAR_8 != ((void*)0))
    return FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9);

  if (VAR_4->address > FUNC_2 (VAR_3, VAR_7))
    return VAR_1;
  VAR_10 = VAR_4->address * FUNC_4 (VAR_3);


  VAR_11 = 0;
  if (!FUNC_3 (VAR_5->section))
    VAR_11 = VAR_5->value;
  if (VAR_5->section->output_section)
    VAR_11 += VAR_5->section->output_section->vma;

  VAR_11 += VAR_4->addend;


  VAR_11 -= VAR_7->output_section->vma + VAR_7->output_offset;

  VAR_11 >>= 2;
  if (VAR_11 + 256 >= 512)
    return VAR_2;

  VAR_12 = FUNC_1 (VAR_3, (bfd_byte *) VAR_6 + VAR_10);



  VAR_11 = (VAR_11 & 0x7f) | ((VAR_11 & 0x180) << 7) | ((VAR_11 & 0x180) << 16);
  VAR_12 &= ~VAR_4->howto->dst_mask;
  VAR_12 |= VAR_11 & VAR_4->howto->dst_mask;
  FUNC_5 (VAR_3, VAR_12, (bfd_byte *) VAR_6 + VAR_10);
  return VAR_0;
}
