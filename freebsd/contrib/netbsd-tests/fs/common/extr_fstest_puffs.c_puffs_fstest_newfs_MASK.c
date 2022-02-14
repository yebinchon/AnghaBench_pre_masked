
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int atf_tc_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int const*,char*) ;
 int FUNC_2 (int const*,void**,char const*,int ,void*,char**) ;
 int FUNC_3 (char*,char*,char*) ;

int
FUNC_4(const atf_tc_t *VAR_1, void **VAR_2,
 const char *VAR_3, off_t VAR_4, void *VAR_5)
{
 char VAR_6[VAR_0];
 char *VAR_7[6];
 char **VAR_8;


 FUNC_3(VAR_6, "%s/../puffs/h_dtfs/h_dtfs",
     FUNC_1(VAR_1, "srcdir"));

 if (VAR_5) {
  VAR_8 = VAR_5;
  VAR_8[0] = VAR_6;
 } else {
  VAR_7[0] = VAR_6;
  VAR_7[1] = FUNC_0("-i");
  VAR_7[2] = FUNC_0("-s");
  VAR_7[3] = FUNC_0("dtfs");
  VAR_7[4] = FUNC_0("fictional");
  VAR_7[5] = ((void*)0);

  VAR_8 = VAR_7;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
}
