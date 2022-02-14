
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_rchinfo {size_t num; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;


 struct pcmchan_caps* VAR_0 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_0(kobj_t VAR_1, void *VAR_2)
{
 struct sc_rchinfo *VAR_3 = VAR_2;

 return &VAR_0[VAR_3->num];
}
