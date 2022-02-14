
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vmctx {int fd; } ;
struct vm_rtc_time {int secs; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_rtc_time*,int) ;
 int FUNC_1 (int ,int ,struct vm_rtc_time*) ;

int
FUNC_2(struct vmctx *VAR_1, time_t *VAR_2)
{
 struct vm_rtc_time VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, sizeof(struct vm_rtc_time));
 VAR_4 = FUNC_1(VAR_1->fd, VAR_0, &VAR_3);
 if (VAR_4 == 0)
  *VAR_2 = VAR_3.secs;
 return (VAR_4);
}
