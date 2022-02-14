
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlname ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int const*,char*,int *) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (int const*,char*) ;
 scalar_t__ FUNC_5 (int const*,char*) ;
 char* FUNC_6 (int const*,char*) ;
 int FUNC_7 (char*,int,char*,unsigned int) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9(const nvlist_t *VAR_3, char ***VAR_4, char **VAR_5,
    size_t *VAR_6)
{
 const char *VAR_7;
 char **VAR_8, *VAR_9, VAR_10[64];
 size_t VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 if (!FUNC_4(VAR_3, "gr_nmem")) {
  VAR_12 = VAR_2 + sizeof(char *);
  if (VAR_12 >= *VAR_6)
   return (VAR_1);
  VAR_8 = (char **)FUNC_0(*VAR_5);
  VAR_8[0] = ((void*)0);
  *VAR_4 = VAR_8;
  *VAR_5 += VAR_12;
  *VAR_6 -= VAR_12;
  return (0);
 }

 VAR_11 = (size_t)FUNC_5(VAR_3, "gr_nmem");
 VAR_12 = VAR_2 + sizeof(char *) * (VAR_11 + 1);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  VAR_15 = FUNC_7(VAR_10, sizeof(VAR_10), "gr_mem[%u]", VAR_14);
  FUNC_1(VAR_15 > 0 && VAR_15 < (int)sizeof(VAR_10));
  VAR_7 = FUNC_2(VAR_3, VAR_10, ((void*)0));
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  VAR_12 += FUNC_8(VAR_7) + 1;
 }

 if (VAR_12 >= *VAR_6)
  return (VAR_1);

 VAR_8 = (char **)FUNC_0(*VAR_5);
 VAR_9 = (char *)VAR_8 + sizeof(char *) * (VAR_11 + 1);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  VAR_15 = FUNC_7(VAR_10, sizeof(VAR_10), "gr_mem[%u]", VAR_14);
  FUNC_1(VAR_15 > 0 && VAR_15 < (int)sizeof(VAR_10));
  VAR_7 = FUNC_6(VAR_3, VAR_10);
  VAR_13 = FUNC_8(VAR_7) + 1;
  FUNC_3(VAR_9, VAR_7, VAR_13);
  VAR_8[VAR_14] = VAR_9;
  VAR_9 += VAR_13;
 }
 FUNC_1(VAR_14 == VAR_11);
 VAR_8[VAR_14] = ((void*)0);

 *VAR_4 = VAR_8;
 *VAR_5 += VAR_12;
 *VAR_6 -= VAR_12;

 return (0);
}
