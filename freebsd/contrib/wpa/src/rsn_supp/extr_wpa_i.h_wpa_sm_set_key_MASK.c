
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;
struct TYPE_2__ {int (* set_key ) (int ,int,int const*,int,int,int const*,size_t,int const*,size_t) ;int ctx; } ;


 int FUNC_0 (int (*) (int ,int,int const*,int,int,int const*,size_t,int const*,size_t)) ;
 int FUNC_1 (int ,int,int const*,int,int,int const*,size_t,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_2(struct wpa_sm *VAR_0, enum wpa_alg VAR_1,
     const u8 *VAR_2, int VAR_3, int VAR_4,
     const u8 *VAR_5, size_t VAR_6,
     const u8 *VAR_7, size_t VAR_8)
{
 FUNC_0(VAR_0->ctx->set_key);
 return VAR_0->ctx->set_key(VAR_0->ctx->ctx, VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_5, VAR_6, VAR_7, VAR_8);
}
