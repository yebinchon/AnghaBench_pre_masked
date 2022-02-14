
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hi; } ;
struct TYPE_6__ {TYPE_1__ d_s; } ;
typedef TYPE_2__ vint64 ;
struct calendar {int year; int month; int monthday; int hour; int minute; int second; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct calendar*,TYPE_2__ const*) ;
 int FUNC_2 (char*,int ,char*,...) ;

__attribute__((used)) static const char *
FUNC_3(
 const vint64 * VAR_1)
{
 char * VAR_2;
 struct calendar VAR_3;

 FUNC_0(VAR_2);

 if ( ! (VAR_1->d_s.hi >= 0 && FUNC_1(&VAR_3, VAR_1) >= 0))
  FUNC_2(VAR_2, VAR_0, "%s", "9999-12-31T23:59:59Z");
 else
  FUNC_2(VAR_2, VAR_0, "%04d-%02d-%02dT%02d:%02d:%02dZ",
   VAR_3.year, VAR_3.month, VAR_3.monthday,
   VAR_3.hour, VAR_3.minute, VAR_3.second);

 return VAR_2;
}
