
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 struct archive_string_conv* FUNC_1 (struct archive*,char const*,int ,int) ;

struct archive_string_conv *
FUNC_2(struct archive *VAR_2, const char *VAR_3,
    int VAR_4)
{
 int VAR_5 = VAR_1;

 if (VAR_4)
  VAR_5 |= VAR_0;
 return (FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_2), VAR_5));
}
