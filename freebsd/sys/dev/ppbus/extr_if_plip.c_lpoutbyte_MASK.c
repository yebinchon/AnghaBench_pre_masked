
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static __inline int
FUNC_2(u_char VAR_3, int VAR_4, device_t VAR_5)
{

 FUNC_1(VAR_5, VAR_1[VAR_3]);
 while (!(FUNC_0(VAR_5) & VAR_0))
  if (--VAR_4 == 0)
   return (1);
 FUNC_1(VAR_5, VAR_2[VAR_3]);
 while (FUNC_0(VAR_5) & VAR_0)
  if (--VAR_4 == 0)
   return (1);
 return (0);
}
