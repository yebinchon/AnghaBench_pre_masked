
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int layers; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct idr *VAR_1)
{
 return (1 << (VAR_1->layers * VAR_0)) - 1;
}
