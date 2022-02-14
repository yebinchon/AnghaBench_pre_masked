
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* key_mgmt_set_pmk ) (int ,int const*,size_t) ;int ctx; } ;


 int FUNC_0 (int ,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_sm *VAR_0,
       const u8 *VAR_1, size_t VAR_2)
{
 if (!VAR_0->ctx->key_mgmt_set_pmk)
  return -1;
 return VAR_0->ctx->key_mgmt_set_pmk(VAR_0->ctx->ctx, VAR_1, VAR_2);
}
