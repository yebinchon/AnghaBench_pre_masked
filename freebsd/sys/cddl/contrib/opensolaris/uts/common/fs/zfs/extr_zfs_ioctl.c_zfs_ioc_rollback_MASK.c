
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_vfs; int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int nvlist_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (char const*,TYPE_1__**) ;
 int FUNC_5 (int *,char*,char**) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*,int *,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_1, nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 zfsvfs_t *VAR_4;
 char *VAR_5 = ((void*)0);
 int VAR_6;

 (void) FUNC_5(VAR_2, "target", &VAR_5);
 if (VAR_5 != ((void*)0)) {
  const char *VAR_7 = FUNC_6(VAR_5, '@');





  if (VAR_7 == ((void*)0) ||
      FUNC_8(VAR_7 + 1, ((void*)0), ((void*)0)) != 0)
   return (FUNC_0(VAR_0));
 }

 if (FUNC_4(VAR_1, &VAR_4) == 0) {
  dsl_dataset_t *VAR_8;

  VAR_8 = FUNC_2(VAR_4->z_os);
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6 == 0) {
   int VAR_9;

   VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_4,
       VAR_3);
   VAR_9 = FUNC_9(VAR_4, VAR_8);
   VAR_6 = VAR_6 ? VAR_6 : VAR_9;
  }



  FUNC_7(VAR_4->z_vfs);

 } else {
  VAR_6 = FUNC_3(VAR_1, VAR_5, ((void*)0), VAR_3);
 }
 return (VAR_6);
}
