
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct module {scalar_t__ ctfdata; scalar_t__ symtbl; scalar_t__ strings; TYPE_2__* strhdr; TYPE_1__* symhdr; int ctfsize; } ;
struct TYPE_14__ {char* cts_name; scalar_t__ cts_data; int cts_entsize; scalar_t__ cts_offset; int cts_size; scalar_t__ cts_flags; int cts_type; } ;
typedef TYPE_4__ ctf_sect_t ;
struct TYPE_13__ {int cts_size; scalar_t__ cts_data; } ;
struct TYPE_15__ {int ctf_size; TYPE_3__ ctf_data; scalar_t__ ctf_base; } ;
typedef TYPE_5__ ctf_file_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_12__ {int sh_size; } ;
struct TYPE_11__ {int sh_size; } ;
typedef int Elf64_Sym ;
typedef int Elf32_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_2 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int*) ;
 int VAR_4 ;
 int FUNC_3 (struct module*,scalar_t__,int ) ;
 int VAR_5 ;

ctf_file_t *
FUNC_4(struct module *VAR_6, int *VAR_7)
{
 ctf_sect_t VAR_8, VAR_9, VAR_10;
 ctf_file_t *VAR_11 = ((void*)0);
 int VAR_12;

 if (VAR_7 == ((void*)0))
  VAR_7 = &VAR_12;

 VAR_8.cts_name = ".SUNW_ctf";
 VAR_8.cts_type = VAR_1;
 VAR_8.cts_flags = VAR_0;
 VAR_8.cts_data = VAR_6->ctfdata;
 VAR_8.cts_size = VAR_6->ctfsize;
 VAR_8.cts_entsize = 1;
 VAR_8.cts_offset = 0;

 VAR_9.cts_name = ".symtab";
 VAR_9.cts_type = VAR_3;
 VAR_9.cts_flags = 0;
 VAR_9.cts_data = VAR_6->symtbl;
 VAR_9.cts_size = VAR_6->symhdr->sh_size;

 VAR_9.cts_entsize = sizeof (Elf64_Sym);



 VAR_9.cts_offset = 0;

 VAR_10.cts_name = ".strtab";
 VAR_10.cts_type = VAR_2;
 VAR_10.cts_flags = 0;
 VAR_10.cts_data = VAR_6->strings;
 VAR_10.cts_size = VAR_6->strhdr->sh_size;
 VAR_10.cts_entsize = 1;
 VAR_10.cts_offset = 0;

 FUNC_0(FUNC_1(&VAR_5));

 if ((VAR_11 = FUNC_2(&VAR_8, &VAR_9, &VAR_10, VAR_7)) == ((void*)0))
  return (((void*)0));

 if (!VAR_4 && (caddr_t)VAR_11->ctf_base != VAR_6->ctfdata) {
  FUNC_3(VAR_6, (caddr_t)VAR_11->ctf_base, VAR_11->ctf_size);
  VAR_11->ctf_data.cts_data = VAR_11->ctf_base;
  VAR_11->ctf_data.cts_size = VAR_11->ctf_size;
 }

 return (VAR_11);
}
