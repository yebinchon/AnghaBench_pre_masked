
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int uint64_t ;
typedef int name ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static uint64_t
FUNC_5(libzfs_handle_t *VAR_3, const char *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_0];
 uint64_t VAR_7 = 0;

 if (VAR_4 == ((void*)0) || VAR_4[0] == '\0' || VAR_5 == ((void*)0) || VAR_5[0] == '\0')
  return (VAR_7);

 (void) FUNC_0(VAR_6, sizeof (VAR_6), "%s@%s", VAR_4, VAR_5);
 if (FUNC_2(VAR_3, VAR_6, VAR_2)) {
  zfs_handle_t *VAR_8 = FUNC_3(VAR_3, VAR_6, VAR_2);
  if (VAR_8 != ((void*)0)) {
   VAR_7 = FUNC_4(VAR_8, VAR_1);
   FUNC_1(VAR_8);
  }
 }

 return (VAR_7);
}
