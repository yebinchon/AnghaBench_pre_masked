
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int isc_boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

isc_boolean_t
FUNC_3(const char *VAR_1) {
 struct stat VAR_2;

 FUNC_1(VAR_1 != ((void*)0));

 return (FUNC_0(FUNC_2(VAR_1, &VAR_2) == VAR_0));
}
