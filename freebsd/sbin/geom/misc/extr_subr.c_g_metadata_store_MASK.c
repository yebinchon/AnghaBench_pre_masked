
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int) ;
 unsigned char* FUNC_9 (int) ;
 int FUNC_10 (int,unsigned char*,int,int) ;

int
FUNC_11(const char *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 ssize_t VAR_6;
 off_t VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = ((void*)0);
 VAR_8 = 0;

 VAR_9 = FUNC_7(VAR_2, 1);
 if (VAR_9 == -1)
  return (VAR_1);
 VAR_7 = FUNC_6(VAR_9);
 if (VAR_7 == -1) {
  VAR_8 = VAR_1;
  goto out;
 }
 VAR_6 = FUNC_8(VAR_9);
 if (VAR_6 == -1) {
  VAR_8 = VAR_1;
  goto out;
 }
 FUNC_0(VAR_6 >= (ssize_t)VAR_4);
 VAR_5 = FUNC_9(VAR_6);
 if (VAR_5 == ((void*)0)) {
  VAR_8 = VAR_0;
  goto out;
 }
 FUNC_1(VAR_3, VAR_5, VAR_4);
 FUNC_2(VAR_5 + VAR_4, VAR_6 - VAR_4);
 if (FUNC_10(VAR_9, VAR_5, VAR_6, VAR_7 - VAR_6) !=
     VAR_6) {
  VAR_8 = VAR_1;
  goto out;
 }
 (void)FUNC_5(VAR_9);
out:
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5);
 (void)FUNC_4(VAR_9);
 return (VAR_8);
}
