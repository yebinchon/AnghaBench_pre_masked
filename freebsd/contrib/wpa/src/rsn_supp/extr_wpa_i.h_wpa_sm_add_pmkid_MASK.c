
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* add_pmkid ) (int ,void*,int const*,int const*,int const*,int const*,size_t) ;int ctx; } ;


 int FUNC_0 (int (*) (int ,void*,int const*,int const*,int const*,int const*,size_t)) ;
 int FUNC_1 (int ,void*,int const*,int const*,int const*,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_2(struct wpa_sm *VAR_0, void *VAR_1,
       const u8 *VAR_2, const u8 *VAR_3,
       const u8 *VAR_4, const u8 *VAR_5,
       size_t VAR_6)
{
 FUNC_0(VAR_0->ctx->add_pmkid);
 return VAR_0->ctx->add_pmkid(VAR_0->ctx->ctx, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6);
}
