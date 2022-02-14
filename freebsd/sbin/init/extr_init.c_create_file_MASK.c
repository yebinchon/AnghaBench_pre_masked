
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_3 ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,void const*,size_t) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, const void *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_2 | VAR_0 | VAR_1, 0700);
 if (VAR_9 < 0) {
  FUNC_1("%s: %s", VAR_4, FUNC_3(VAR_3));
  return (-1);
 }

 VAR_7 = FUNC_4(VAR_9, VAR_5, VAR_6);
 if (VAR_7 != (ssize_t)VAR_6) {
  FUNC_1("write: %s", FUNC_3(VAR_3));
  FUNC_0(VAR_9);
  return (-1);
 }

 VAR_8 = FUNC_0(VAR_9);
 if (VAR_8 != 0) {
  FUNC_1("close: %s", FUNC_3(VAR_3));
  return (-1);
 }

 return (0);
}
