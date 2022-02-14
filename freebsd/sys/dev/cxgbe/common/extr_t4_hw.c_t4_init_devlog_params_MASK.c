
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fw_devlog_e {int dummy; } ;
struct fw_devlog_cmd {int start; unsigned int size; int memsize_devlog; int memtype; int memtype_devlog_memaddr16_devlog; void* retval_len16; void* op_to_write; } ;
struct devlog_params {int start; unsigned int size; int memsize_devlog; int memtype; int memtype_devlog_memaddr16_devlog; void* retval_len16; void* op_to_write; } ;
struct TYPE_2__ {struct fw_devlog_cmd devlog; } ;
struct adapter {int mbox; TYPE_1__ params; } ;
typedef int devlog_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_devlog_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct fw_devlog_cmd*,int ,int) ;
 scalar_t__ FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,int ,struct fw_devlog_cmd*,int,struct fw_devlog_cmd*) ;

int FUNC_13(struct adapter *VAR_6, int VAR_7)
{
 struct devlog_params *VAR_8 = &VAR_6->params.devlog;
 u32 VAR_9;
 unsigned int VAR_10;
 struct fw_devlog_cmd VAR_11;
 int VAR_12;





 VAR_9 =
  FUNC_11(VAR_6, FUNC_6(VAR_0, VAR_5));
 if (VAR_9) {
  unsigned int VAR_13, VAR_14;

  VAR_8->memtype = FUNC_4(VAR_9);
  VAR_8->start = FUNC_3(VAR_9) << 4;

  VAR_14 = FUNC_5(VAR_9);
  VAR_13 = (VAR_14 + 1) * 128;
  VAR_8->size = VAR_13 * sizeof(struct fw_devlog_e);

  return 0;
 }




 FUNC_10(VAR_8, 0, sizeof *VAR_8);





 if (!VAR_7)
  return -VAR_1;



 FUNC_10(&VAR_11, 0, sizeof VAR_11);
 VAR_11.op_to_write = FUNC_9(FUNC_7(VAR_2) |
          VAR_4 | VAR_3);
 VAR_11.retval_len16 = FUNC_9(FUNC_0(VAR_11));
 VAR_12 = FUNC_12(VAR_6, VAR_6->mbox, &VAR_11, sizeof(VAR_11),
    &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_10 =
  FUNC_8(VAR_11.memtype_devlog_memaddr16_devlog);
 VAR_8->memtype = FUNC_2(VAR_10);
 VAR_8->start = FUNC_1(VAR_10) << 4;
 VAR_8->size = FUNC_8(VAR_11.memsize_devlog);

 return 0;
}
