
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; int list; } ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;







 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_lprops*,struct ubifs_lprops*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ubifs_info *VAR_1, struct ubifs_lprops *VAR_2,
         struct ubifs_lprops *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3->flags & VAR_0;
 switch (VAR_4) {
 case 134:
 case 133:
 case 130:
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
 case 132:
 case 129:
 case 131:
  FUNC_0(&VAR_2->list, &VAR_3->list);
  break;
 default:
  FUNC_2(0);
 }
}
