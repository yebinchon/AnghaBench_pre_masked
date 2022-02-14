
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tdesc_t ;
typedef int alist_t ;


 int FUNC_0 (int *,void*,void**) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(tdesc_t *VAR_0, tdesc_t **VAR_1, void *VAR_2)
{
 alist_t *VAR_3 = VAR_2;
 void *VAR_4;

 if (!FUNC_0(VAR_3, (void *)VAR_0, (void **)&VAR_4))
  return (0);

 FUNC_1(3, "Redirecting an edge to %s\n", FUNC_2(VAR_4));

 *VAR_1 = VAR_4;

 return (1);
}
