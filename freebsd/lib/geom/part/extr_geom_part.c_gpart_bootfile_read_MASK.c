
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (int,void*,scalar_t__) ;
 int FUNC_7 (char const*,struct stat*) ;

__attribute__((used)) static void *
FUNC_8(const char *VAR_2, ssize_t *VAR_3)
{
 struct stat VAR_4;
 void *VAR_5;
 int VAR_6;

 if (FUNC_7(VAR_2, &VAR_4) == -1)
  FUNC_2(VAR_0, "%s", VAR_2);
 if (!FUNC_0(VAR_4.st_mode))
  FUNC_3(VAR_0, "%s: not a regular file", VAR_2);
 if (VAR_4.st_size == 0)
  FUNC_3(VAR_0, "%s: empty file", VAR_2);
 if (*VAR_3 > 0 && VAR_4.st_size > *VAR_3)
  FUNC_3(VAR_0, "%s: file too big (%zu limit)", VAR_2,
      *VAR_3);

 *VAR_3 = VAR_4.st_size;

 VAR_6 = FUNC_5(VAR_2, VAR_1);
 if (VAR_6 == -1)
  FUNC_2(VAR_0, "%s", VAR_2);
 VAR_5 = FUNC_4(*VAR_3);
 if (VAR_5 == ((void*)0))
  FUNC_2(VAR_0, ((void*)0));
 if (FUNC_6(VAR_6, VAR_5, *VAR_3) != *VAR_3)
  FUNC_2(VAR_0, "%s", VAR_2);
 FUNC_1(VAR_6);

 return (VAR_5);
}
