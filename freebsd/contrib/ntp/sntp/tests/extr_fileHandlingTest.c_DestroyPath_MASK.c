
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;

void
FUNC_1(
 const char * VAR_0
 )
{

 union {
  const char *ccp;
  void *vp;
 } VAR_1;

 VAR_1.ccp = VAR_0;
 FUNC_0(VAR_1.vp);
}
