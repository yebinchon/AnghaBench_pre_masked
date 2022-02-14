
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_reset_cmd {int val; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (struct fw_reset_cmd,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fw_reset_cmd*,int ,int) ;
 int FUNC_3 (struct adapter*,unsigned int,struct fw_reset_cmd*,int,int *) ;

int FUNC_4(struct adapter *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct fw_reset_cmd VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_5, VAR_0, VAR_1);
 VAR_5.val = FUNC_1(VAR_4);
 return FUNC_3(VAR_2, VAR_3, &VAR_5, sizeof(VAR_5), ((void*)0));
}
