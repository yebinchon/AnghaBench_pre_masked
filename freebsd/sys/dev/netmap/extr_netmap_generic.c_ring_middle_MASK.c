
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline u_int
FUNC_2(u_int VAR_0, u_int VAR_1, u_int VAR_2)
{
 u_int VAR_3 = VAR_2 + 1;
 u_int VAR_4;

 if (VAR_1 >= VAR_0) {
  VAR_4 = (VAR_1 + VAR_0) / 2;
 } else {
  VAR_4 = (VAR_1 + VAR_3 + VAR_0) / 2;
  if (VAR_4 >= VAR_3) {
   VAR_4 -= VAR_3;
  }
 }

 if (FUNC_1(VAR_4 >= VAR_3)) {
  FUNC_0("This cannot happen");
  VAR_4 = 0;
 }

 return VAR_4;
}
