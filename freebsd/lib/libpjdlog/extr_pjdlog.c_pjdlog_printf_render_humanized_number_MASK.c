
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_info {int dummy; } ;
struct __printf_io {int dummy; } ;
typedef scalar_t__ intmax_t ;
typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct __printf_io*) ;
 int FUNC_1 (struct __printf_io*,struct printf_info const*,char*,int ) ;
 int FUNC_2 (char*,int,int ,char*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct __printf_io *VAR_3,
    const struct printf_info *VAR_4, const void * const *VAR_5)
{
 char VAR_6[5];
 intmax_t VAR_7;
 int VAR_8;

 VAR_7 = *(const intmax_t *)VAR_5[0];
 FUNC_2(VAR_6, sizeof(VAR_6), (int64_t)VAR_7, "", VAR_0,
     VAR_2 | VAR_1);
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6, FUNC_3(VAR_6));
 FUNC_0(VAR_3);
 return (VAR_8);
}
