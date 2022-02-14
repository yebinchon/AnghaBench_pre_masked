
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(u_int VAR_1)
{
 static const char *VAR_2[] = {
  "medium",
  "high",
  "rsv",
  "low"
 };

 return VAR_2[((VAR_1 & VAR_0) >> 3) & 0xff];
}
