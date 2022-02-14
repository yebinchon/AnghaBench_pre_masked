
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_hal {int mh_mtx; int mh_dmat; int mh_dmamap; int mh_cmdbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct malo_hal*,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct malo_hal *VAR_1)
{

 FUNC_1(VAR_1->mh_dmat, VAR_1->mh_cmdbuf, VAR_1->mh_dmamap);
 FUNC_0(VAR_1->mh_dmat);
 FUNC_3(&VAR_1->mh_mtx);
 FUNC_2(VAR_1, VAR_0);
}
