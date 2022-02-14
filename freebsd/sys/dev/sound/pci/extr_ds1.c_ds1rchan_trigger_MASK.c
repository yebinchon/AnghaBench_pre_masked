
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_rchinfo {int run; scalar_t__ num; struct sc_info* parent; } ;
struct sc_info {int lock; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_rchinfo*) ;
 int FUNC_3 (struct sc_info*,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(kobj_t VAR_4, void *VAR_5, int VAR_6)
{
 struct sc_rchinfo *VAR_7 = VAR_5;
 struct sc_info *VAR_8 = VAR_7->parent;
 u_int32_t VAR_9;

 if (!FUNC_0(VAR_6))
  return 0;
 if (VAR_6 == VAR_1) {
  VAR_7->run = 1;
  FUNC_2(VAR_7);
  FUNC_4(VAR_8->lock);
  VAR_9 = FUNC_1(VAR_8, VAR_2, 4);
  VAR_9 |= (VAR_7->num == VAR_0)? 0x02 : 0x01;
  FUNC_3(VAR_8, VAR_2, VAR_9, 4);
  FUNC_3(VAR_8, VAR_3, 0x00000003, 4);
  FUNC_5(VAR_8->lock);
 } else {
  VAR_7->run = 0;
  FUNC_4(VAR_8->lock);
  VAR_9 = FUNC_1(VAR_8, VAR_2, 4);
  VAR_9 &= ~((VAR_7->num == VAR_0)? 0x02 : 0x01);
  FUNC_3(VAR_8, VAR_2, VAR_9, 4);
  FUNC_5(VAR_8->lock);
 }

 return 0;
}
