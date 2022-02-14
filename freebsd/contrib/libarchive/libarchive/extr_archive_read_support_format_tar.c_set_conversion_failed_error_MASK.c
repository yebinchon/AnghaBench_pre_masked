
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__,char*,char const*,...) ;
 int FUNC_1 (struct archive_string_conv*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_5,
    struct archive_string_conv *VAR_6, const char *VAR_7)
{
 if (VAR_4 == VAR_3) {
  FUNC_0(&VAR_5->archive, VAR_3,
      "Can't allocate memory for %s", VAR_7);
  return (VAR_1);
 }
 FUNC_0(&VAR_5->archive, VAR_0,
     "%s can't be converted from %s to current locale.",
     VAR_7, FUNC_1(VAR_6));
 return (VAR_2);
}
