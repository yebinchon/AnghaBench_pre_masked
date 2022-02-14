
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct sp_data {char* sp_buf; size_t sp_size; scalar_t__ sp_len; } ;


 int FUNC_0 (char const*,int ,struct sp_data*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct sp_data VAR_5;
 int VAR_6;

 VAR_5.sp_buf = VAR_1;
 VAR_5.sp_len = 0;
 VAR_5.sp_size = VAR_2;
 VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_5, VAR_4);
 return (VAR_6);
}
