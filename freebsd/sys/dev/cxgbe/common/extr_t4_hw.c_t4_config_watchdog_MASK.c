
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_watchdog_cmd {void* action; void* timeout; void* retval_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;


 unsigned int FUNC_0 (struct fw_watchdog_cmd) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct fw_watchdog_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_watchdog_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_3, unsigned int VAR_4,
         unsigned int VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, unsigned int VAR_8)
{
 struct fw_watchdog_cmd VAR_9;
 unsigned int VAR_10;







 VAR_10 = (VAR_7 + 5)/10;
 if (VAR_7 && !VAR_10)
  VAR_10 = 1;

 FUNC_5(&VAR_9, 0, sizeof VAR_9);
 VAR_9.op_to_vfn = FUNC_4(FUNC_1(VAR_0) |
         VAR_1 |
         VAR_2 |
         FUNC_2(VAR_5) |
         FUNC_3(VAR_6));
 VAR_9.retval_len16 = FUNC_4(FUNC_0(VAR_9));
 VAR_9.timeout = FUNC_4(VAR_10);
 VAR_9.action = FUNC_4(VAR_8);

 return FUNC_6(VAR_3, VAR_4, &VAR_9, sizeof VAR_9, ((void*)0));
}
