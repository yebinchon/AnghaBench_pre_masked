
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {int lock; } ;
struct via_chinfo {int rbase; struct via_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct via_info*,int,int) ;
 int FUNC_4 (struct via_info*,int,int,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_4, void *VAR_5, uint32_t VAR_6)
{
 struct via_chinfo *VAR_7 = VAR_5;
 struct via_info *VAR_8 = VAR_7->parent;
 uint32_t VAR_9, VAR_10;

 VAR_9 = VAR_7->rbase + VAR_3;
 FUNC_1(VAR_8->lock);
 VAR_10 = FUNC_3(VAR_8, VAR_9, 4);

 VAR_10 &= ~(VAR_2 | VAR_1);
 if (FUNC_0(VAR_6) > 1)
  VAR_10 |= VAR_2;
 if (VAR_6 & VAR_0)
  VAR_10 |= VAR_1;
 FUNC_4(VAR_8, VAR_9, VAR_10, 4);
 FUNC_2(VAR_8->lock);

 return (0);
}
