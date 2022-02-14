
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int ) ;

int
FUNC_7(const atf_tc_t *VAR_6, void **VAR_7, const char *VAR_8,
 off_t VAR_9, void *VAR_10)
{
 int VAR_11;
 int VAR_12;


 VAR_9 = FUNC_0(64*1024*1024, VAR_9);

 VAR_11 = FUNC_4();
 if (VAR_11 != 0) {
  VAR_5 = VAR_11;
  return -1;
 }


 if ((VAR_12 = FUNC_3(VAR_8, VAR_1 | VAR_0, 0777)) == -1)
  return -1;
 if (FUNC_2(VAR_12, VAR_9) == -1) {
  FUNC_1(VAR_12);
  return -1;
 }
 FUNC_1(VAR_12);

 VAR_11 = FUNC_6(VAR_4, VAR_8, VAR_2);
 if (VAR_11 != 0) {
  VAR_5 = VAR_11;
  return -1;
 }

 VAR_11 = FUNC_5(VAR_3);
 if (VAR_11 != 0) {
  VAR_5 = VAR_11;
  return -1;
 }
 *VAR_7 = ((void*)0);

 return 0;
}
