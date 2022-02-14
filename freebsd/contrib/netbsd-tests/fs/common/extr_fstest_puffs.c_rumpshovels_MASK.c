
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffstestargs {int dummy; } ;
typedef int pthread_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *,int ,struct puffstestargs*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct puffstestargs *VAR_2)
{
 pthread_t VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_3()) == -1)
  FUNC_0(1, "rump_init");

 if (FUNC_1(&VAR_3, ((void*)0), VAR_0, VAR_2) == -1)
  FUNC_0(1, "read shovel");
 FUNC_2(VAR_3);

 if (FUNC_1(&VAR_3, ((void*)0), VAR_1, VAR_2) == -1)
  FUNC_0(1, "write shovel");
 FUNC_2(VAR_3);
}
