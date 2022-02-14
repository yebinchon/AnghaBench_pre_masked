
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct auth_xfer {int serial; scalar_t__ zone_expired; int have_zone; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct auth_xfer* VAR_0, uint32_t VAR_1)
{
 if(!VAR_0->have_zone)
  return 1;
 if(VAR_0->zone_expired)
  return 1;

 if(FUNC_0(VAR_0->serial, VAR_1) < 0)
  return 1;

 return 0;
}
