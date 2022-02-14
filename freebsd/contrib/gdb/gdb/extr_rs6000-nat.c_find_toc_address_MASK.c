
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap {scalar_t__ tstart; scalar_t__ tend; scalar_t__ dstart; struct objfile* objfile; struct vmap* nxt; } ;
struct objfile {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct objfile* VAR_0 ;
 struct vmap* VAR_1 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_2)
{
  struct vmap *VAR_3;
  extern CORE_ADDR FUNC_3 (struct objfile *);

  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->nxt)
    {
      if (VAR_2 >= VAR_3->tstart && VAR_2 < VAR_3->tend)
 {

   return VAR_3->dstart + FUNC_3 (VAR_3->objfile == ((void*)0)
           ? VAR_0
           : VAR_3->objfile);
 }
    }
  FUNC_0 ("Unable to find TOC entry for pc %s\n", FUNC_1 (VAR_2));
}
