
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_timer {scalar_t__ latched; scalar_t__ active; scalar_t__ value; } ;



__attribute__((used)) static void
FUNC_0(struct bstp_timer *VAR_0)
{
 VAR_0->value = 0;
 VAR_0->active = 0;
 VAR_0->latched = 0;
}
