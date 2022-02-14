
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,scalar_t__,size_t) ;
 int FUNC_4 (scalar_t__,int ,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_5(void *VAR_3, size_t VAR_4)
{
 u_char *VAR_5 = (u_char *)VAR_3;
 size_t VAR_6;

 FUNC_2(VAR_4);
 while (VAR_4 > 0) {
  if (VAR_2 > 0) {
   VAR_6 = FUNC_0(VAR_4, VAR_2);
   FUNC_3(VAR_5, VAR_1 + VAR_0 - VAR_2, VAR_6);
   FUNC_4(VAR_1 + VAR_0 - VAR_2, 0, VAR_6);
   VAR_5 += VAR_6;
   VAR_4 -= VAR_6;
   VAR_2 -= VAR_6;
  }
  if (VAR_2 == 0)
   FUNC_1(((void*)0), 0);
 }
}
