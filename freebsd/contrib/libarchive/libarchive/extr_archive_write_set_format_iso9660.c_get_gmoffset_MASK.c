
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_isdst; } ;


 int FUNC_0 (long*) ;
 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static long
FUNC_1(struct tm *VAR_2)
{
 long VAR_3;






 VAR_3 = VAR_1;

 VAR_3 *= -1;
 if (VAR_2->tm_isdst)
  VAR_3 += 3600;
 return (VAR_3);
}
