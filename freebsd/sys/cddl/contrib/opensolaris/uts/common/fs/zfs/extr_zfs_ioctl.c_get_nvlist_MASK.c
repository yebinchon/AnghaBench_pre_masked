
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,char*,scalar_t__,int) ;
 char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int **,int ) ;

__attribute__((used)) static int
FUNC_5(uint64_t VAR_3, uint64_t VAR_4, int VAR_5, nvlist_t **VAR_6)
{
 char *VAR_7;
 int VAR_8;
 nvlist_t *VAR_9 = ((void*)0);




 if (VAR_4 == 0)
  return (FUNC_0(VAR_1));

 VAR_7 = FUNC_2(VAR_4, VAR_2);

 if ((VAR_8 = FUNC_1((void *)(uintptr_t)VAR_3, VAR_7, VAR_4,
     VAR_5)) != 0) {
  FUNC_3(VAR_7, VAR_4);
  return (FUNC_0(VAR_0));
 }

 if ((VAR_8 = FUNC_4(VAR_7, VAR_4, &VAR_9, 0)) != 0) {
  FUNC_3(VAR_7, VAR_4);
  return (VAR_8);
 }

 FUNC_3(VAR_7, VAR_4);

 *VAR_6 = VAR_9;
 return (0);
}
