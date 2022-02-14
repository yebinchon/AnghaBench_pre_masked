
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_string {scalar_t__ length; } ;


 int FUNC_0 (struct archive_string*,void const*,size_t,struct archive_string_conv*) ;

int
FUNC_1(struct archive_string *VAR_0, const void *VAR_1, size_t VAR_2,
    struct archive_string_conv *VAR_3)
{
 VAR_0->length = 0;
 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));
}
