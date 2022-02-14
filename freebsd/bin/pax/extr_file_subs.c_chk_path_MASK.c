
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {int st_mode; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,struct stat*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char) ;

int
FUNC_7( char *VAR_8, uid_t VAR_9, gid_t VAR_10)
{
 char *VAR_11 = VAR_8;
 struct stat VAR_12;
 int VAR_13 = -1;




 if (*VAR_11 == '/')
  ++VAR_11;

 for(;;) {



  VAR_11 = FUNC_6(VAR_11, '/');
  if (VAR_11 == ((void*)0))
   break;
  *VAR_11 = '\0';
  if (FUNC_2(VAR_8, &VAR_12) == 0) {
   *(VAR_11++) = '/';
   continue;
  }





  if (FUNC_3(VAR_8, VAR_4 | VAR_2 | VAR_3) < 0) {
   *VAR_11 = '/';
   VAR_13 = -1;
   break;
  }






  VAR_13 = 0;
  if (VAR_7)
   (void)FUNC_4(VAR_8, VAR_9, VAR_10);







  if ((FUNC_0(VAR_8, VAR_1 | VAR_5 | VAR_6) < 0) &&
      (FUNC_2(VAR_8, &VAR_12) == 0)) {
   FUNC_5(VAR_8, ((VAR_12.st_mode & VAR_0) | VAR_4));
   FUNC_1(VAR_8, VAR_11 - VAR_8, &VAR_12, 1);
  }
  *(VAR_11++) = '/';
  continue;
 }
 return(VAR_13);
}
