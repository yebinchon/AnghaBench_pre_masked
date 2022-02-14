
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct segment_descriptor {int sd_lobase; int sd_hibase; int sd_lolimit; int sd_hilimit; int sd_p; int sd_def32; int sd_gran; scalar_t__ sd_xx; int sd_dpl; int sd_type; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct segment_descriptor *VAR_2, uint32_t VAR_3)
{

 VAR_2->sd_lobase = VAR_3 & 0xffffff;
 VAR_2->sd_hibase = (VAR_3 >> 24) & 0xff;
 VAR_2->sd_lolimit = 0xffff;
 VAR_2->sd_hilimit = 0xf;
 VAR_2->sd_type = VAR_0;
 VAR_2->sd_dpl = VAR_1;
 VAR_2->sd_p = 1;
 VAR_2->sd_xx = 0;
 VAR_2->sd_def32 = 1;
 VAR_2->sd_gran = 1;
}
