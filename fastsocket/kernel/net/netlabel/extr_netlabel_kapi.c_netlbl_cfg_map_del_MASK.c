
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlbl_audit {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct netlbl_audit*) ;
 int FUNC_1 (char const*,void const*,void const*,struct netlbl_audit*) ;

int FUNC_2(const char *VAR_2,
         u16 VAR_3,
         const void *VAR_4,
         const void *VAR_5,
         struct netlbl_audit *VAR_6)
{
 if (VAR_4 == ((void*)0) && VAR_5 == ((void*)0)) {
  return FUNC_0(VAR_2, VAR_6);
 } else if (VAR_4 != ((void*)0) && VAR_5 != ((void*)0)) {
  switch (VAR_3) {
  case 128:
   return FUNC_1(VAR_2, VAR_4, VAR_5,
       VAR_6);
  default:
   return -VAR_1;
  }
 } else
  return -VAR_0;
}
