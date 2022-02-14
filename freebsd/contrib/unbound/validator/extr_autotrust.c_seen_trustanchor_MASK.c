
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct autr_ta {int pending_count; int fetched; } ;



__attribute__((used)) static void
FUNC_0(struct autr_ta* VAR_0, uint8_t VAR_1)
{
 VAR_0->fetched = VAR_1;
 if(VAR_0->pending_count < 250)
  VAR_0->pending_count++;
}
