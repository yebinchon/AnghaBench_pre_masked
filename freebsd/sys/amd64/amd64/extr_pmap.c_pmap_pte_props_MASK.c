
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int pt_entry_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static __inline void
FUNC_1(pt_entry_t *VAR_0, u_long VAR_1, u_long VAR_2)
{
 u_long VAR_3, VAR_4;

 VAR_3 = *(u_long *)VAR_0;
 do {
  VAR_4 = VAR_3 & ~VAR_2;
  VAR_4 |= VAR_1;
 } while (VAR_4 != VAR_3 && !FUNC_0((u_long *)VAR_0, &VAR_3,
     VAR_4));
}
