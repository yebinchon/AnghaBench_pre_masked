
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

void
FUNC_3(char *VAR_5, u_int VAR_6)
{
 u_int VAR_7;

 if (VAR_4 == 0 || VAR_3)
  return;
 VAR_7 = FUNC_2(VAR_6, VAR_2 - VAR_1);
 FUNC_1(VAR_5, VAR_0 + VAR_1, VAR_7);
 VAR_1 += VAR_7;

 FUNC_0(VAR_1 <= VAR_2,
     ("db_capture_write: bufoff > bufsize"));
}
