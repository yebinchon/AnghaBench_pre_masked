
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_enable_cmd {int blinkdur; void* ien_to_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (struct fw_vi_enable_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_vi_enable_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_vi_enable_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
       unsigned int VAR_7)
{
 struct fw_vi_enable_cmd VAR_8;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.op_to_viid = FUNC_4(FUNC_1(VAR_0) |
       VAR_2 | VAR_1 |
       FUNC_2(VAR_6));
 VAR_8.ien_to_len16 = FUNC_4(VAR_3 | FUNC_0(VAR_8));
 VAR_8.blinkdur = FUNC_3(VAR_7);
 return FUNC_6(VAR_4, VAR_5, &VAR_8, sizeof(VAR_8), ((void*)0));
}
