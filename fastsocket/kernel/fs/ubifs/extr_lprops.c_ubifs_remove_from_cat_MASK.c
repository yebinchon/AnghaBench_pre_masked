
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int list; } ;
struct ubifs_info {int freeable_cnt; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_lprops*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ubifs_info *VAR_0,
      struct ubifs_lprops *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 134:
 case 133:
 case 130:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 129:
  VAR_0->freeable_cnt -= 1;
  FUNC_3(VAR_0->freeable_cnt >= 0);

 case 128:
 case 132:
 case 131:
  FUNC_3(!FUNC_1(&VAR_1->list));
  FUNC_0(&VAR_1->list);
  break;
 default:
  FUNC_3(0);
 }
}
