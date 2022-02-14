
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int window_mask; int window_buf; } ;
struct rar5 {TYPE_1__ cstate; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_2(struct rar5* VAR_0, uint32_t VAR_1) {
 uint8_t VAR_2[4];
 FUNC_1(VAR_2, VAR_0->cstate.window_buf,
     VAR_0->cstate.window_mask, VAR_1, VAR_1 + 4);
 return FUNC_0(VAR_2);
}
