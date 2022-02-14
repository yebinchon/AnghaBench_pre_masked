
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_authenticator {int cb_ctx; TYPE_1__* cb; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;
struct TYPE_2__ {int (* set_key ) (int ,int,int,int const*,int,int *,size_t) ;} ;


 int FUNC_0 (int ,int,int,int const*,int,int *,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_authenticator *VAR_0,
       int VAR_1,
       enum wpa_alg VAR_2, const u8 *VAR_3, int VAR_4,
       u8 *VAR_5, size_t VAR_6)
{
 if (VAR_0->cb->set_key == ((void*)0))
  return -1;
 return VAR_0->cb->set_key(VAR_0->cb_ctx, VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
}
