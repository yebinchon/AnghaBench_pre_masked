
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int pos; } ;
struct sc_chinfo {struct sc_pcminfo* parent; } ;
typedef int kobj_t ;



__attribute__((used)) static uint32_t
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct sc_chinfo *VAR_3;
 struct sc_info *VAR_4;

 VAR_3 = VAR_1;
 VAR_2 = VAR_3->parent;
 VAR_4 = VAR_2->sc;

 return (VAR_4->pos);
}
