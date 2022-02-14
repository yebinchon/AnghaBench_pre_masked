
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int parentname ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (int *,scalar_t__,int,int,int *,int *,int*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_5, nvlist_t *VAR_6,
    nvlist_t *VAR_7, boolean_t *VAR_8)
{
 boolean_t VAR_9, VAR_10;
 uint64_t VAR_11 = VAR_2;
 objset_t *VAR_12 = ((void*)0);
 char VAR_13[VAR_1];
 char *VAR_14;
 spa_t *VAR_15;
 uint64_t VAR_16;
 int VAR_17;

 (void) FUNC_6(VAR_13, VAR_5, sizeof (VAR_13));
 VAR_14 = FUNC_7(VAR_13, '/');
 FUNC_0(VAR_14 != ((void*)0));
 VAR_14[0] = '\0';

 if ((VAR_17 = FUNC_4(VAR_5, &VAR_15, VAR_0)) != 0)
  return (VAR_17);

 VAR_16 = FUNC_5(VAR_15);
 FUNC_3(VAR_15, VAR_0);

 VAR_11 = FUNC_9(VAR_16);
 VAR_9 = (VAR_11 >= VAR_3);
 VAR_10 = (VAR_11 >= VAR_4);




 if ((VAR_17 = FUNC_1(VAR_13, VAR_0, &VAR_12)) != 0)
  return (VAR_17);

 VAR_17 = FUNC_8(VAR_12, VAR_11, VAR_9, VAR_10, VAR_6,
     VAR_7, VAR_8);
 FUNC_2(VAR_12, VAR_0);
 return (VAR_17);
}
