
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,char**) ;
 size_t FUNC_1 (char*,size_t,char const*,char*) ;

__attribute__((used)) static int
FUNC_2(nvlist_t *VAR_3, char *VAR_4, size_t VAR_5,
    size_t *VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 const char *VAR_11;

 if (FUNC_0(VAR_3, VAR_2,
     &VAR_10) != 0)
  return (VAR_0);

 VAR_8 = *VAR_6;
 VAR_7 = VAR_5 - VAR_8;
 VAR_11 = (VAR_8 == 0) ? "%s" : " %s";

 VAR_9 = FUNC_1(VAR_4 + VAR_8, VAR_7, VAR_11, VAR_10);
 *VAR_6 += VAR_9;

 if (VAR_9 >= VAR_7) {

  if (VAR_7 != 0) {
   VAR_4[VAR_8] = 0;
  }
  return (VAR_1);
 }
 return (0);
}
