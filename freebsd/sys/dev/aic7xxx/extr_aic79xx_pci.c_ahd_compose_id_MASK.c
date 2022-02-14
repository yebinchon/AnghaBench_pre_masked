
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;



__attribute__((used)) static __inline uint64_t
FUNC_0(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3)
{
 uint64_t VAR_4;

 VAR_4 = VAR_3
    | (VAR_2 << 16)
    | ((uint64_t)VAR_1 << 32)
    | ((uint64_t)VAR_0 << 48);

 return (VAR_4);
}
