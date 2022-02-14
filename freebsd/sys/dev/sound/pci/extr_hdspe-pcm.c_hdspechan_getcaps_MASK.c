
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_pcminfo {int dummy; } ;
struct sc_chinfo {scalar_t__ dir; struct sc_pcminfo* parent; } ;
struct pcmchan_caps {int dummy; } ;
typedef int kobj_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct pcmchan_caps VAR_1 ;
 struct pcmchan_caps VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static struct pcmchan_caps *
FUNC_1(kobj_t VAR_4, void *VAR_5)
{
 struct sc_chinfo *VAR_6;

 VAR_6 = VAR_5;






 return ((VAR_6->dir == VAR_0) ?
     &VAR_1 : &VAR_2);
}
