
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrmsg {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct ifaddrmsg))
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(VAR_0);
}
