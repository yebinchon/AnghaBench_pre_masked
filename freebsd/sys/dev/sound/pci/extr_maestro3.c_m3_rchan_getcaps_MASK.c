
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_rchinfo {int adc_idx; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct pcmchan_caps VAR_1 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_1(kobj_t VAR_2, void *VAR_3)
{
 struct sc_rchinfo *VAR_4 = VAR_3;

        FUNC_0(VAR_0, ("m3_rchan_getcaps(adc=%d)\n", VAR_4->adc_idx));

 return &VAR_1;
}
