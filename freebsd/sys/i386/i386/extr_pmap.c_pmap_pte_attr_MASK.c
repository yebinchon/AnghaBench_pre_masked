
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static __inline void
FUNC_1(pt_entry_t *VAR_1, int VAR_2)
{
 u_int VAR_3, VAR_4;





 do {
  VAR_3 = *(u_int *)VAR_1;
  VAR_4 = VAR_3 & ~VAR_0;
  VAR_4 |= VAR_2;
 } while (VAR_4 != VAR_3 && !FUNC_0((u_int *)VAR_1, VAR_3, VAR_4));
}
