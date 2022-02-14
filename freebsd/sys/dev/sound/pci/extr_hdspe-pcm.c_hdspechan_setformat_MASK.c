
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {int dev; } ;
struct sc_chinfo {int format; struct sc_pcminfo* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_1(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct sc_chinfo *VAR_3;

 VAR_3 = VAR_1;






 VAR_3->format = VAR_2;

 return (0);
}
