
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char**,size_t*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,size_t*,int ) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int *,size_t) ;

__attribute__((used)) static int
FUNC_4(libzfs_handle_t *VAR_1, uint64_t *VAR_2, uint64_t *VAR_3,
    nvlist_t *VAR_4)
{
 char *VAR_5;
 size_t VAR_6;

 FUNC_2(FUNC_1(VAR_4, &VAR_6, VAR_0) == 0);

 if ((VAR_5 = FUNC_3(VAR_1, VAR_6)) == ((void*)0))
  return (-1);

 FUNC_2(FUNC_0(VAR_4, &VAR_5, &VAR_6, VAR_0, 0) == 0);

 *VAR_2 = (uint64_t)(uintptr_t)VAR_5;
 *VAR_3 = VAR_6;

 return (0);
}
