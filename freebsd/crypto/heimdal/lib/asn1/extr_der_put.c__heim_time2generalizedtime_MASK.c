
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_sec; int tm_min; int tm_hour; } ;
struct TYPE_3__ {size_t length; int * data; } ;
typedef TYPE_1__ heim_octet_string ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,struct tm*) ;
 int * FUNC_1 (size_t const) ;
 int FUNC_2 (int *,size_t const,char*,int,int,int,int ,int ,int ) ;

int
FUNC_3 (time_t VAR_2, heim_octet_string *VAR_3, int VAR_4)
{
     struct tm VAR_5;
     const size_t VAR_6 = VAR_4 ? 15 : 13;

     VAR_3->data = FUNC_1(VAR_6 + 1);
     if (VAR_3->data == ((void*)0))
  return VAR_1;
     VAR_3->length = VAR_6;
     if (FUNC_0(VAR_2, &VAR_5) == ((void*)0))
  return VAR_0;
     if (VAR_4)
  FUNC_2 (VAR_3->data, VAR_6 + 1, "%04d%02d%02d%02d%02d%02dZ",
     VAR_5.tm_year + 1900, VAR_5.tm_mon + 1, VAR_5.tm_mday,
     VAR_5.tm_hour, VAR_5.tm_min, VAR_5.tm_sec);
     else
  FUNC_2 (VAR_3->data, VAR_6 + 1, "%02d%02d%02d%02d%02d%02dZ",
     VAR_5.tm_year % 100, VAR_5.tm_mon + 1, VAR_5.tm_mday,
     VAR_5.tm_hour, VAR_5.tm_min, VAR_5.tm_sec);

     return 0;
}
