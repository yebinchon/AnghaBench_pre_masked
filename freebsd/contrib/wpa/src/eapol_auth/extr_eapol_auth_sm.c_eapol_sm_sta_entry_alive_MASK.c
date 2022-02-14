
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ctx; } ;
struct TYPE_3__ {int (* sta_entry_alive ) (int ,int const*) ;} ;
struct eapol_authenticator {TYPE_2__ conf; TYPE_1__ cb; } ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(struct eapol_authenticator *VAR_0,
        const u8 *VAR_1)
{
 return VAR_0->cb.sta_entry_alive(VAR_0->conf.ctx, VAR_1);
}
