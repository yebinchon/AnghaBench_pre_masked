
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct archive_match {int archive; int now; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct archive_match*,int,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(struct archive_match *VAR_2, int VAR_3, const char *VAR_4)
{
 time_t VAR_5;

 if (VAR_4 == ((void*)0) || *VAR_4 == '\0') {
  FUNC_0(&(VAR_2->archive), VAR_1, "date is empty");
  return (VAR_0);
 }
 VAR_5 = FUNC_1(VAR_2->now, VAR_4);
 if (VAR_5 == (time_t)-1) {
  FUNC_0(&(VAR_2->archive), VAR_1, "invalid date string");
  return (VAR_0);
 }
 return FUNC_2(VAR_2, VAR_3, VAR_5, 0, VAR_5, 0);
}
