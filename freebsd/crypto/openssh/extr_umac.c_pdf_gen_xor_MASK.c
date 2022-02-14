
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cache; int prf_key; scalar_t__ nonce; } ;
typedef TYPE_1__ pdf_ctx ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef scalar_t__ UINT32 ;


 int const VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(pdf_ctx *VAR_1, const UINT8 VAR_2[8], UINT8 VAR_3[8])
{
    union {
        UINT8 tmp_nonce_lo[4];
        UINT32 align;
    } VAR_4;



    *(UINT32 *)VAR_4.tmp_nonce_lo = ((const UINT32 *)VAR_2)[1];
    VAR_4.tmp_nonce_lo[3] &= ~VAR_0;

    if ( (((UINT32 *)VAR_4.tmp_nonce_lo)[0] != ((UINT32 *)VAR_1->nonce)[1]) ||
         (((const UINT32 *)VAR_2)[0] != ((UINT32 *)VAR_1->nonce)[0]) )
    {
        ((UINT32 *)VAR_1->nonce)[0] = ((const UINT32 *)VAR_2)[0];
        ((UINT32 *)VAR_1->nonce)[1] = ((UINT32 *)VAR_4.tmp_nonce_lo)[0];
        FUNC_0(VAR_1->nonce, VAR_1->cache, VAR_1->prf_key);
    }
}
