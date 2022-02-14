
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int uint64_t ;
typedef int pname ;
typedef int libzfs_handle_t ;
struct TYPE_7__ {char* name; int * skip; scalar_t__ bookmark_ok; int guid; } ;
typedef TYPE_1__ guid_to_name_data_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int * FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 void* FUNC_4 (char*,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int (*) (int ,TYPE_1__*),TYPE_1__*) ;
 int FUNC_8 (int *,int (*) (int ,TYPE_1__*),TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(libzfs_handle_t *VAR_3, const char *VAR_4, uint64_t VAR_5,
    boolean_t VAR_6, char *VAR_7)
{
 char VAR_8[VAR_2];
 guid_to_name_data_t VAR_9;

 VAR_9.guid = VAR_5;
 VAR_9.bookmark_ok = VAR_6;
 VAR_9.name = VAR_7;
 VAR_9.skip = ((void*)0);







 (void) FUNC_3(VAR_8, VAR_4, sizeof (VAR_8));
 char *VAR_10 = FUNC_4(VAR_8, '@');
 if (VAR_10 == ((void*)0))
  VAR_10 = FUNC_2(VAR_8, '\0');
 for (; VAR_10 != ((void*)0); VAR_10 = FUNC_4(VAR_8, '/')) {

  *VAR_10 = '\0';
  zfs_handle_t *VAR_11 = FUNC_1(VAR_3, VAR_8);

  if (VAR_11 == ((void*)0))
   continue;
  int VAR_12 = FUNC_0(FUNC_6(VAR_11), &VAR_9);
  if (VAR_12 != VAR_0)
   VAR_12 = FUNC_8(VAR_11, FUNC_0, &VAR_9);
  if (VAR_12 != VAR_0 && VAR_6)
   VAR_12 = FUNC_7(VAR_11, FUNC_0, &VAR_9);
  FUNC_5(VAR_11);
  if (VAR_12 == VAR_0)
   return (0);






  VAR_9.skip = FUNC_4(VAR_8, '/') + 1;
 }

 return (VAR_1);
}
