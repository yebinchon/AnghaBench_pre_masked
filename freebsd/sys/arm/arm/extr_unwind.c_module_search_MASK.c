
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct search_context {int * exidx_end; int * exidx_start; scalar_t__ addr; } ;
struct TYPE_7__ {int * value; } ;
typedef TYPE_1__ linker_symval_t ;
typedef TYPE_2__* linker_file_t ;
typedef scalar_t__ caddr_t ;
typedef int c_linker_sym_t ;
struct TYPE_8__ {scalar_t__ address; scalar_t__ size; int filename; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,char*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(linker_file_t VAR_0, void *VAR_1)
{
 struct search_context *VAR_2 = VAR_1;
 linker_symval_t VAR_3;
 c_linker_sym_t VAR_4;

 if (VAR_0->address <= (caddr_t)VAR_2->addr &&
     (VAR_0->address + VAR_0->size) >= (caddr_t)VAR_2->addr) {
  if ((FUNC_0(VAR_0, "__exidx_start", &VAR_4) == 0 ||
      FUNC_0(VAR_0, "exidx_start", &VAR_4) == 0) &&
      FUNC_1(VAR_0, VAR_4, &VAR_3) == 0)
   VAR_2->exidx_start = VAR_3.value;

  if ((FUNC_0(VAR_0, "__exidx_end", &VAR_4) == 0 ||
      FUNC_0(VAR_0, "exidx_end", &VAR_4) == 0) &&
      FUNC_1(VAR_0, VAR_4, &VAR_3) == 0)
   VAR_2->exidx_end = VAR_3.value;

  if (VAR_2->exidx_start != ((void*)0) && VAR_2->exidx_end != ((void*)0))
   return (1);
  FUNC_2("Invalid module %s, no unwind tables\n", VAR_0->filename);
 }
 return (0);
}
