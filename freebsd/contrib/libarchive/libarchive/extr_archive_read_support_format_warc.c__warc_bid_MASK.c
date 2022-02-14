
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct archive_read*,unsigned int,int*) ;
 unsigned int FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_0, int VAR_1)
{
 const char *VAR_2;
 ssize_t VAR_3;
 unsigned int VAR_4;

 (void)VAR_1;


 if ((VAR_2 = FUNC_0(VAR_0, 12U, &VAR_3)) == ((void*)0)) {

  return -1;
 } else if (VAR_3 < 12) {

  return -1;
 }


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 1200U || VAR_4 > 10000U) {

  return -1;
 }


 return (64);
}
