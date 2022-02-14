
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_authenticator {int cb_ctx; TYPE_1__* cb; } ;
struct TYPE_2__ {int (* get_seqnum ) (int ,int const*,int,int *) ;} ;


 int FUNC_0 (int ,int const*,int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_authenticator *VAR_0,
          const u8 *VAR_1, int VAR_2, u8 *VAR_3)
{
 if (VAR_0->cb->get_seqnum == ((void*)0))
  return -1;
 return VAR_0->cb->get_seqnum(VAR_0->cb_ctx, VAR_1, VAR_2, VAR_3);
}
