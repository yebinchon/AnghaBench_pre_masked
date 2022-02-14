
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 size_t FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(u_int32_t VAR_1)
{
 const char *VAR_2[] = {
  "Success",
  "End of file",
  "No such file",
  "Permission denied",
  "Failure",
  "Bad message",
  "No connection",
  "Connection lost",
  "Operation unsupported",
  "Unknown error"
 };
 return (VAR_2[FUNC_0(VAR_1,VAR_0)]);
}
