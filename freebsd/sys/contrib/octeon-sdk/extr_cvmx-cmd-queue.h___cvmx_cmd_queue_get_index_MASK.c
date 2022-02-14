
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cvmx_cmd_queue_id_t ;



__attribute__((used)) static inline int FUNC_0(cvmx_cmd_queue_id_t VAR_0)
{




    int VAR_1 = VAR_0>>16;
    int VAR_2 = (VAR_0 >> 4) & 0xf;
    int VAR_3 = VAR_0 & 0xf;
    return VAR_1*256 + VAR_3*16 + VAR_2;
}
