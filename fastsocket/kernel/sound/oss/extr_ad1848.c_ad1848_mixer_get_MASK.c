
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int supported_devices; int* mixer_reroute; int* levels; } ;
typedef TYPE_1__ ad1848_info ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(ad1848_info * VAR_1, int VAR_2)
{
 if (!((1 << VAR_2) & VAR_1->supported_devices))
  return -VAR_0;

 VAR_2 = VAR_1->mixer_reroute[VAR_2];

 return VAR_1->levels[VAR_2];
}
