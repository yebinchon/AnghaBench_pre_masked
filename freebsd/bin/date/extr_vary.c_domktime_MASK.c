
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; } ;


 int FUNC_0 (struct tm*,char,int,int ) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static int
FUNC_2(struct tm *VAR_0, char VAR_1)
{
  time_t VAR_2;

  while ((VAR_2 = FUNC_1(VAR_0)) == -1 && VAR_0->tm_year > 68 && VAR_0->tm_year < 138)

    FUNC_0(VAR_0, VAR_1 == '-' ? VAR_1 : '+', 1, 0);

  return VAR_2;
}
