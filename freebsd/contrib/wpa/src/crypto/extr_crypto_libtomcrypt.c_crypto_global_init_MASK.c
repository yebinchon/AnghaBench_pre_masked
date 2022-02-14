
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(void)
{
 VAR_4 = VAR_8;

 if (FUNC_1(&VAR_5) < 0 ||
     FUNC_1(&VAR_6) < 0 ||
     FUNC_1(&VAR_7) < 0 ||
     FUNC_0(&VAR_1) < 0 ||
     FUNC_0(&VAR_3) < 0 ||
     FUNC_0(&VAR_2) < 0) {
  FUNC_2(VAR_0, "TLSv1: Failed to register "
      "hash/cipher functions");
  return -1;
 }

 return 0;
}
