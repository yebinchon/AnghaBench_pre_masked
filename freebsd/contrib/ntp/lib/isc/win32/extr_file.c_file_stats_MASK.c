
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int isc_result_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static isc_result_t
FUNC_3(const char *VAR_2, struct stat *VAR_3) {
 isc_result_t VAR_4 = VAR_0;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 if (FUNC_2(VAR_2, VAR_3) != 0)
  VAR_4 = FUNC_1(VAR_1);

 return (VAR_4);
}
