
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hash; } ;
typedef TYPE_1__ Ver_Entry ;
struct TYPE_6__ {size_t vernum; TYPE_1__ const* vertab; scalar_t__ strtab; int path; int * versyms; } ;
typedef TYPE_2__ Obj_Entry ;
typedef size_t Elf_Versym ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__,size_t) ;

const Ver_Entry *
FUNC_2(const Obj_Entry *VAR_0, unsigned long VAR_1)
{
    Elf_Versym VAR_2;

    if (VAR_0->vertab) {
 VAR_2 = FUNC_0(VAR_0->versyms[VAR_1]);
 if (VAR_2 >= VAR_0->vernum) {
     FUNC_1("%s: symbol %s has wrong verneed value %d",
  VAR_0->path, VAR_0->strtab + VAR_1, VAR_2);
 } else if (VAR_0->vertab[VAR_2].hash != 0) {
     return &VAR_0->vertab[VAR_2];
 }
    }
    return ((void*)0);
}
