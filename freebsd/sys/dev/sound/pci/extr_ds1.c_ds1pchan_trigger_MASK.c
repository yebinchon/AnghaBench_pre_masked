
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pchinfo {int run; int rsnum; int lsnum; int fmt; struct sc_info* parent; } ;
struct sc_info {int lock; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_pchinfo*) ;
 int FUNC_4 (struct sc_info*,int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_2, void *VAR_3, int VAR_4)
{
 struct sc_pchinfo *VAR_5 = VAR_3;
 struct sc_info *VAR_6 = VAR_5->parent;
 int VAR_7;

 if (!FUNC_1(VAR_4))
  return 0;
 VAR_7 = (FUNC_0(VAR_5->fmt) > 1)? 1 : 0;
 if (VAR_4 == VAR_0) {
  VAR_5->run = 1;
  FUNC_3(VAR_5);
  FUNC_2(VAR_6, VAR_5->lsnum, 1);
  FUNC_2(VAR_6, VAR_5->rsnum, VAR_7);
  FUNC_5(VAR_6->lock);
  FUNC_4(VAR_6, VAR_1, 0x00000003, 4);
  FUNC_6(VAR_6->lock);
 } else {
  VAR_5->run = 0;

  FUNC_2(VAR_6, VAR_5->lsnum, 0);
  FUNC_2(VAR_6, VAR_5->rsnum, 0);
 }

 return 0;
}
