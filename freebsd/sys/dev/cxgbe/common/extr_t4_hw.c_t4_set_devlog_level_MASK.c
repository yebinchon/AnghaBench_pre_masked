
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_devlog_cmd {unsigned int level; void* retval_len16; void* op_to_write; } ;
struct adapter {int mbox; } ;
typedef int devlog_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct fw_devlog_cmd) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct fw_devlog_cmd*,int ,int) ;
 int FUNC_4 (struct adapter*,int ,struct fw_devlog_cmd*,int,struct fw_devlog_cmd*) ;

int FUNC_5(struct adapter *VAR_3, unsigned int VAR_4)
{
 struct fw_devlog_cmd VAR_5;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.op_to_write = FUNC_2(FUNC_1(VAR_0) |
          VAR_1 |
          VAR_2);
 VAR_5.level = VAR_4;
 VAR_5.retval_len16 = FUNC_2(FUNC_0(VAR_5));
 return FUNC_4(VAR_3, VAR_3->mbox, &VAR_5,
     sizeof(VAR_5), &VAR_5);
}
