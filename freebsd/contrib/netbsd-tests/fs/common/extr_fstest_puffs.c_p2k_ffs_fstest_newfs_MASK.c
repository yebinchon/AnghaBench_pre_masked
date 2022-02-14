
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int const*,void**,char const*,int ,void*,char**) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int const*,void**) ;
 int FUNC_3 (int const*,void**,char const*,int ,void*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int) ;

int
FUNC_7(const atf_tc_t *VAR_2, void **VAR_3,
 const char *VAR_4, off_t VAR_5, void *VAR_6)
{
 char *VAR_7[5];
 int VAR_8;

 FUNC_5();
 if ((VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) != 0)
  return VAR_8;
 if (FUNC_4("p2kffsfake", 0777) == -1 && VAR_1 != VAR_0)
  return VAR_1;

 FUNC_6("P2K_NODETACH", "1", 1);
 VAR_7[0] = FUNC_0("rump_ffs");
 VAR_7[1] = FUNC_0(VAR_4);
 VAR_7[2] = FUNC_0("p2kffsfake");
 VAR_7[3] = ((void*)0);

 if ((VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) != 0)
  FUNC_2(VAR_2, VAR_3);
 return VAR_8;
}
