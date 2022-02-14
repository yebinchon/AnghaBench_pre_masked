
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_yday; size_t tm_mon; int tm_mday; int tm_year; } ;


 scalar_t__ FUNC_0 (int ) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct tm *VAR_2)
{
 int VAR_3 = VAR_2->tm_yday;
 const int *VAR_4 = FUNC_0(VAR_2->tm_year) ?
     VAR_0 : VAR_1;

 VAR_2->tm_mon = 0;
 while (VAR_3 >= VAR_4[VAR_2->tm_mon]) {
  VAR_3 -= VAR_4[VAR_2->tm_mon++];
 }
 VAR_2->tm_mday = VAR_3 + 1;
}
