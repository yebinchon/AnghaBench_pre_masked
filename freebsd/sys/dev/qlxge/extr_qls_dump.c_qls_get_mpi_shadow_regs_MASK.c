
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
 int VAR_4 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;





 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_6++) {

  VAR_8 = FUNC_1(VAR_5,
    (VAR_0 | 0x0000007c),
                                (0xb0000000 | VAR_7 << 20));
  if (VAR_8)
   goto exit_qls_get_mpi_shadow_regs;

  VAR_8 = FUNC_0(VAR_5,
    (VAR_0 | 0x0000007f),
     VAR_6);
  if (VAR_8)
   goto exit_qls_get_mpi_shadow_regs;
 }

exit_qls_get_mpi_shadow_regs:
 return VAR_8;
}
