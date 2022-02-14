
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const**,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int *) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_0, char *VAR_1)
{
  const char *VAR_2;
  bfd_vma VAR_3 = FUNC_1 (VAR_1, &VAR_2, 16);
  if (*VAR_2)
    FUNC_2 (FUNC_0("%P%F: invalid hex number `%s'\n"), VAR_1);
  FUNC_4 (VAR_0, FUNC_3 (VAR_3), ((void*)0));
}
