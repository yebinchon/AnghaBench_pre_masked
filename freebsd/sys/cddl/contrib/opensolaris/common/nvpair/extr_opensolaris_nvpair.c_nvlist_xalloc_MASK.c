
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int nvpriv_t ;
typedef int nvlist_t ;
typedef int nv_alloc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;

int
FUNC_5(nvlist_t **VAR_2, uint_t VAR_3, nv_alloc_t *VAR_4)
{
 nvpriv_t *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 if ((VAR_5 = FUNC_3(VAR_4)) == ((void*)0))
  return (VAR_1);

 if ((*VAR_2 = FUNC_2(VAR_5,
     FUNC_0(sizeof (nvlist_t)))) == ((void*)0)) {
  FUNC_1(VAR_5, VAR_5, sizeof (nvpriv_t));
  return (VAR_1);
 }

 FUNC_4(*VAR_2, VAR_3, VAR_5);

 return (0);
}
