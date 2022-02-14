
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_dev; scalar_t__ st_ino; } ;
typedef int mode_t ;
struct TYPE_7__ {int st_size; int st_mode; scalar_t__* st_ino; scalar_t__ st_dev; } ;
struct TYPE_5__ {int st_dev; scalar_t__ st_ino; } ;
struct TYPE_6__ {scalar_t__ src_fd; char* dest_name; int dest_fd; int dest_try_sparse; TYPE_4__ dest_st; TYPE_1__ src_st; int src_name; } ;
typedef TYPE_2__ file_pair ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,TYPE_4__*) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,int,int const) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int VAR_22 ;
 int FUNC_10 (scalar_t__) ;
 char* FUNC_11 (int ) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_12 (char*) ;

__attribute__((used)) static bool
FUNC_13(file_pair *VAR_24)
{
 if (VAR_20 || VAR_24->src_fd == VAR_13) {

  VAR_24->dest_name = (char *)"(stdout)";
  VAR_24->dest_fd = VAR_14;
  VAR_22 = FUNC_2(VAR_14, VAR_1);
  if (VAR_22 == -1) {
   FUNC_6(FUNC_1("Error getting the file status flags "
     "from standard output: %s"),
     FUNC_10(VAR_17));
   return 1;
  }

  if ((VAR_22 & VAR_9) == 0
    && FUNC_2(VAR_14, VAR_2,
     VAR_22 | VAR_9) != -1)
    VAR_21 = 1;

 } else {
  VAR_24->dest_name = FUNC_11(VAR_24->src_name);
  if (VAR_24->dest_name == ((void*)0))
   return 1;
  if (VAR_18 && FUNC_12(VAR_24->dest_name) && VAR_17 != VAR_0) {
   FUNC_6(FUNC_1("%s: Cannot remove: %s"),
     VAR_24->dest_name, FUNC_10(VAR_17));
   FUNC_3(VAR_24->dest_name);
   return 1;
  }


  int VAR_25 = VAR_10 | VAR_5 | VAR_8
    | VAR_6 | VAR_7;

  VAR_25 |= VAR_9;

  const mode_t VAR_26 = VAR_15 | VAR_16;
  VAR_24->dest_fd = FUNC_7(VAR_24->dest_name, VAR_25, VAR_26);

  if (VAR_24->dest_fd == -1) {
   FUNC_6("%s: %s", VAR_24->dest_name,
     FUNC_10(VAR_17));
   FUNC_3(VAR_24->dest_name);
   return 1;
  }
 }




 if (FUNC_4(VAR_24->dest_fd, &VAR_24->dest_st)) {






  VAR_24->dest_st.st_dev = 0;
  VAR_24->dest_st.st_ino = 0;

 } else if (VAR_23 && VAR_19 == VAR_3) {
  if (VAR_24->dest_fd == VAR_14) {
   if (!FUNC_0(VAR_24->dest_st.st_mode))
    return 0;

   if (VAR_22 & VAR_4) {
    if (FUNC_5(VAR_14, 0, VAR_12) == -1)
     return 0;




    int VAR_27 = VAR_22 & ~VAR_4;
    if (VAR_21)
     VAR_27 |= VAR_9;





    if (FUNC_2(VAR_14, VAR_2, VAR_27) == -1)
     return 0;





    VAR_21 = 1;

   } else if (FUNC_5(VAR_14, 0, VAR_11)
     != VAR_24->dest_st.st_size) {



    return 0;
   }
  }

  VAR_24->dest_try_sparse = 1;
 }


 return 0;
}
