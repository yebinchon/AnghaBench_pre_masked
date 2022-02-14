
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(qla_host_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5,
 uint32_t *VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_2(VAR_3);

 if (VAR_7)
  goto qls_proc_addr_rd_reg_exit;

 VAR_8 = VAR_4 | VAR_5 | VAR_1;

 FUNC_1(VAR_3, VAR_0, VAR_8);

 VAR_7 = FUNC_2(VAR_3);

 if (VAR_7)
  goto qls_proc_addr_rd_reg_exit;

 *VAR_6 = FUNC_0(VAR_3, VAR_2);

qls_proc_addr_rd_reg_exit:
 return (VAR_7);
}
