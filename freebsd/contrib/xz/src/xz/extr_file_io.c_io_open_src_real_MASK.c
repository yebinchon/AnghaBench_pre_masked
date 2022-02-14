
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef scalar_t__ io_wait_ret ;
struct TYPE_7__ {int st_mode; int st_nlink; } ;
struct TYPE_6__ {scalar_t__ src_name; int src_fd; TYPE_2__ src_st; } ;
typedef TYPE_1__ file_pair ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ const VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int const VAR_20 ;
 int FUNC_6 (int,int ,...) ;
 scalar_t__ FUNC_7 (int,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_9 (scalar_t__,struct stat*) ;
 int FUNC_10 (char*,scalar_t__,...) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_13 (int,int ,int ,int ) ;
 int VAR_24 ;
 int FUNC_14 (int,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (scalar_t__,TYPE_2__*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_18 (int const) ;

__attribute__((used)) static bool
FUNC_19(file_pair *VAR_27)
{

 if (VAR_27->src_name == VAR_25) {
  VAR_27->src_fd = VAR_16;
  VAR_26 = FUNC_6(VAR_16, VAR_5);
  if (VAR_26 == -1) {
   FUNC_10(FUNC_3("Error getting the file status flags "
     "from standard input: %s"),
     FUNC_18(VAR_20));
   return 1;
  }

  if ((VAR_26 & VAR_12) == 0
    && FUNC_6(VAR_16, VAR_6,
     VAR_26 | VAR_12) != -1)
   VAR_24 = 1;
  return 0;
 }



 const bool VAR_28 = VAR_23 || VAR_21;




 const bool VAR_29 = !VAR_23;


 int VAR_30 = VAR_13 | VAR_9 | VAR_10;







 VAR_30 |= VAR_12;
 if (!VAR_28) {
  struct stat VAR_31;
  if (FUNC_9(VAR_27->src_name, &VAR_31)) {
   FUNC_10("%s: %s", VAR_27->src_name,
     FUNC_18(VAR_20));
   return 1;

  } else if (FUNC_1(VAR_31.st_mode)) {
   FUNC_11(FUNC_3("%s: Is a symbolic link, "
     "skipping"), VAR_27->src_name);
   return 1;
  }
 }







 VAR_27->src_fd = FUNC_12(VAR_27->src_name, VAR_30);

 if (VAR_27->src_fd == -1) {

  FUNC_4(VAR_20 != VAR_1);
   FUNC_10("%s: %s", VAR_27->src_name,
     FUNC_18(VAR_20));

  return 1;
 }
 if (FUNC_7(VAR_27->src_fd, &VAR_27->src_st))
  goto error_msg;


 if (FUNC_0(VAR_27->src_st.st_mode)) {
  FUNC_11(FUNC_3("%s: Is a directory, skipping"),
    VAR_27->src_name);
  goto error;
 }

 if (VAR_29 && !FUNC_2(VAR_27->src_st.st_mode)) {
  FUNC_11(FUNC_3("%s: Not a regular file, skipping"),
    VAR_27->src_name);
  goto error;
 }


 if (VAR_29 && !VAR_21) {
  if (VAR_27->src_st.st_mode & (VAR_18 | VAR_17)) {
   FUNC_11(FUNC_3("%s: File has setuid or "
     "setgid bit set, skipping"),
     VAR_27->src_name);
   goto error;
  }

  if (VAR_27->src_st.st_mode & VAR_19) {
   FUNC_11(FUNC_3("%s: File has sticky bit "
     "set, skipping"),
     VAR_27->src_name);
   goto error;
  }

  if (VAR_27->src_st.st_nlink > 1) {
   FUNC_11(FUNC_3("%s: Input file has more "
     "than one hard link, "
     "skipping"), VAR_27->src_name);
   goto error;
  }
 }




 if (!FUNC_2(VAR_27->src_st.st_mode)) {
  FUNC_16();
  const io_wait_ret VAR_32 = FUNC_8(VAR_27, -1, 1);
  FUNC_15();

  if (VAR_32 != VAR_7)
   goto error;
 }
 return 0;

error_msg:
 FUNC_10("%s: %s", VAR_27->src_name, FUNC_18(VAR_20));
error:
 (void)FUNC_5(VAR_27->src_fd);
 return 1;
}
