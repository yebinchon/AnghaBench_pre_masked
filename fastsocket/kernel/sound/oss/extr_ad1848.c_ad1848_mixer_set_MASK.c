
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int supported_devices; int* mixer_reroute; int* levels; TYPE_1__** mix_devices; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_5__ {scalar_t__ nbits; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int,size_t) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1(ad1848_info * VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6 & 0x000000ff;
 int VAR_8 = (VAR_6 & 0x0000ff00) >> 8;
 int VAR_9;

 if (VAR_5 > 31)
  return -VAR_0;

 if (!(VAR_4->supported_devices & (1 << VAR_5)))
  return -VAR_0;

 VAR_5 = VAR_4->mixer_reroute[VAR_5];

 if (VAR_4->mix_devices[VAR_5][VAR_1].nbits == 0)
  return -VAR_0;

 if (VAR_7 > 100)
  VAR_7 = 100;
 if (VAR_8 > 100)
  VAR_8 = 100;

 if (VAR_4->mix_devices[VAR_5][VAR_2].nbits == 0)
  VAR_8 = VAR_7;

 VAR_9 = VAR_7 | (VAR_8 << 8);


 VAR_7 = VAR_3[VAR_7];
 VAR_8 = VAR_3[VAR_8];

 VAR_4->levels[VAR_5] = VAR_9;




 FUNC_0(VAR_4, VAR_5, VAR_7, VAR_1);




 if (VAR_4->mix_devices[VAR_5][VAR_2].nbits == 0)
  goto out;
 FUNC_0(VAR_4, VAR_5, VAR_8, VAR_2);

 out:
 return VAR_9;
}
