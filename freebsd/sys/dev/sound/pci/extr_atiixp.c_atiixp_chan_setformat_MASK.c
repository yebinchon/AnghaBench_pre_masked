
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_info {int dummy; } ;
struct atiixp_chinfo {scalar_t__ dir; int fmt; struct atiixp_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct atiixp_info*) ;
 int FUNC_2 (struct atiixp_info*,int ) ;
 int FUNC_3 (struct atiixp_info*) ;
 int FUNC_4 (struct atiixp_info*,int ,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_10, void *VAR_11, uint32_t VAR_12)
{
 struct atiixp_chinfo *VAR_13 = VAR_11;
 struct atiixp_info *VAR_14 = VAR_13->parent;
 uint32_t VAR_15;

 FUNC_1(VAR_14);
 if (VAR_13->dir == VAR_9) {
  VAR_15 = FUNC_2(VAR_14, VAR_3);
  VAR_15 &= ~VAR_4;
  if ((VAR_12 & VAR_0) == 0)
   VAR_15 |= VAR_4;
  FUNC_4(VAR_14, VAR_3, VAR_15);
 } else {
  VAR_15 = FUNC_2(VAR_14, VAR_6);
  VAR_15 &= ~VAR_7;

  VAR_15 |= FUNC_0(3) |
      FUNC_0(4);
  VAR_15 |= 0x04 << VAR_8;
  FUNC_4(VAR_14, VAR_6, VAR_15);
  VAR_15 = FUNC_2(VAR_14, VAR_3);
  VAR_15 &= ~VAR_5;
  if ((VAR_12 & VAR_0) == 0)
   VAR_15 |= VAR_5;
  FUNC_4(VAR_14, VAR_3, VAR_15);
  VAR_15 = FUNC_2(VAR_14, VAR_1);
  VAR_15 &= ~VAR_2;
  FUNC_4(VAR_14, VAR_1, VAR_15);
 }
 VAR_13->fmt = VAR_12;
 FUNC_3(VAR_14);

 return (0);
}
