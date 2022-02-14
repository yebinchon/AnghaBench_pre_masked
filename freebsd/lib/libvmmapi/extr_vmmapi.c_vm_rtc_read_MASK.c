
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vmctx {int fd; } ;
struct vm_rtc_data {int offset; int value; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_rtc_data*,int) ;
 int FUNC_1 (int ,int ,struct vm_rtc_data*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, uint8_t *VAR_3)
{
 struct vm_rtc_data VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, sizeof(struct vm_rtc_data));
 VAR_4.offset = VAR_2;
 VAR_5 = FUNC_1(VAR_1->fd, VAR_0, &VAR_4);
 if (VAR_5 == 0)
  *VAR_3 = VAR_4.value;
 return (VAR_5);
}
