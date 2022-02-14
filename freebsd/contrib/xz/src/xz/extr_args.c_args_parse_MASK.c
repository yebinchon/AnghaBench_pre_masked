
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char files_delim; char** arg_names; int arg_count; int * files_name; int * files_file; } ;
typedef TYPE_1__ args_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,int,char**) ;
 char* FUNC_5 (char*,char) ;
 int * FUNC_6 (char const*,char*) ;

extern void
FUNC_7(args_info *VAR_12, int VAR_13, char **VAR_14)
{

 VAR_12->files_name = ((void*)0);
 VAR_12->files_file = ((void*)0);
 VAR_12->files_delim = '\0';


 {

  const char *VAR_15 = FUNC_5(VAR_14[0], '/');
  if (VAR_15 == ((void*)0))
   VAR_15 = VAR_14[0];
  else
   ++VAR_15;







  if (FUNC_6(VAR_15, "xzcat") != ((void*)0)) {
   VAR_9 = VAR_5;
   VAR_10 = 1;
  } else if (FUNC_6(VAR_15, "unxz") != ((void*)0)) {
   VAR_9 = VAR_5;
  } else if (FUNC_6(VAR_15, "lzcat") != ((void*)0)) {
   VAR_7 = VAR_1;
   VAR_9 = VAR_5;
   VAR_10 = 1;
  } else if (FUNC_6(VAR_15, "unlzma") != ((void*)0)) {
   VAR_7 = VAR_1;
   VAR_9 = VAR_5;
  } else if (FUNC_6(VAR_15, "lzma") != ((void*)0)) {
   VAR_7 = VAR_1;
  }
 }


 FUNC_3(VAR_12, VAR_14[0], "XZ_DEFAULTS");
 FUNC_3(VAR_12, VAR_14[0], "XZ_OPT");


 FUNC_4(VAR_12, VAR_13, VAR_14);





 if (VAR_9 == VAR_4)
  FUNC_2(FUNC_0("Compression support was disabled "
    "at build time"));




 if (VAR_9 != VAR_4)
  FUNC_2(FUNC_0("Decompression support was disabled "
    "at build time"));





 if (VAR_10 || VAR_9 == VAR_6) {
  VAR_8 = 1;
  VAR_10 = 1;
 }



 if (VAR_9 == VAR_4 && VAR_7 == VAR_0)
  VAR_7 = VAR_3;






 if (VAR_9 == VAR_4 || VAR_7 == VAR_2)
  FUNC_1();


 if (VAR_14[VAR_11] == ((void*)0) && VAR_12->files_name == ((void*)0)) {


  static char *VAR_16[2] = { (char *)"-", ((void*)0) };
  VAR_12->arg_names = VAR_16;
  VAR_12->arg_count = 1;
 } else {


  VAR_12->arg_names = VAR_14 + VAR_11;
  VAR_12->arg_count = VAR_13 - VAR_11;
 }

 return;
}
