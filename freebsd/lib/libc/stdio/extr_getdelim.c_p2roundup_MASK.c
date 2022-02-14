
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t) ;

__attribute__((used)) static inline size_t
FUNC_1(size_t VAR_0)
{

 if (!FUNC_0(VAR_0)) {
  VAR_0--;
  VAR_0 |= VAR_0 >> 1;
  VAR_0 |= VAR_0 >> 2;
  VAR_0 |= VAR_0 >> 4;
  VAR_0 |= VAR_0 >> 8;
  VAR_0 |= VAR_0 >> 16;



  VAR_0++;
 }
 return (VAR_0);
}
