
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {scalar_t__ st_gid; } ;
typedef unsigned int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 static int VAR_5 = 0;
 uid_t VAR_6 = FUNC_5();
 gid_t VAR_7 = 0;
 unsigned int VAR_8;
 struct stat VAR_9;
 int VAR_10;


 if (VAR_5)
  return;
 VAR_5 = 1;


 VAR_10 = FUNC_6("test_gid", VAR_1 | VAR_0, 0664);
 FUNC_2("Couldn't create a file for gid testing.");
 FUNC_0(VAR_10 > 0);


 FUNC_0(FUNC_4(VAR_10, &VAR_9) == 0);
 VAR_3 = VAR_9.st_gid;


 VAR_4 = -1;

 for (VAR_7 = 1, VAR_8 = 1; VAR_7 == VAR_8 && VAR_8 < 10000 ; VAR_8++, VAR_7++) {
  if (FUNC_3(VAR_10, VAR_6, VAR_7) != 0) {
   VAR_4 = VAR_7;
   break;
  }
 }





 VAR_2 = -1;
 for (VAR_7 = 0, VAR_8 = 0; VAR_7 == VAR_8 && VAR_8 < 10000 ; VAR_8++, VAR_7++) {

  if (VAR_7 == (gid_t)VAR_3)
   continue;
  if (FUNC_3(VAR_10, VAR_6, VAR_7) == 0) {
   VAR_2 = VAR_7;
   break;
  }
 }
 FUNC_1(VAR_10);
}
