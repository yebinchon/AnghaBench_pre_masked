
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statfs {scalar_t__ f_bavail; int f_blocks; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ v_type; int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct statfs*) ;
 int FUNC_1 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct statfs*,int ) ;
 int FUNC_3 (int ,char*) ;
 struct statfs* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct statfs *VAR_12;

 FUNC_5(&VAR_8, VAR_4);






 if (VAR_9 == ((void*)0)) {
  VAR_6 |= VAR_0;
  return;
 }





 if (VAR_9->v_type == VAR_5) {
  (void) FUNC_1(((void*)0), 1);
  VAR_6 |= VAR_0;
  return;
 }





 VAR_12 = FUNC_4(sizeof(struct statfs), VAR_2, VAR_3);
 if (FUNC_0(VAR_9->v_mount, VAR_12) < 0) {
  FUNC_2(VAR_12, VAR_2);
  return;
 }
 if (VAR_7) {
  if (VAR_12->f_bavail > (int64_t)(VAR_10 * VAR_12->f_blocks /
      100)) {
   VAR_7 = 0;
   FUNC_3(VAR_1, "Accounting resumed\n");
  }
 } else {
  if (VAR_12->f_bavail <= (int64_t)(VAR_11 * VAR_12->f_blocks /
      100)) {
   VAR_7 = 1;
   FUNC_3(VAR_1, "Accounting suspended\n");
  }
 }
 FUNC_2(VAR_12, VAR_2);
}
