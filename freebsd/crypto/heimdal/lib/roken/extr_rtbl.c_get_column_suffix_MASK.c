
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct column_data {char const* suffix; } ;
typedef int rtbl_t ;



__attribute__((used)) static const char *
FUNC_0 (rtbl_t VAR_0, struct column_data *VAR_1)
{
    if (VAR_1 && VAR_1->suffix)
 return VAR_1->suffix;
    return "";
}
