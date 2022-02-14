
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int cred_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_3 (char const*,char*,int *,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char**) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,int ,int *) ;
 int FUNC_9 (char const*,char*,int ) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4, zfs_prop_t VAR_5, nvpair_t *VAR_6,
    cred_t *VAR_7)
{
 char *VAR_8;




 switch (VAR_5) {
 case 128:



  if (!FUNC_1(VAR_3))
   return (FUNC_2(VAR_1));
  break;

 case 130:
 case 132:
 case 129:
  if (!FUNC_1(VAR_3)) {
   uint64_t VAR_9;
   char VAR_10[VAR_2];





   if (FUNC_3(VAR_4, "jailed", &VAR_9,
       VAR_10))
    return (FUNC_2(VAR_1));
   if (!VAR_9 || FUNC_6(VAR_4) <= FUNC_6(VAR_10))
    return (FUNC_2(VAR_1));
  }
  break;

 case 131:
  return (VAR_0);

  break;
 }

 return (FUNC_8(VAR_4, FUNC_7(VAR_5), VAR_7));
}
