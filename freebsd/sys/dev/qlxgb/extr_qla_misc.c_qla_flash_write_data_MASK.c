
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(qla_host_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
 void *VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6;
 uint32_t *VAR_7 = VAR_4;


 if ((VAR_5 = FUNC_3(VAR_1)))
  goto qla_wr_pattern_exit;

 if ((VAR_5 = FUNC_1(VAR_1)))
  goto qla_wr_pattern_unlock_exit;

 if ((VAR_5 = FUNC_6(VAR_1)))
  goto qla_wr_pattern_unlock_exit;

 for (VAR_6 = VAR_2; VAR_6 < (VAR_2 + VAR_3); VAR_6 = VAR_6 + 4) {

  if (*VAR_7 != 0xFFFFFFFF) {
   if (FUNC_2(VAR_1, VAR_6, *VAR_7)) {
    VAR_5 = -1;
    break;
   }
  }
  VAR_7++;
 }

 VAR_5 = FUNC_0(VAR_1);

 if (VAR_5 == 0)
  VAR_5 = FUNC_5(VAR_1);

qla_wr_pattern_unlock_exit:
 FUNC_4(VAR_1, VAR_0);

qla_wr_pattern_exit:
 return (VAR_5);
}
