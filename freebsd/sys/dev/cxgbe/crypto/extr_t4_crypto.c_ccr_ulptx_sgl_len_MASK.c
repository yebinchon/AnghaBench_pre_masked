
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ulptx_sgl {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int
FUNC_1(int VAR_0)
{
 u_int VAR_1;

 VAR_0--;
 VAR_1 = sizeof(struct ulptx_sgl) + 8 * ((3 * VAR_0) / 2 + (VAR_0 & 1));
 return (FUNC_0(VAR_1, 16));
}
