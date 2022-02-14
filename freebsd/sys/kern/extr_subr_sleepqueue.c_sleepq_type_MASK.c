
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleepqueue {int sq_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 struct sleepqueue* FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

int
FUNC_4(void *VAR_0)
{
 struct sleepqueue *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0 != ((void*)0));

 FUNC_1(VAR_0);
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_3(VAR_0);
  return (-1);
 }
 VAR_2 = VAR_1->sq_type;
 FUNC_3(VAR_0);
 return (VAR_2);
}
