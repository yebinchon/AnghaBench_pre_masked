
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int*,int) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_3)
{
        uint64_t VAR_4;
        uint32_t *VAR_5;
        uint32_t VAR_6;
        int VAR_7;

        VAR_4 = (uint64_t)(FUNC_0(VAR_3, VAR_0));
        VAR_5 = (uint32_t *)VAR_1;
        VAR_6 = VAR_2 >> 2;

        VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

        return (VAR_7);
}
