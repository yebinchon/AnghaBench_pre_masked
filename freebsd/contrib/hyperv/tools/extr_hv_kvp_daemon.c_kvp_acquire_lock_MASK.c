
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flock {int l_pid; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_2__ {int pool_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct flock*) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_4(int VAR_6)
{
 struct flock VAR_7 = { 0, 0, 0, VAR_2, VAR_4, 0 };

 VAR_7.l_pid = FUNC_3();

 if (FUNC_2(VAR_5[VAR_6].pool_fd, VAR_1, &VAR_7) == -1) {
  FUNC_0(VAR_3, "Failed to acquire the lock pool: %d", VAR_6);
  FUNC_1(VAR_0);
 }
}
