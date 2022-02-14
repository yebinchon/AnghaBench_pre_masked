
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct stat*,int ,int) ;
 int FUNC_3 (char const*,struct stat*) ;

isc_result_t
FUNC_4(const char *VAR_3) {



 struct stat VAR_4;
 FUNC_2(&VAR_4,0,sizeof(struct stat));

 if ((FUNC_3(VAR_3, &VAR_4)) == -1)
  return(FUNC_1(VAR_2));

 if(! FUNC_0(VAR_4.st_mode))
  return(VAR_0);

 return(VAR_1);
}
