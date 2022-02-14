
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eapol_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* set_anon_id ) (int ,int const*,size_t) ;} ;


 int FUNC_0 (int ,int const*,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_0;

 if (VAR_3->ctx->set_anon_id)
  VAR_3->ctx->set_anon_id(VAR_3->ctx->ctx, VAR_1, VAR_2);
}
