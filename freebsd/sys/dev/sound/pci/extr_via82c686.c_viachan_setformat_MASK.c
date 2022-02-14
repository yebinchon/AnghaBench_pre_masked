
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct via_info {int lock; } ;
struct via_chinfo {int dir; int mode; struct via_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct via_info*,int ,int) ;
 int FUNC_6 (struct via_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_3, void *VAR_4, u_int32_t VAR_5)
{
 struct via_chinfo *VAR_6 = VAR_4;
 struct via_info *VAR_7 = VAR_6->parent;
 int VAR_8, VAR_9;

 VAR_9 = 0;
 if (FUNC_0(VAR_5) > 1)
  VAR_9 |= VAR_2;
 if (VAR_5 & VAR_0)
  VAR_9 |= VAR_1;

 FUNC_1(FUNC_2("set format: dir = %d, format=%x\n", VAR_6->dir, VAR_5));
 FUNC_3(VAR_7->lock);
 VAR_8 = FUNC_5(VAR_7, VAR_6->mode, 1);
 VAR_8 &= ~(VAR_1 | VAR_2);
 VAR_8 |= VAR_9;
 FUNC_6(VAR_7, VAR_6->mode, VAR_8, 1);
 FUNC_4(VAR_7->lock);

 return 0;
}
