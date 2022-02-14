
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ctx ;
typedef int abd_t ;
typedef int Skein_512_Ctxt_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (void const*,int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;

void
FUNC_5(abd_t *VAR_1, uint64_t VAR_2,
    const void *VAR_3, zio_cksum_t *VAR_4)
{
 Skein_512_Ctxt_t VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_3(VAR_3, &VAR_5, sizeof (VAR_5));
 (void) FUNC_2(VAR_1, 0, VAR_2, VAR_0, &VAR_5);
 (void) FUNC_1(&VAR_5, (uint8_t *)VAR_4);
 FUNC_4(&VAR_5, sizeof (VAR_5));
}
