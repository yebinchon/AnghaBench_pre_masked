
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ctx ;
typedef int Skein_512_Ctxt_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void const*,int ) ;
 int FUNC_3 (void const*,int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(const void *VAR_0, uint64_t VAR_1,
    const void *VAR_2, zio_cksum_t *VAR_3)
{
 Skein_512_Ctxt_t VAR_4;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_3(VAR_2, &VAR_4, sizeof (VAR_4));
 (void) FUNC_2(&VAR_4, VAR_0, VAR_1);
 (void) FUNC_1(&VAR_4, (uint8_t *)VAR_3);
 FUNC_4(&VAR_4, sizeof (VAR_4));
}
