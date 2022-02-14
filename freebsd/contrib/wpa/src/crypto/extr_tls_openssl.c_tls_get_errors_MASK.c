
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,int *) ;
 unsigned long FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;

int FUNC_3(void *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;

 while ((VAR_3 = FUNC_1())) {
  FUNC_2(VAR_0, "TLS - SSL error: %s",
      FUNC_0(VAR_3, ((void*)0)));
  VAR_2++;
 }

 return VAR_2;
}
