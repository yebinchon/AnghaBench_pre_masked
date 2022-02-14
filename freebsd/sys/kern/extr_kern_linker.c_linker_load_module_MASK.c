
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_depend {int dummy; } ;
struct linker_file {int dummy; } ;
typedef struct linker_file* linker_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (struct linker_file*,struct linker_file*) ;
 int FUNC_4 (struct linker_file*,int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,struct linker_file**) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,int ,struct mod_depend const*) ;
 int * FUNC_9 (char const*,struct mod_depend const*) ;
 int * VAR_6 ;
 char* FUNC_10 (char const*,int ) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_7, const char *VAR_8,
    struct linker_file *VAR_9, const struct mod_depend *VAR_10,
    struct linker_file **VAR_11)
{
 linker_file_t VAR_12;
 const char *VAR_13;
 char *VAR_14;
 int VAR_15;

 FUNC_12(&VAR_5, VAR_4);
 if (VAR_8 == ((void*)0)) {



  FUNC_0(VAR_10 == ((void*)0), ("linker_load_module: verinfo"
      " is not NULL"));
  VAR_14 = FUNC_7(VAR_7);
 } else {
  if (FUNC_9(VAR_8, VAR_10) != ((void*)0))
   return (VAR_0);
  if (VAR_7 != ((void*)0))
   VAR_14 = FUNC_10(VAR_7, VAR_3);
  else if (VAR_6 == ((void*)0))
   VAR_14 = ((void*)0);
  else



   VAR_14 = FUNC_8(VAR_8,
       FUNC_11(VAR_8), VAR_10);
 }
 if (VAR_14 == ((void*)0))
  return (VAR_1);







 VAR_13 = FUNC_2(VAR_14);
 if (FUNC_5(VAR_13))
  VAR_15 = VAR_0;
 else do {
  VAR_15 = FUNC_6(VAR_14, &VAR_12);
  if (VAR_15)
   break;
  if (VAR_8 && VAR_10 &&
      FUNC_9(VAR_8, VAR_10) == ((void*)0)) {
   FUNC_4(VAR_12, VAR_2);
   VAR_15 = VAR_1;
   break;
  }
  if (VAR_9) {
   VAR_15 = FUNC_3(VAR_9, VAR_12);
   if (VAR_15)
    break;
  }
  if (VAR_11)
   *VAR_11 = VAR_12;
 } while (0);
 FUNC_1(VAR_14, VAR_3);
 return (VAR_15);
}
