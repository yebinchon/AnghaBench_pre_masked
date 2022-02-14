
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_info {int src; int rsrc; int dst; int rdst; int z_gx; int z_gy; int z_size; scalar_t__ quality; scalar_t__ z_cycle; void* z_dy; void* z_dx; int z_scale; int * z_pcoeff; int * z_dcoeff; int * z_coeff; int * z_resample; scalar_t__ z_alpha; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct z_info *VAR_6)
{

 VAR_6->src = VAR_6->rsrc - (VAR_6->rsrc % ((VAR_5 > 0 &&
     VAR_6->rsrc > VAR_5) ? VAR_5 : 1));
 VAR_6->dst = VAR_6->rdst - (VAR_6->rdst % ((VAR_5 > 0 &&
     VAR_6->rdst > VAR_5) ? VAR_5 : 1));
 VAR_6->z_gx = 1;
 VAR_6->z_gy = 1;
 VAR_6->z_alpha = 0;
 VAR_6->z_resample = ((void*)0);
 VAR_6->z_size = 1;
 VAR_6->z_coeff = ((void*)0);
 VAR_6->z_dcoeff = ((void*)0);
 if (VAR_6->z_pcoeff != ((void*)0)) {
  FUNC_0(VAR_6->z_pcoeff, VAR_0);
  VAR_6->z_pcoeff = ((void*)0);
 }
 VAR_6->z_scale = VAR_2;
 VAR_6->z_dx = VAR_1;
 VAR_6->z_dy = VAR_1;



 if (VAR_6->quality < VAR_4)
  VAR_6->quality = VAR_4;
 else if (VAR_6->quality > VAR_3)
  VAR_6->quality = VAR_3;
}
