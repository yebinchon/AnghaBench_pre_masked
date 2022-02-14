
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {scalar_t__ dmac_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct sonicvibes * VAR_1)
{

 return ((FUNC_0(VAR_1->dmac_port + VAR_0) & 0xffffff) + 1) << 1;
}
