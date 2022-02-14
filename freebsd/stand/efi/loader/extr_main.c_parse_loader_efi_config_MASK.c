
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int pdinfo_t ;
typedef int EFI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,struct stat*) ;

void
FUNC_9(EFI_HANDLE VAR_1, const char *VAR_2)
{
 pdinfo_t *VAR_3;
 struct stat VAR_4;
 int VAR_5 = -1;
 char *VAR_6 = ((void*)0);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0))
  return;
 FUNC_7(VAR_3);
 if (FUNC_8(VAR_2, &VAR_4) != 0)
  return;
 VAR_5 = FUNC_5(VAR_2, VAR_0);
 if (VAR_5 == -1)
  return;
 VAR_6 = FUNC_4(VAR_4.st_size + 1);
 if (VAR_6 == ((void*)0))
  goto out;
 if (FUNC_6(VAR_5, VAR_6, VAR_4.st_size) != VAR_4.st_size)
  goto out;
 VAR_6[VAR_4.st_size] = '\0';
 FUNC_0(VAR_6);
out:
 FUNC_3(VAR_6);
 FUNC_1(VAR_5);
}
