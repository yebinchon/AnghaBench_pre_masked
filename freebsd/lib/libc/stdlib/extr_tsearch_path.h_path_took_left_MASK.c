
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int* steps; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct path *VAR_1)
{
 bool VAR_2;

 VAR_2 = VAR_1->steps[0] & 0x1;
 VAR_1->steps[0] = (VAR_1->steps[0] >> 1) | (VAR_1->steps[1] << (VAR_0 - 1));
 VAR_1->steps[1] >>= 1;
 return (VAR_2);
}
