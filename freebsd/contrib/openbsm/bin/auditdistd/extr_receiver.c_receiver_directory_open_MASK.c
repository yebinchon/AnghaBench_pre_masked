
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {int adh_trail_dirfd; int * adh_trail_dirfp; int adh_directory; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int) ;
 void* FUNC_2 (int ,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct stat*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct stat VAR_6;

 if (FUNC_6(VAR_4->adh_directory, &VAR_6) == -1) {
  if (VAR_5 == VAR_0) {
   FUNC_5();
  } else {
   FUNC_4(VAR_1,
       "Unable to stat directory \"%s\"",
       VAR_4->adh_directory);
  }
 }
 VAR_4->adh_trail_dirfp = FUNC_3(VAR_4->adh_directory);
 if (VAR_4->adh_trail_dirfp == ((void*)0)) {
  FUNC_4(VAR_1, "Unable to open directory \"%s\"",
      VAR_4->adh_directory);
 }
 VAR_4->adh_trail_dirfd = FUNC_0(VAR_4->adh_trail_dirfp);

}
