
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_7)
{
 char VAR_8[1024];
 char *VAR_9, *VAR_10, *VAR_11;
 ssize_t VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_7, VAR_8, sizeof(VAR_8));
 if (VAR_12 == -1)
  return (VAR_2);
 if (VAR_12 == sizeof(VAR_8))
  return (VAR_1);

 VAR_8[VAR_12] = '\0';
 VAR_13 = 0;
 VAR_10 = VAR_8;
 while (!VAR_13 && *VAR_10 != '\0') {
  VAR_11 = FUNC_3(VAR_10, '=');
  if (VAR_11 == ((void*)0)) {
   VAR_13 = VAR_0;
   break;
  }
  *VAR_11++ = '\0';
  VAR_9 = FUNC_3(VAR_11, '\n');
  if (VAR_9 == ((void*)0)) {
   VAR_13 = VAR_0;
   break;
  }
  *VAR_9++ = '\0';

  if (FUNC_4(VAR_10, "KERNEL") == 0)
   VAR_13 = FUNC_2(&VAR_3, VAR_11);
  else if (FUNC_4(VAR_10, "MODULES") == 0)
   VAR_13 = FUNC_1(&VAR_5, VAR_11);
  else if (FUNC_4(VAR_10, "ROOTFS") == 0)
   VAR_13 = FUNC_2(&VAR_6, VAR_11);
  else if (FUNC_4(VAR_10, "LOADER_RC") == 0)
   VAR_13 = FUNC_2(&VAR_4, VAR_11);

  VAR_10 = VAR_9;
 }

 return (VAR_13);
}
