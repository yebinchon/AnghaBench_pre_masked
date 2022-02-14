
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct ecore_tunn_update_type {int b_mode_enabled; void* tun_cls; } ;
typedef enum ecore_tunn_mode { ____Placeholder_ecore_tunn_mode } ecore_tunn_mode ;



__attribute__((used)) static void
FUNC_0(struct ecore_tunn_update_type *VAR_0,
        u16 VAR_1, u8 VAR_2, u8 VAR_3,
        enum ecore_tunn_mode VAR_4)
{
 if (VAR_1 & (1 << VAR_4)) {
  VAR_0->b_mode_enabled = VAR_2;
  VAR_0->tun_cls = VAR_3;
 } else {
  VAR_0->b_mode_enabled = 0;
 }
}
