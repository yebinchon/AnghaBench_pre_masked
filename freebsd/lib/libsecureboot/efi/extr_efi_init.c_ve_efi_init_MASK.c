
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_data ;
typedef int br_x509_certificate ;


 int * FUNC_0 (size_t*) ;
 int * FUNC_1 (size_t*) ;
 int * FUNC_2 (size_t*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,size_t) ;
 size_t FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *) ;

void
FUNC_9(void)
{
 br_x509_certificate *VAR_0;
 hash_data *VAR_1;
 size_t VAR_2;
 int VAR_3;
 static int VAR_4 = 0;

 if (VAR_4 > 0)
  return;

 VAR_4 = 1;

 VAR_3 = FUNC_3();
 if (VAR_3 <= 0)
  return;

 VAR_0 = FUNC_2(&VAR_2);
 if (VAR_2 > 0 && VAR_0 != ((void*)0)) {
  VAR_2 = FUNC_7(VAR_0, VAR_2);
  FUNC_4(VAR_0, VAR_2);
 }
 VAR_0 = FUNC_0(&VAR_2);
 if (VAR_2 > 0 && VAR_0 != ((void*)0)) {
  VAR_2 = FUNC_5(VAR_0, VAR_2);
  FUNC_4(VAR_0, VAR_2);
 }
 VAR_1 = FUNC_1(&VAR_2);
 if (VAR_2 > 0 && VAR_1 != ((void*)0)) {
  FUNC_6(VAR_1, VAR_2);




  FUNC_8(VAR_1);
 }

 return;
}
