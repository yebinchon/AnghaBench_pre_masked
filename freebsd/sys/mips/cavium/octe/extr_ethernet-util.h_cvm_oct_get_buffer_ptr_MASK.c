
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; int back; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_buf_ptr_t ;


 char* FUNC_0 (int) ;

__attribute__((used)) static inline char *FUNC_1(cvmx_buf_ptr_t VAR_0)
{
 return FUNC_0(((VAR_0.s.addr >> 7) - VAR_0.s.back) << 7);
}
