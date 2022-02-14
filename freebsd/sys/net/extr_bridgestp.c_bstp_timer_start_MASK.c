
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bstp_timer {int active; scalar_t__ latched; int value; } ;



__attribute__((used)) static void
FUNC_0(struct bstp_timer *VAR_0, uint16_t VAR_1)
{
 VAR_0->value = VAR_1;
 VAR_0->active = 1;
 VAR_0->latched = 0;
}
