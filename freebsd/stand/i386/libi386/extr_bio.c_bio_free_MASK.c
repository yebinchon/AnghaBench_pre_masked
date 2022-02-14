
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 (char*) ;

void
FUNC_1(void *VAR_1, size_t VAR_2)
{

 if (VAR_1 == ((void*)0))
  return;

 VAR_0 -= VAR_2;
 if (VAR_0 != VAR_1)
  FUNC_0("bio_alloc()/bio_free() mismatch\n");
}
