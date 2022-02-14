
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_5(libzfs_handle_t *VAR_3, const char *VAR_4, int VAR_5)
{
 if (FUNC_2(VAR_4, VAR_5) != 0) {
  FUNC_3(VAR_3, FUNC_1(VAR_2));
  return (FUNC_4(VAR_3, VAR_0,
      FUNC_0(VAR_1, "cannot unmount '%s'"),
      VAR_4));
 }

 return (0);
}
