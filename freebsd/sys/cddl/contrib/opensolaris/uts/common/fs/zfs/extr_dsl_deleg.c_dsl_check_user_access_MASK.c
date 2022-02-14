
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int gid_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int ,int,int*,char const*) ;

__attribute__((used)) static int
FUNC_6(objset_t *VAR_4, uint64_t VAR_5, const char *VAR_6,
    int VAR_7, cred_t *VAR_8)
{
 const gid_t *VAR_9;
 int VAR_10;
 int VAR_11;
 uint64_t VAR_12;


 VAR_12 = FUNC_4(VAR_8);
 if (FUNC_5(VAR_4, VAR_5,
     VAR_3, VAR_7, &VAR_12, VAR_6) == 0)
  return (0);


 VAR_12 = FUNC_1(VAR_8);
 if (FUNC_5(VAR_4, VAR_5,
     VAR_2, VAR_7, &VAR_12, VAR_6) == 0)
  return (0);


 VAR_12 = -1;
 if (FUNC_5(VAR_4, VAR_5,
     VAR_1, VAR_7, &VAR_12, VAR_6) == 0)
  return (0);


 VAR_10 = FUNC_3(VAR_8);
 VAR_9 = FUNC_2(VAR_8);
 for (VAR_11 = 0; VAR_11 != VAR_10; VAR_11++) {
  VAR_12 = VAR_9[VAR_11];
  if (FUNC_5(VAR_4, VAR_5,
      VAR_2, VAR_7, &VAR_12, VAR_6) == 0)
   return (0);
 }

 return (FUNC_0(VAR_0));
}
