
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
 uint32_t VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_1(VAR_2);

 if (VAR_6)
  goto qls_proc_addr_wr_reg_exit;

 FUNC_0(VAR_2, VAR_1, VAR_5);

 VAR_7 = VAR_3 | VAR_4;

 FUNC_0(VAR_2, VAR_0, VAR_7);

 VAR_6 = FUNC_1(VAR_2);

qls_proc_addr_wr_reg_exit:
 return (VAR_6);
}
