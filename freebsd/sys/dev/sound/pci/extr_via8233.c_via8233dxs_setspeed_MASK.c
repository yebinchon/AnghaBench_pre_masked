
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {int lock; } ;
struct via_chinfo {int rbase; struct via_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct via_info*,int,int) ;
 int FUNC_3 (struct via_info*,int,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(kobj_t VAR_2, void *VAR_3, uint32_t VAR_4)
{
 struct via_chinfo *VAR_5 = VAR_3;
 struct via_info *VAR_6 = VAR_5->parent;
 uint32_t VAR_7, VAR_8;

 VAR_7 = VAR_5->rbase + VAR_1;
 FUNC_0(VAR_6->lock);
 VAR_8 = FUNC_2(VAR_6, VAR_7, 4) & ~VAR_0;



 VAR_8 |= VAR_0 * (VAR_4 / 48) / (48000 / 48);
 FUNC_3(VAR_6, VAR_7, VAR_8, 4);
 FUNC_1(VAR_6->lock);

 return (VAR_4);
}
