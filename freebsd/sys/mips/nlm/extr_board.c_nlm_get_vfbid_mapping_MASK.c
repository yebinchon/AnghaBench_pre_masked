
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfbid_tbl {int vfbid; int dest_vc; } ;


 int FUNC_0 (struct vfbid_tbl*) ;
 struct vfbid_tbl* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 struct vfbid_tbl* VAR_1 ;

int
FUNC_2(int VAR_2)
{
 int VAR_3, VAR_4;
 struct vfbid_tbl *VAR_5;

 if (FUNC_1()) {
  VAR_4 = FUNC_0(VAR_0);
  VAR_5 = VAR_0;
 } else {
  VAR_4 = FUNC_0(VAR_1);
  VAR_5 = VAR_1;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_5[VAR_3].vfbid == VAR_2)
      return (VAR_5[VAR_3].dest_vc);
 }

 return (-1);
}
