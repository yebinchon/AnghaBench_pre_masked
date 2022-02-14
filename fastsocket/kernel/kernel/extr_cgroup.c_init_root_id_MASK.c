
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroupfs_root {scalar_t__ hierarchy_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct cgroupfs_root *VAR_6)
{
 int VAR_7 = 0;

 do {
  if (!FUNC_3(&VAR_4, VAR_2))
   return 0;
  FUNC_4(&VAR_3);

  VAR_7 = FUNC_2(&VAR_4, VAR_5,
     &VAR_6->hierarchy_id);
  if (VAR_7 == -VAR_1)

   VAR_7 = FUNC_1(&VAR_4, &VAR_6->hierarchy_id);
  if (!VAR_7) {
   VAR_5 = VAR_6->hierarchy_id + 1;
  } else if (VAR_7 != -VAR_0) {

   FUNC_0(VAR_7);
  }
  FUNC_5(&VAR_3);
 } while (VAR_7);
 return 1;
}
