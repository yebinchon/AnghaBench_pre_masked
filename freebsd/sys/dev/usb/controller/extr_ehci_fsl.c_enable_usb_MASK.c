
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,void**) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_3, bus_space_tag_t VAR_4, bus_space_handle_t VAR_5)
{
 int VAR_6;
 phandle_t VAR_7;
 char *VAR_8;

 VAR_8 = ((void*)0);
 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_0) | VAR_1;

 VAR_7 = FUNC_4(VAR_3);
 if ((VAR_7 != 0) &&
     (FUNC_0(VAR_7, "phy_type", (void **)&VAR_8) > 0)) {
  if (FUNC_6(VAR_8, "utmi", FUNC_5("utmi")) == 0)
   VAR_6 |= VAR_2;
  FUNC_1(VAR_8);
 }
 FUNC_3(VAR_4, VAR_5, VAR_0, VAR_6);
}
