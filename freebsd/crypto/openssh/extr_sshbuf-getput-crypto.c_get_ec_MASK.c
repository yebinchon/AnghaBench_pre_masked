
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int EC_POINT ;
typedef int EC_GROUP ;


 int FUNC_0 (int const*,int *,scalar_t__ const*,size_t,int *) ;
 scalar_t__ const VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(const u_char *VAR_4, size_t VAR_5, EC_POINT *VAR_6, const EC_GROUP *VAR_7)
{

 if (VAR_5 == 0 || VAR_5 > VAR_1)
  return VAR_2;

 if (*VAR_4 != VAR_0)
  return VAR_3;
 if (VAR_6 != ((void*)0) && FUNC_0(VAR_7, VAR_6, VAR_4, VAR_5, ((void*)0)) != 1)
  return VAR_3;
 return 0;
}
