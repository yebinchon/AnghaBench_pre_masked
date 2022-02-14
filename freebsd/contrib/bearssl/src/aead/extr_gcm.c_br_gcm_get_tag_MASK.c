
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count_ctr; unsigned char* buf; int count_aad; int j0_2; int j0_1; TYPE_2__** bctx; int y; int h; int (* gh ) (int ,int ,unsigned char*,int) ;} ;
typedef TYPE_1__ br_gcm_context ;
struct TYPE_5__ {int (* run ) (TYPE_2__**,int ,int ,void*,int) ;} ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ,int ,unsigned char*,size_t) ;
 int FUNC_3 (int ,int ,unsigned char*,int) ;
 int FUNC_4 (TYPE_2__**,int ,int ,void*,int) ;

void
FUNC_5(br_gcm_context *VAR_0, void *VAR_1)
{
 size_t VAR_2;
 unsigned char VAR_3[16];

 VAR_2 = (size_t)VAR_0->count_ctr & (size_t)15;
 if (VAR_2 > 0) {





  VAR_0->gh(VAR_0->y, VAR_0->h, VAR_0->buf, VAR_2);
 }




 FUNC_0(VAR_3, VAR_0->count_aad << 3);
 FUNC_0(VAR_3 + 8, VAR_0->count_ctr << 3);
 VAR_0->gh(VAR_0->y, VAR_0->h, VAR_3, 16);





 FUNC_1(VAR_1, VAR_0->y, 16);
 (*VAR_0->bctx)->run(VAR_0->bctx, VAR_0->j0_1, VAR_0->j0_2, VAR_1, 16);
}
