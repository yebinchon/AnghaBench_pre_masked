
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ isc_result_t ;
typedef int isc_fsaccess_t ;
typedef int isc_boolean_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;

isc_result_t
FUNC_6(const char *VAR_7, isc_fsaccess_t VAR_8) {
 struct stat VAR_9;
 isc_boolean_t VAR_10 = VAR_0;
 isc_result_t VAR_11;

 if (FUNC_5(VAR_7, &VAR_9) != 0)
  return (FUNC_4(VAR_6));

 if ((VAR_9.st_mode & VAR_4) != 0)
  VAR_10 = VAR_3;
 else if ((VAR_9.st_mode & VAR_5) == 0)
  return (VAR_1);

 VAR_11 = FUNC_2(VAR_8, VAR_10);
 if (VAR_11 != VAR_2)
  return (VAR_11);





 if (FUNC_3(VAR_7))
  return (FUNC_1(VAR_7, VAR_8, VAR_10));
 else
  return (FUNC_0(VAR_7, VAR_8));
}
