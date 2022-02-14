
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct tm *VAR_0, struct tm *VAR_1)
{
    bool VAR_2 = (VAR_1 == 0 ||
      VAR_0->tm_mday != VAR_1->tm_mday ||
      VAR_0->tm_mon != VAR_1->tm_mon ||
      VAR_0->tm_year != VAR_1->tm_year);
    if (VAR_2) {
 FUNC_0(("# current %04d/%02d/%02d\n",
     VAR_0->tm_year + 1900,
     VAR_0->tm_mon + 1,
     VAR_0->tm_mday));
    } else {
 FUNC_0(("# current (unchanged)\n"));
    }
}
