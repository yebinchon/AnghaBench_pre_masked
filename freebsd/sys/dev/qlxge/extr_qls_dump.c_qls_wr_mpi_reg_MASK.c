
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
        int VAR_7 = 0;

        VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_2,
   VAR_1);
        if (VAR_7)
                goto exit_qls_wr_mpi_reg;

        FUNC_0(VAR_4, VAR_3, VAR_6);

        FUNC_0(VAR_4, VAR_0, VAR_5);

        VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_2,
   VAR_1);
exit_qls_wr_mpi_reg:
        return (VAR_7);
}
