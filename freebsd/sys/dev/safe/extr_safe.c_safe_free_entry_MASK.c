
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safe_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ d_csr; } ;
struct safe_ringentry {TYPE_1__ re_desc; scalar_t__ re_crp; int * re_dst_m; int * re_src_m; } ;
struct cryptop {int crp_etype; } ;


 int VAR_0 ;
 int FUNC_0 (struct cryptop*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct safe_softc *VAR_1, struct safe_ringentry *VAR_2)
{
 struct cryptop *VAR_3;




 if ((VAR_2->re_dst_m != ((void*)0)) && (VAR_2->re_src_m != VAR_2->re_dst_m))
  FUNC_1(VAR_2->re_dst_m);

 VAR_3 = (struct cryptop *)VAR_2->re_crp;

 VAR_2->re_desc.d_csr = 0;

 VAR_3->crp_etype = VAR_0;
 FUNC_0(VAR_3);
 return(0);
}
