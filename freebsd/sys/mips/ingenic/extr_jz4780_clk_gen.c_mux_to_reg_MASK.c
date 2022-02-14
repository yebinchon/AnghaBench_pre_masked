
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline unsigned
FUNC_1(unsigned VAR_0, unsigned VAR_1)
{
 unsigned VAR_2, VAR_3;

 VAR_3 = (1u << 3);
 for (VAR_2 = 0; VAR_3; VAR_2++, VAR_3 >>= 1) {
  if (VAR_1 & VAR_3) {
   if (VAR_0-- == 0)
    return (VAR_2);
  }
 }
 FUNC_0("mux_to_reg");
}
