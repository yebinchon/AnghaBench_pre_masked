
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int errbuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(
 const char *VAR_3,
 int VAR_4,
 const char *VAR_5,
 va_list VAR_6
 )
{
 char VAR_7[256];

 if (VAR_2 >= VAR_1)
  return;

 FUNC_0(VAR_0, "%s:%d: unexpected error:", VAR_3, VAR_4);
 FUNC_1(VAR_7, sizeof(VAR_7), VAR_5, VAR_6);
 FUNC_0(VAR_0, "%s", VAR_7);

 if (++VAR_2 == VAR_1)
  FUNC_0(VAR_0, "Too many errors.  Shutting up.");

}
