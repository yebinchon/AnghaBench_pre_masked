
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct via_info {int lock; } ;
struct via_chinfo {struct via_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct via_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_5, void *VAR_6, uint32_t VAR_7)
{
 struct via_chinfo *VAR_8 = VAR_6;
 struct via_info *VAR_9 = VAR_8->parent;

 uint32_t VAR_10 = 0xff000000;
 uint8_t VAR_11 = (VAR_7 & VAR_0) ? VAR_1 : VAR_2;

 if (FUNC_0(VAR_7) > 1) {
  VAR_11 |= FUNC_1(2);
  VAR_10 |= FUNC_2(1) | FUNC_3(2);
 } else {
  VAR_11 |= FUNC_1(1);
  VAR_10 |= FUNC_2(1) | FUNC_3(1);
 }

 FUNC_4(VAR_9->lock);
 FUNC_6(VAR_9, VAR_4, VAR_10, 4);
 FUNC_6(VAR_9, VAR_3, VAR_11, 1);
 FUNC_5(VAR_9->lock);

 return (0);
}
