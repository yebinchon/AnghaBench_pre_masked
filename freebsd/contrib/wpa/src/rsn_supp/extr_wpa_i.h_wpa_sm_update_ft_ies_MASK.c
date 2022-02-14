
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* update_ft_ies ) (int ,int const*,int const*,size_t) ;int ctx; } ;


 int FUNC_0 (int ,int const*,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_sm *VAR_0, const u8 *VAR_1,
           const u8 *VAR_2, size_t VAR_3)
{
 if (VAR_0->ctx->update_ft_ies)
  return VAR_0->ctx->update_ft_ies(VAR_0->ctx->ctx, VAR_1, VAR_2, VAR_3);
 return -1;
}
