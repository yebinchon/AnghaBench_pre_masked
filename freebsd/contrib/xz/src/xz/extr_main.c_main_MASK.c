
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum exit_status_type { ____Placeholder_exit_status_type } exit_status_type ;
struct TYPE_4__ {int arg_count; char** arg_names; int files_file; int * files_name; } ;
typedef TYPE_1__ args_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int,char**) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 void FUNC_8 (char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 void FUNC_15 (char const*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char* FUNC_23 (TYPE_1__*) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int * VAR_14 ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 (int,int,int) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (char**) ;
 int VAR_15 ;

int
FUNC_30(int VAR_16, char **VAR_17)
{





 FUNC_29(VAR_17);



 FUNC_12();


 FUNC_28(VAR_6, VAR_3);


 FUNC_19();



 FUNC_10();





 args_info VAR_18;
 FUNC_5(&VAR_18, VAR_16, VAR_17);

 if (VAR_11 != VAR_5 && VAR_12)
  FUNC_18(FUNC_3("Compression and decompression with --robot "
   "are not supported yet."));



 if (VAR_18.files_name != ((void*)0))
  FUNC_20(0);
 else
  FUNC_20(VAR_18.arg_count);



 if (VAR_11 == VAR_4) {
  if (VAR_13 || (VAR_18.arg_count == 1
    && FUNC_26(VAR_18.arg_names[0], "-") == 0)) {
   if (FUNC_14()) {
    FUNC_21();
    FUNC_27(VAR_0, VAR_0, 0);
   }
  }
 }
 if (VAR_11 != VAR_5)
  FUNC_25();
 void (*VAR_19)(const char *VAR_20) = &FUNC_8;







 for (unsigned VAR_21 = 0; VAR_21 < VAR_18.arg_count && !VAR_15; ++VAR_21) {
  if (FUNC_26("-", VAR_18.arg_names[VAR_21]) == 0) {



   if (VAR_11 == VAR_4) {
    if (FUNC_14())
     continue;
   } else if (FUNC_13()) {
    continue;
   }




   if (VAR_18.files_name == VAR_14) {
    FUNC_17(FUNC_3("Cannot read data from "
      "standard input when "
      "reading filenames "
      "from standard input"));
    continue;
   }






   VAR_18.arg_names[VAR_21] = (char *)VAR_14;
  }


  VAR_19(VAR_18.arg_names[VAR_21]);
 }




 if (VAR_18.files_name != ((void*)0)) {


  while (1) {
   const char *VAR_22 = FUNC_23(&VAR_18);
   if (VAR_22 == ((void*)0))
    break;


   FUNC_6(VAR_22[0] != '\0');
   VAR_19(VAR_22);
  }

  if (VAR_18.files_name != VAR_14)
   (void)FUNC_9(VAR_18.files_file);
 }
 FUNC_7();
 FUNC_4();




 FUNC_24();
 enum exit_status_type VAR_23 = VAR_8;







 if (VAR_23 == VAR_2 && VAR_10)
  VAR_23 = VAR_1;

 FUNC_27(VAR_23, VAR_0, FUNC_22() != VAR_7);
}
