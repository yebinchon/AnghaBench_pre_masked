
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int address ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*) ;
 scalar_t__ FUNC_1 (char**,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,size_t,struct sockaddr*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct sockaddr_storage VAR_4;
 struct sockaddr *VAR_5 = (struct sockaddr *)&VAR_4;
 size_t VAR_6 = sizeof(VAR_4);
 char *VAR_7;


 if (VAR_3 == 0)
  return -VAR_0;

 if (VAR_2[VAR_3-1] != '\n')
  return -VAR_0;

 VAR_7 = VAR_2;
 if (FUNC_1(&VAR_2, VAR_7, VAR_3) < 0)
  return -VAR_0;

 if (FUNC_2(VAR_7, VAR_3, VAR_5, VAR_6) == 0)
  return -VAR_0;

 return FUNC_0(VAR_5);
}
