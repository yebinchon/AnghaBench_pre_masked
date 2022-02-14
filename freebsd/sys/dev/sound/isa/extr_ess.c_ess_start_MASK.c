
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int dummy; } ;
struct ess_chinfo {int hwch; scalar_t__ stopping; int blksz; int fmt; int spd; int dir; struct ess_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ess_info*,int ) ;
 int FUNC_1 (struct ess_info*,int) ;
 int FUNC_2 (struct ess_info*) ;
 int FUNC_3 (struct ess_info*,int) ;
 int FUNC_4 (struct ess_info*,int,int) ;
 int FUNC_5 (struct ess_info*,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct ess_info*) ;
 int FUNC_7 (struct ess_info*,int,int) ;

__attribute__((used)) static int
FUNC_8(struct ess_chinfo *VAR_2)
{
 struct ess_info *VAR_3 = VAR_2->parent;
     int VAR_4 = (VAR_2->dir == VAR_1)? 1 : 0;

 FUNC_2(VAR_3);
 FUNC_5(VAR_3, VAR_2->hwch, VAR_2->dir, VAR_2->spd, VAR_2->fmt, VAR_2->blksz);
 VAR_2->stopping = 0;
 if (VAR_2->hwch == 1)
  FUNC_7(VAR_3, 0xb8, FUNC_3(VAR_3, 0xb8) | 0x01);
 else
  FUNC_4(VAR_3, 0x78, FUNC_1(VAR_3, 0x78) | 0x03);
 if (VAR_4)
  FUNC_0(VAR_3, VAR_0);
 FUNC_6(VAR_3);
 return 0;
}
