
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct g_bde_key {int zone_cont; int zone_width; int media_width; } ;



uint64_t
FUNC_0(struct g_bde_key *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = VAR_0->media_width;
 VAR_1 /= VAR_0->zone_width;
 VAR_1 *= VAR_0->zone_cont;
 return (VAR_1);
}
