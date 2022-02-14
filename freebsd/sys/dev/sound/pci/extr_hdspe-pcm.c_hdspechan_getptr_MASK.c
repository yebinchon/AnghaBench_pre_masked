
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct sc_chinfo {struct sc_pcminfo* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint32_t
FUNC_3(kobj_t VAR_2, void *VAR_3)
{
 struct sc_pcminfo *VAR_4;
 struct sc_chinfo *VAR_5;
 struct sc_info *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_5 = VAR_3;
 VAR_4 = VAR_5->parent;
 VAR_6 = VAR_4->sc;

 FUNC_1(VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_2(VAR_6->lock);

 VAR_8 = VAR_7 & VAR_0;
 VAR_8 *= 2;

 return (VAR_8);
}
