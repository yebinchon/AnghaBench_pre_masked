
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void*
FUNC_0(
 const void* VAR_0
 )
{
 union {
  const void * cp;
  void * vp;
 } VAR_1;
 VAR_1.cp = VAR_0;
 return VAR_1.vp;
}
