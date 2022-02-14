
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (char*,char*,char*,size_t,int ,int,int) ;
 scalar_t__ FUNC_3 (int *,char*,int **,int) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int ** FUNC_8 (int,int ) ;
 int FUNC_9 (int **,int) ;

__attribute__((used)) static nvlist_t *
FUNC_10(char *VAR_6, char *VAR_7, char *VAR_8, size_t VAR_9, uint64_t VAR_10,
    int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 nvlist_t *VAR_15, **VAR_16;
 int VAR_17;

 FUNC_0(VAR_14 > 0);

 VAR_16 = FUNC_8(VAR_14 * sizeof (nvlist_t *), VAR_1);

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  VAR_16[VAR_17] = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_12, VAR_13);
  FUNC_1(FUNC_5(VAR_16[VAR_17], VAR_4,
      VAR_11) == 0);
 }

 FUNC_1(FUNC_6(&VAR_15, VAR_0, 0) == 0);
 FUNC_1(FUNC_4(VAR_15, VAR_5, VAR_2) == 0);
 FUNC_1(FUNC_3(VAR_15, VAR_7 ? VAR_7 : VAR_3,
     VAR_16, VAR_14) == 0);

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
  FUNC_7(VAR_16[VAR_17]);

 FUNC_9(VAR_16, VAR_14 * sizeof (nvlist_t *));

 return (VAR_15);
}
