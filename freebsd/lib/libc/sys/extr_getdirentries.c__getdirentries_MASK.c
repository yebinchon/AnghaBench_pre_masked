
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,size_t) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,size_t,int *) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ,int,char*,size_t,int *) ;

ssize_t
FUNC_7(int VAR_5, char *VAR_6, size_t VAR_7, off_t *VAR_8)
{
 char *VAR_9;
 size_t VAR_10;
 ssize_t VAR_11;

 if (FUNC_1() >= VAR_2)
  return (FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8));
 VAR_10 = FUNC_5(VAR_7 / 4, VAR_0);
 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9 == ((void*)0)) {
  VAR_4 = VAR_1;
  return (-1);
 }
 VAR_11 = FUNC_6(VAR_3, VAR_5, VAR_9, VAR_10, VAR_8);
 if (VAR_11 == -1) {
  FUNC_3(VAR_9);
  return (VAR_11);
 }
 if (VAR_11 > 0)
  VAR_11 = FUNC_0(VAR_9, VAR_11, VAR_6, VAR_7);
 FUNC_3(VAR_9);

 return (VAR_11);
}
