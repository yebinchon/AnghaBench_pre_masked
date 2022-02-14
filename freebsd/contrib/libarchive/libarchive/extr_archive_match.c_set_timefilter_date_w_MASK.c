
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ time_t ;
struct archive_string {int s; } ;
struct archive_match {int archive; int now; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (struct archive_string*,int const*,int ) ;
 int FUNC_2 (struct archive_string*) ;
 int FUNC_3 (struct archive_string*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct archive_match*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct archive_match*,int,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_7 (int const*) ;

__attribute__((used)) static int
FUNC_8(struct archive_match *VAR_4, int VAR_5,
    const wchar_t *VAR_6)
{
 struct archive_string VAR_7;
 time_t VAR_8;

 if (VAR_6 == ((void*)0) || *VAR_6 == L'\0') {
  FUNC_0(&(VAR_4->archive), VAR_1, "date is empty");
  return (VAR_0);
 }

 FUNC_3(&VAR_7);
 if (FUNC_1(&VAR_7, VAR_6, FUNC_7(VAR_6)) < 0) {
  FUNC_2(&VAR_7);
  if (VAR_3 == VAR_2)
   return (FUNC_4(VAR_4));
  FUNC_0(&(VAR_4->archive), -1,
      "Failed to convert WCS to MBS");
  return (VAR_0);
 }
 VAR_8 = FUNC_5(VAR_4->now, VAR_7.s);
 FUNC_2(&VAR_7);
 if (VAR_8 == (time_t)-1) {
  FUNC_0(&(VAR_4->archive), VAR_1, "invalid date string");
  return (VAR_0);
 }
 return FUNC_6(VAR_4, VAR_5, VAR_8, 0, VAR_8, 0);
}
