
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (char*,char*,char*,size_t,int ,int) ;
 scalar_t__ FUNC_2 (int *,int ,int **,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int ** FUNC_6 (int,int ) ;
 int FUNC_7 (int **,int) ;

__attribute__((used)) static nvlist_t *
FUNC_8(char *VAR_5, char *VAR_6, char *VAR_7, size_t VAR_8,
    uint64_t VAR_9, int VAR_10, int VAR_11)
{
 nvlist_t *VAR_12, **VAR_13;
 int VAR_14;

 if (VAR_11 < 1)
  return (FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10));

 VAR_13 = FUNC_6(VAR_11 * sizeof (nvlist_t *), VAR_1);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  VAR_13[VAR_14] = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 FUNC_0(FUNC_4(&VAR_12, VAR_0, 0) == 0);
 FUNC_0(FUNC_3(VAR_12, VAR_4,
     VAR_2) == 0);
 FUNC_0(FUNC_2(VAR_12, VAR_3,
     VAR_13, VAR_11) == 0);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  FUNC_5(VAR_13[VAR_14]);

 FUNC_7(VAR_13, VAR_11 * sizeof (nvlist_t *));

 return (VAR_12);
}
