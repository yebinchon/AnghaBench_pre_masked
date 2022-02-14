
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rangelocks {int rls_magic; int rls_locks; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct rangelocks* FUNC_2 (int) ;

int
FUNC_3(struct rangelocks **VAR_1)
{
 struct rangelocks *VAR_2;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (-1);

 FUNC_1(&VAR_2->rls_locks);

 VAR_2->rls_magic = VAR_0;
 *VAR_1 = VAR_2;

 return (0);
}
