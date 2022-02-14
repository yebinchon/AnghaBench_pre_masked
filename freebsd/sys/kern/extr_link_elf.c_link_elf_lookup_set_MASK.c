
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
typedef TYPE_1__ linker_symval_t ;
typedef int linker_file_t ;
typedef int c_linker_sym_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 char* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(linker_file_t VAR_3, const char *VAR_4,
    void ***VAR_5, void ***VAR_6, int *VAR_7)
{
 c_linker_sym_t VAR_8;
 linker_symval_t VAR_9;
 char *VAR_10;
 void **VAR_11, **VAR_12;
 int VAR_13, VAR_14 = 0, VAR_15;

 VAR_13 = FUNC_5(VAR_4) + sizeof("__start_set_");
 VAR_10 = FUNC_3(VAR_13, VAR_1, VAR_2);


 FUNC_4(VAR_10, VAR_13, "%s%s", "__start_set_", VAR_4);
 VAR_14 = FUNC_1(VAR_3, VAR_10, &VAR_8);
 if (VAR_14 != 0)
  goto out;
 FUNC_2(VAR_3, VAR_8, &VAR_9);
 if (VAR_9.value == 0) {
  VAR_14 = VAR_0;
  goto out;
 }
 VAR_11 = (void **)VAR_9.value;


 FUNC_4(VAR_10, VAR_13, "%s%s", "__stop_set_", VAR_4);
 VAR_14 = FUNC_1(VAR_3, VAR_10, &VAR_8);
 if (VAR_14 != 0)
  goto out;
 FUNC_2(VAR_3, VAR_8, &VAR_9);
 if (VAR_9.value == 0) {
  VAR_14 = VAR_0;
  goto out;
 }
 VAR_12 = (void **)VAR_9.value;


 VAR_15 = VAR_12 - VAR_11;


 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_11;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_12;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_15;

out:
 FUNC_0(VAR_10, VAR_1);
 return (VAR_14);
}
