
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddf_meta {int * bbm; int * pdd; int * cr; int * vdr; int * pdr; int * cdr; int * hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct ddf_meta *VAR_1)
{

 if (VAR_1->hdr != ((void*)0)) {
  FUNC_0(VAR_1->hdr, VAR_0);
  VAR_1->hdr = ((void*)0);
 }
 if (VAR_1->cdr != ((void*)0)) {
  FUNC_0(VAR_1->cdr, VAR_0);
  VAR_1->cdr = ((void*)0);
 }
 if (VAR_1->pdr != ((void*)0)) {
  FUNC_0(VAR_1->pdr, VAR_0);
  VAR_1->pdr = ((void*)0);
 }
 if (VAR_1->vdr != ((void*)0)) {
  FUNC_0(VAR_1->vdr, VAR_0);
  VAR_1->vdr = ((void*)0);
 }
 if (VAR_1->cr != ((void*)0)) {
  FUNC_0(VAR_1->cr, VAR_0);
  VAR_1->cr = ((void*)0);
 }
 if (VAR_1->pdd != ((void*)0)) {
  FUNC_0(VAR_1->pdd, VAR_0);
  VAR_1->pdd = ((void*)0);
 }
 if (VAR_1->bbm != ((void*)0)) {
  FUNC_0(VAR_1->bbm, VAR_0);
  VAR_1->bbm = ((void*)0);
 }
}
