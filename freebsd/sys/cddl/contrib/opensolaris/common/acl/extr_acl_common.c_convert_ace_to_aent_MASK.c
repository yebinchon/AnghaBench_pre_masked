
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;
typedef int boolean_t ;
typedef int aclent_t ;
typedef int ace_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int ,int ,int **,int*,int **,int*,int ) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_4(ace_t *VAR_1, int VAR_2, boolean_t VAR_3,
    uid_t VAR_4, gid_t VAR_5, aclent_t **VAR_6, int *VAR_7)
{
 int VAR_8 = 0;
 aclent_t *VAR_9, *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5,
     &VAR_9, &VAR_11, &VAR_10, &VAR_12, VAR_3);

 if (VAR_8)
  return (VAR_8);


 if (VAR_12 != 0) {



  VAR_13 = sizeof (aclent_t) * VAR_11;
  VAR_14 = sizeof (aclent_t) * VAR_12;
  VAR_9 = FUNC_1(VAR_9, VAR_13, VAR_13 + VAR_14);
  if (VAR_9 != ((void*)0)) {
   (void) FUNC_3(VAR_9 + VAR_11, VAR_10, VAR_14);
  } else {
   VAR_8 = VAR_0;
  }
 }

 if (VAR_9) {
  *VAR_6 = VAR_9;
  *VAR_7 = VAR_11 + VAR_12;
 }

 if (VAR_10)
  FUNC_0(VAR_10, VAR_14);

 return (VAR_8);
}
