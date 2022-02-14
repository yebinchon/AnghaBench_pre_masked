
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,char*,size_t,int) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,size_t,int **,int ) ;

__attribute__((used)) static int
FUNC_4(uint64_t VAR_2, size_t VAR_3, int VAR_4,
    nvlist_t **VAR_5)
{
 char *VAR_6;
 int VAR_7;
 nvlist_t *VAR_8 = ((void*)0);




 if (VAR_3 == 0)
  return (VAR_0);
 VAR_6 = (void *)(uintptr_t)VAR_2;


 VAR_7 = FUNC_3(VAR_6, VAR_3, &VAR_8, 0);





 if (VAR_7 != 0)
  return (VAR_7);

 *VAR_5 = VAR_8;
 return (0);
}
