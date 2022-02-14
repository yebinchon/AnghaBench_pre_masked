
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct extern_res_data {int size; int reserved; int codepage; int rva; } ;
struct TYPE_13__ {int length; TYPE_4__* last; TYPE_4__* d; } ;
struct TYPE_11__ {int length; } ;
struct coff_write_info {int dirsize; int dirstrsize; int reloc_count; int dataentsize; int wrbfd; TYPE_2__ resources; TYPE_10__ dataents; TYPE_5__** relocs; int sympp; } ;
typedef int rc_uint_type ;
struct TYPE_12__ {int codepage; int reserved; } ;
struct TYPE_14__ {TYPE_1__ coff_info; } ;
typedef TYPE_3__ rc_res_resource ;
struct TYPE_15__ {int length; struct TYPE_15__* next; TYPE_3__ const* res; } ;
typedef TYPE_4__ coff_res_data ;
struct TYPE_16__ {int address; int * howto; scalar_t__ addend; int sym_ptr_ptr; } ;
typedef TYPE_5__ arelent ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_10__*,int) ;
 int FUNC_5 (int *,int ,TYPE_3__ const*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_5__** FUNC_8 (TYPE_5__**,int) ;

__attribute__((used)) static void
FUNC_9 (const rc_res_resource *VAR_1, struct coff_write_info *VAR_2)
{
  arelent *VAR_3;
  struct extern_res_data *VAR_4;
  coff_res_data *VAR_5;
  VAR_3 = (arelent *) FUNC_6 (sizeof (arelent));
  VAR_3->sym_ptr_ptr = VAR_2->sympp;
  VAR_3->address = VAR_2->dirsize + VAR_2->dirstrsize + VAR_2->dataents.length;
  VAR_3->addend = 0;
  VAR_3->howto = FUNC_3 (FUNC_0 (VAR_2->wrbfd), VAR_0);
  if (VAR_3->howto == ((void*)0))
    FUNC_2 (FUNC_1("can't get BFD_RELOC_RVA relocation type"));

  VAR_2->relocs = FUNC_8 (VAR_2->relocs,
     (VAR_2->reloc_count + 2) * sizeof (arelent *));
  VAR_2->relocs[VAR_2->reloc_count] = VAR_3;
  VAR_2->relocs[VAR_2->reloc_count + 1] = ((void*)0);
  ++VAR_2->reloc_count;

  VAR_4 = (struct extern_res_data *) FUNC_4 (&VAR_2->dataents, sizeof (*VAR_4));

  FUNC_7 (VAR_2->wrbfd, VAR_4->rva,
      (VAR_2->dirsize
       + VAR_2->dirstrsize
       + VAR_2->dataentsize
       + VAR_2->resources.length));
  FUNC_7 (VAR_2->wrbfd, VAR_4->codepage, VAR_1->coff_info.codepage);
  FUNC_7 (VAR_2->wrbfd, VAR_4->reserved, VAR_1->coff_info.reserved);

  VAR_5 = (coff_res_data *) FUNC_6 (sizeof (coff_res_data));
  VAR_5->length = FUNC_5 (((void*)0), (rc_uint_type) 0, VAR_1);
  VAR_5->res = VAR_1;
  VAR_5->next = ((void*)0);

  if (VAR_2->resources.d == ((void*)0))
    VAR_2->resources.d = VAR_5;
  else
    VAR_2->resources.last->next = VAR_5;

  VAR_2->resources.last = VAR_5;
  VAR_2->resources.length += (VAR_5->length + 3) & ~3;

  FUNC_7 (VAR_2->wrbfd, VAR_4->size, VAR_5->length);


  VAR_5->length = (VAR_5->length + 3) & ~3;
}
