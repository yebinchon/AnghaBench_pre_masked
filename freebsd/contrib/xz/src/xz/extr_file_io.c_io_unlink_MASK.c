
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; scalar_t__ st_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,struct stat*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (int ,char const*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, const struct stat *VAR_3)
{





 struct stat VAR_4;
 const int VAR_5 = VAR_1
   ? FUNC_4(VAR_2, &VAR_4) : FUNC_1(VAR_2, &VAR_4);

 if (VAR_5







   || VAR_4.st_dev != VAR_3->st_dev
   || VAR_4.st_ino != VAR_3->st_ino

   )
  FUNC_3(FUNC_0("%s: File seems to have been moved, "
    "not removing"), VAR_2);
 else



  if (FUNC_6(VAR_2))
   FUNC_3(FUNC_0("%s: Cannot remove: %s"),
     VAR_2, FUNC_5(VAR_0));

 return;
}
