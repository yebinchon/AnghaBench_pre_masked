
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc64_tte {int tte_data; scalar_t__ tte_vpn; } ;
typedef int kvaddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sparc64_tte*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct sparc64_tte *VAR_1, kvaddr_t VAR_2)
{

 return (((VAR_1->tte_data & VAR_0) != 0) &&
     (VAR_1->tte_vpn == FUNC_1(VAR_2, FUNC_0(VAR_1))));
}
