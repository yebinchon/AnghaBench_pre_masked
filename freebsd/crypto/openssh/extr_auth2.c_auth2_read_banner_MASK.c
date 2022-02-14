
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_2__ {int banner; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int,char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (size_t) ;

char *
FUNC_6(void)
{
 struct stat VAR_3;
 char *VAR_4 = ((void*)0);
 size_t VAR_5, VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_4(VAR_1.banner, VAR_0)) == -1)
  return (((void*)0));
 if (FUNC_3(VAR_7, &VAR_3) == -1) {
  FUNC_1(VAR_7);
  return (((void*)0));
 }
 if (VAR_3.st_size <= 0 || VAR_3.st_size > 1*1024*1024) {
  FUNC_1(VAR_7);
  return (((void*)0));
 }

 VAR_5 = (size_t)VAR_3.st_size;
 VAR_4 = FUNC_5(VAR_5 + 1);
 VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_4, VAR_5);
 FUNC_1(VAR_7);

 if (VAR_6 != VAR_5) {
  FUNC_2(VAR_4);
  return (((void*)0));
 }
 VAR_4[VAR_6] = '\0';

 return (VAR_4);
}
