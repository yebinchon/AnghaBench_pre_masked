
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0()
{
 double VAR_0, VAR_1;
 int VAR_2;

 VAR_0 = 1.;
 VAR_1 = .1;
 for(VAR_2 = 155;; VAR_1 *= VAR_1, VAR_2 >>= 1) {
  if (VAR_2 & 1) {
   VAR_0 *= VAR_1;
   if (VAR_2 == 1)
    break;
   }
  }
 VAR_1 = VAR_0 * VAR_0;
 return VAR_1 == 0.;
 }
