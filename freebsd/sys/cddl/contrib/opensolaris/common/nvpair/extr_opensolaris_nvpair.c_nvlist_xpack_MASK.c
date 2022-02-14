
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpriv_t ;
typedef int nvlist_t ;
typedef int nv_alloc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,size_t) ;
 char* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,char*,size_t*,int,int ) ;
 int FUNC_4 (int *,size_t*,int) ;

int
FUNC_5(nvlist_t *VAR_3, char **VAR_4, size_t *VAR_5, int VAR_6,
    nv_alloc_t *VAR_7)
{
 nvpriv_t VAR_8;
 size_t VAR_9;
 char *VAR_10;
 int VAR_11;

 if (VAR_7 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_0);

 if (*VAR_4 != ((void*)0))
  return (FUNC_3(VAR_3, *VAR_4, VAR_5, VAR_6,
      VAR_2));
 FUNC_2(&VAR_8, VAR_7, 0);

 if ((VAR_11 = FUNC_4(VAR_3, &VAR_9, VAR_6)))
  return (VAR_11);

 if ((VAR_10 = FUNC_1(&VAR_8, VAR_9)) == ((void*)0))
  return (VAR_1);

 if ((VAR_11 = FUNC_3(VAR_3, VAR_10, &VAR_9, VAR_6,
     VAR_2)) != 0) {
  FUNC_0(&VAR_8, VAR_10, VAR_9);
 } else {
  *VAR_5 = VAR_9;
  *VAR_4 = VAR_10;
 }

 return (VAR_11);
}
