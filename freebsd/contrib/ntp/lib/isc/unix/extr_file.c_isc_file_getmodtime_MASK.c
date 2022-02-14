
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; } ;
typedef int isc_time_t ;
typedef scalar_t__ isc_result_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (int *,int ,int ) ;

isc_result_t
FUNC_3(const char *VAR_1, isc_time_t *VAR_2) {
 isc_result_t VAR_3;
 struct stat VAR_4;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 VAR_3 = FUNC_1(VAR_1, &VAR_4);

 if (VAR_3 == VAR_0)




  FUNC_2(VAR_2, VAR_4.st_mtime, 0);

 return (VAR_3);
}
