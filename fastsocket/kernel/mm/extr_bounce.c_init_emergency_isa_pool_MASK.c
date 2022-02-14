
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,void*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(void)
{
 if (VAR_1)
  return 0;

 VAR_1 = FUNC_1(VAR_0, VAR_2,
           VAR_3, (void *) 0);
 FUNC_0(!VAR_1);

 FUNC_2("isa bounce pool size: %d pages\n", VAR_0);
 return 0;
}
