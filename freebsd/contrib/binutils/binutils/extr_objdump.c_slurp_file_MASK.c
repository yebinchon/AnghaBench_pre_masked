
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 () ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_6 (char const*,int ) ;
 scalar_t__ FUNC_7 (int,char*,size_t) ;

__attribute__((used)) static const char *
FUNC_8 (const char *VAR_3, size_t *VAR_4)
{




  const char *VAR_5;
  struct stat VAR_6;
  int VAR_7 = FUNC_6 (VAR_3, VAR_1);

  if (VAR_7 < 0)
    return ((void*)0);
  if (FUNC_2 (VAR_7, &VAR_6) < 0)
    return ((void*)0);
  *VAR_4 = VAR_6.st_size;
  VAR_5 = FUNC_4 (*VAR_4);
  if (!VAR_5 || (size_t) FUNC_7 (VAR_7, (char *)VAR_5, *VAR_4) != *VAR_4)
    {
      FUNC_1 ((void *)VAR_5);
      VAR_5 = ((void*)0);
    }
  FUNC_0 (VAR_7);
  return VAR_5;
}
