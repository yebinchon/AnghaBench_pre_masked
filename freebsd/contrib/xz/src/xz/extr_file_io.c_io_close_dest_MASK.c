
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dest_fd; int dest_name; int dest_st; } ;
typedef TYPE_1__ file_pair ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8(file_pair *VAR_5, bool VAR_6)
{


 if (VAR_3) {
  FUNC_1(VAR_5->dest_fd == VAR_1);

  VAR_3 = 0;

  if (FUNC_3(VAR_1, VAR_0, VAR_4) == -1) {
   FUNC_6(FUNC_0("Error restoring the O_APPEND flag "
     "to standard output: %s"),
     FUNC_7(VAR_2));
   return 1;
  }
 }


 if (VAR_5->dest_fd == -1 || VAR_5->dest_fd == VAR_1)
  return 0;

 if (FUNC_2(VAR_5->dest_fd)) {
  FUNC_6(FUNC_0("%s: Closing the file failed: %s"),
    VAR_5->dest_name, FUNC_7(VAR_2));



  FUNC_5(VAR_5->dest_name, &VAR_5->dest_st);
  FUNC_4(VAR_5->dest_name);
  return 1;
 }



 if (!VAR_6)
  FUNC_5(VAR_5->dest_name, &VAR_5->dest_st);

 FUNC_4(VAR_5->dest_name);

 return 0;
}
