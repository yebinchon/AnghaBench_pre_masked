
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t*,int,int,size_t*) ;

void
FUNC_2(const void *VAR_0, size_t VAR_1[2]) {
 union {
  const void *v;
  size_t i;
 } VAR_2;

 FUNC_0(sizeof(VAR_2.v) == sizeof(VAR_2.i));
 VAR_2.v = VAR_0;
 FUNC_1(&VAR_2.i, sizeof(VAR_2.i), 0xd983396eU, VAR_1);
}
