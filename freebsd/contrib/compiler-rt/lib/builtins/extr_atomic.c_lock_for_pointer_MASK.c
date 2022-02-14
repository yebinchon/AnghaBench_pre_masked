
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Lock ;


 intptr_t VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static __inline Lock *FUNC_0(void *VAR_2) {
  intptr_t VAR_3 = (intptr_t)VAR_2;



  VAR_3 >>= 4;

  intptr_t VAR_4 = VAR_3 & VAR_0;


  VAR_3 >>= 16;
  VAR_3 ^= VAR_4;

  return VAR_1 + (VAR_3 & VAR_0);
}
