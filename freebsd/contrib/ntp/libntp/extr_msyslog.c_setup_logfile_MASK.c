
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 char const* VAR_3 ;

void
FUNC_2(
 const char * VAR_4
 )
{
 if (((void*)0) == VAR_3 && ((void*)0) != VAR_4) {
  if (-1 == FUNC_0(VAR_4, VAR_2))
   FUNC_1(VAR_1, "Cannot open log file %s, %m",
    VAR_4);
  return ;
 }
 if (((void*)0) == VAR_3)
  return;

 if (-1 == FUNC_0(VAR_3, VAR_0))
  FUNC_1(VAR_1, "Cannot reopen log file %s, %m",
   VAR_3);
}
