
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {scalar_t__ cd; scalar_t__ cd_w; int utftmp; struct archive_string_conv* to_charset; struct archive_string_conv* from_charset; } ;
typedef scalar_t__ iconv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive_string_conv*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct archive_string_conv *VAR_0)
{
 FUNC_1(VAR_0->from_charset);
 FUNC_1(VAR_0->to_charset);
 FUNC_0(&VAR_0->utftmp);






 FUNC_1(VAR_0);
}
