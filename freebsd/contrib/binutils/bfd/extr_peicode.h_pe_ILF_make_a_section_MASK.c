
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct coff_section_tdata {int dummy; } ;
struct TYPE_15__ {scalar_t__ data; scalar_t__ sym_index; int abfd; TYPE_1__* bim; int sec_index; } ;
typedef TYPE_2__ pe_ILF_vars ;
typedef int flagword ;
typedef int bfd_size_type ;
typedef TYPE_3__* asection_ptr ;
struct TYPE_17__ {scalar_t__ i; } ;
struct TYPE_16__ {scalar_t__ contents; struct coff_section_tdata* used_by_bfd; scalar_t__ target_index; } ;
struct TYPE_14__ {scalar_t__ buffer; scalar_t__ size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;
 TYPE_8__* FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,char*,char const*,TYPE_3__*,int ) ;

__attribute__((used)) static asection_ptr
FUNC_7 (pe_ILF_vars * VAR_6,
         const char * VAR_7,
         unsigned int VAR_8,
         flagword VAR_9)
{
  asection_ptr VAR_10;
  flagword VAR_11;

  VAR_10 = FUNC_1 (VAR_6->abfd, VAR_7);
  if (VAR_10 == ((void*)0))
    return ((void*)0);

  VAR_11 = VAR_2 | VAR_1 | VAR_5 | VAR_4 | VAR_3;

  FUNC_3 (VAR_6->abfd, VAR_10, VAR_11 | VAR_9);

  (void) FUNC_2 (VAR_6->abfd, VAR_10, 2);


  FUNC_0 (VAR_6->data + VAR_8 < VAR_6->bim->buffer + VAR_6->bim->size);



  FUNC_4 (VAR_6->abfd, VAR_10, (bfd_size_type) VAR_8);
  VAR_10->contents = VAR_6->data;
  VAR_10->target_index = VAR_6->sec_index ++;


  VAR_6->data += VAR_8;





  if (VAR_8 & 1)
    VAR_6->data --;


  VAR_10->used_by_bfd = (struct coff_section_tdata *) VAR_6->data;
  VAR_6->data += sizeof (struct coff_section_tdata);

  FUNC_0 (VAR_6->data <= VAR_6->bim->buffer + VAR_6->bim->size);


  FUNC_6 (VAR_6, "", VAR_7, VAR_10, VAR_0);


  FUNC_5 (VAR_6->abfd, VAR_10)->i = VAR_6->sym_index - 1;

  return VAR_10;
}
