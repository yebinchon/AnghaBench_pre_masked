
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int
FUNC_1(int VAR_1) {
 if (VAR_0 == 1000) {
  return (VAR_1);
 } else if (VAR_0 > 1000) {
  return (VAR_1*(VAR_0/1000));
 } else {
  return (FUNC_0(1, VAR_1/(1000/VAR_0)));
 }
}
