
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {scalar_t__ ver_sz; int * ver; scalar_t__ vs_sz; int * vs; int * vs_s; int * vn_s; int * vd_s; scalar_t__ shnum; int * sl; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct readelf *VAR_0)
{

 if (VAR_0->sl != ((void*)0)) {
  FUNC_0(VAR_0->sl);
  VAR_0->sl = ((void*)0);
 }
 VAR_0->shnum = 0;
 VAR_0->vd_s = ((void*)0);
 VAR_0->vn_s = ((void*)0);
 VAR_0->vs_s = ((void*)0);
 VAR_0->vs = ((void*)0);
 VAR_0->vs_sz = 0;
 if (VAR_0->ver != ((void*)0)) {
  FUNC_0(VAR_0->ver);
  VAR_0->ver = ((void*)0);
  VAR_0->ver_sz = 0;
 }
}
