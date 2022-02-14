
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int cb_ctx; int (* reg_success_cb ) (int ,int const*,int const*,int const*,size_t) ;} ;


 int FUNC_0 (int ,int const*,int const*,int const*,size_t) ;

__attribute__((used)) static void FUNC_1(struct wps_registrar *VAR_0, const u8 *VAR_1,
          const u8 *VAR_2, const u8 *VAR_3,
          size_t VAR_4)
{
 if (VAR_0->reg_success_cb == ((void*)0))
  return;

 VAR_0->reg_success_cb(VAR_0->cb_ctx, VAR_1, VAR_2, VAR_3, VAR_4);
}
