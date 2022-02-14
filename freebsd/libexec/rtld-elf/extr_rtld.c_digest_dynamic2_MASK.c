
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int d_val; } ;
struct TYPE_13__ {TYPE_1__ d_un; } ;
struct TYPE_12__ {char const* runpath; int strtab; char const* rpath; scalar_t__ z_origin; } ;
typedef TYPE_2__ Obj_Entry ;
typedef TYPE_3__ Elf_Dyn ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 void* FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(Obj_Entry *VAR_0, const Elf_Dyn *VAR_1,
    const Elf_Dyn *VAR_2, const Elf_Dyn *VAR_3)
{

 if (VAR_0->z_origin && !FUNC_0(VAR_0))
  FUNC_3();

 if (VAR_3 != ((void*)0)) {
  VAR_0->runpath = (const char *)VAR_0->strtab + VAR_3->d_un.d_val;
  VAR_0->runpath = FUNC_2(VAR_0, VAR_0->runpath);
 } else if (VAR_1 != ((void*)0)) {
  VAR_0->rpath = (const char *)VAR_0->strtab + VAR_1->d_un.d_val;
  VAR_0->rpath = FUNC_2(VAR_0, VAR_0->rpath);
 }
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_0, VAR_0->strtab + VAR_2->d_un.d_val);
}
