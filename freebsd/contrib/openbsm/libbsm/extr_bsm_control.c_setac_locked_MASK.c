
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_ctime; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 static time_t VAR_3 = 0;
 struct stat VAR_4;

 VAR_2 = 1;
 if (VAR_1 != ((void*)0)) {




  if (FUNC_3(FUNC_1(VAR_1), &VAR_4) < 0)
   goto closefp;
  if (VAR_3 != VAR_4.st_ctime) {
   VAR_3 = VAR_4.st_ctime;
closefp:
   FUNC_0(VAR_1);
   VAR_1 = ((void*)0);
   return;
  }

  FUNC_2(VAR_1, 0, VAR_0);
 }
}
