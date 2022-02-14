
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddf_vol_meta {int ** bvdc; int * vdc; int * vde; int * cdr; int * hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct ddf_vol_meta *VAR_2)
{
 int VAR_3;

 if (VAR_2->hdr != ((void*)0)) {
  FUNC_0(VAR_2->hdr, VAR_1);
  VAR_2->hdr = ((void*)0);
 }
 if (VAR_2->cdr != ((void*)0)) {
  FUNC_0(VAR_2->cdr, VAR_1);
  VAR_2->cdr = ((void*)0);
 }
 if (VAR_2->vde != ((void*)0)) {
  FUNC_0(VAR_2->vde, VAR_1);
  VAR_2->vde = ((void*)0);
 }
 if (VAR_2->vdc != ((void*)0)) {
  FUNC_0(VAR_2->vdc, VAR_1);
  VAR_2->vdc = ((void*)0);
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->bvdc[VAR_3] != ((void*)0)) {
   FUNC_0(VAR_2->bvdc[VAR_3], VAR_1);
   VAR_2->bvdc[VAR_3] = ((void*)0);
  }
 }
}
