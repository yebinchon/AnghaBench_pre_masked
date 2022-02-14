
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* mark_authenticated ) (int ,int const*) ;int ctx; } ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_sm *VAR_0,
         const u8 *VAR_1)
{
 if (VAR_0->ctx->mark_authenticated)
  return VAR_0->ctx->mark_authenticated(VAR_0->ctx->ctx, VAR_1);
 return -1;
}
