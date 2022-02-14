
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,char*,char const* const,int ,...) ;

__attribute__((used)) static void
FUNC_2(
 int VAR_3,
 uint32_t VAR_4 ,
 const time_t *VAR_5
 )
{
 static const char * const VAR_6 = "leapsecond file";
 int VAR_7;





 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (VAR_7 == 0) {
  FUNC_1(VAR_1,
   "%s ('%s'): will expire in less than one day",
   VAR_6, VAR_2);
 } else if (VAR_3 && VAR_7 < 28) {
  if (VAR_7 < 0)
   FUNC_1(VAR_0,
    "%s ('%s'): expired less than %d day%s ago",
    VAR_6, VAR_2, -VAR_7, (VAR_7 == -1 ? "" : "s"));
  else
   FUNC_1(VAR_1,
    "%s ('%s'): will expire in less than %d days",
    VAR_6, VAR_2, 1+VAR_7);
 }
}
