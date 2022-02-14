
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_enable_cmd {void* ien_to_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (struct fw_vi_enable_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_vi_enable_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,unsigned int,struct fw_vi_enable_cmd*,int,int *) ;

int FUNC_9(struct adapter *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5, bool VAR_6, bool VAR_7, bool VAR_8)
{
 struct fw_vi_enable_cmd VAR_9;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.op_to_viid = FUNC_6(FUNC_1(VAR_0) |
       VAR_2 | VAR_1 |
       FUNC_5(VAR_5));
 VAR_9.ien_to_len16 = FUNC_6(FUNC_4(VAR_6) |
         FUNC_3(VAR_7) |
         FUNC_2(VAR_8) |
         FUNC_0(VAR_9));
 return FUNC_8(VAR_3, VAR_4, &VAR_9, sizeof(VAR_9), ((void*)0));
}
