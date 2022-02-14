
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {int dummy; } ;
struct sc_chinfo {int format; struct sc_pcminfo* parent; } ;
typedef int kobj_t ;



__attribute__((used)) static int
FUNC_0(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct sc_pcminfo *VAR_3;
 struct sc_chinfo *VAR_4;

 VAR_4 = VAR_1;
 VAR_3 = VAR_4->parent;

 VAR_4->format = VAR_2;

 return (0);
}
