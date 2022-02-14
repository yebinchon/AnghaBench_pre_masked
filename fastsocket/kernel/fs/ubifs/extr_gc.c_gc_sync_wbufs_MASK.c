
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int jhead_cnt; TYPE_1__* jheads; } ;
struct TYPE_2__ {int wbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->jhead_cnt; VAR_3++) {
  if (VAR_3 == VAR_0)
   continue;
  VAR_2 = FUNC_0(&VAR_1->jheads[VAR_3].wbuf);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
