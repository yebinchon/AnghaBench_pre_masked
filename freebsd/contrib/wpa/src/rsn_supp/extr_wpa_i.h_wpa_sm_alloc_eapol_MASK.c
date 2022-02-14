
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int * (* alloc_eapol ) (int ,int ,void const*,int ,size_t*,void**) ;} ;


 int FUNC_0 (int * (*) (int ,int ,void const*,int ,size_t*,void**)) ;
 int * FUNC_1 (int ,int ,void const*,int ,size_t*,void**) ;

__attribute__((used)) static inline u8 * FUNC_2(struct wpa_sm *VAR_0, u8 VAR_1,
          const void *VAR_2, u16 VAR_3,
          size_t *VAR_4, void **VAR_5)
{
 FUNC_0(VAR_0->ctx->alloc_eapol);
 return VAR_0->ctx->alloc_eapol(VAR_0->ctx->ctx, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5);
}
