
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (unsigned char*,int,size_t,int *) ;
 int FUNC_4 (char*) ;

int FUNC_5(unsigned char *VAR_0, size_t VAR_1)
{







 FILE *VAR_2;
 size_t VAR_3;

 if (FUNC_0())
  return -1;

 VAR_2 = FUNC_2("/dev/urandom", "rb");
 if (VAR_2 == ((void*)0)) {
  FUNC_4("Could not open /dev/urandom.\n");
  return -1;
 }

 VAR_3 = FUNC_3(VAR_0, 1, VAR_1, VAR_2);
 FUNC_1(VAR_2);

 return VAR_3 != VAR_1 ? -1 : 0;

}
