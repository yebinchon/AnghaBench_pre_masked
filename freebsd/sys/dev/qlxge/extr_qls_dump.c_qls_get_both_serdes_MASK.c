
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int qla_host_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_1, uint32_t VAR_2, uint32_t *VAR_3,
 uint32_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 int VAR_7 = -1;

 if (VAR_5)
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_7)
  *VAR_3 = VAR_0;

 VAR_7 = -1;

 if(VAR_6)
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);

 if (VAR_7)
  *VAR_4 = VAR_0;
}
