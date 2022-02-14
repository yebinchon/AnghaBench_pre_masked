
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int const*,int,int) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_2, int VAR_3,
       int VAR_4)
{
 u16 VAR_5;

 if (FUNC_2(VAR_2, VAR_3, VAR_4) < 0)
  return -1;
 if (VAR_2 == ((void*)0))
  return 0;
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 & VAR_1) {
  FUNC_1(VAR_0, "WPS-STRICT: Invalid Configuration "
      "Methods attribute value 0x%04x in AP info "
      "(PushButton not allowed for registering new ER)",
      VAR_5);
  return -1;
 }
 return 0;
}
