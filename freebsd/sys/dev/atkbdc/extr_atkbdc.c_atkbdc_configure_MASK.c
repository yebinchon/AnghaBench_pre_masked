
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stdin ;
typedef int register_t ;
typedef int phandle_t ;
typedef int name ;
typedef char ihandle_t ;
typedef int * bus_space_tag_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int ,int *,scalar_t__,scalar_t__) ;
 int * VAR_7 ;
 int FUNC_6 (int *,int,int ,int ,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (int *,scalar_t__,int,int,scalar_t__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,char*,int*) ;
 scalar_t__ FUNC_12 (int,int,int *) ;
 scalar_t__ FUNC_13 (char*,char*) ;

int
FUNC_14(void)
{
 bus_space_tag_t VAR_8;
 bus_space_handle_t VAR_9;
 bus_space_handle_t VAR_10;

 volatile int VAR_11;
 register_t VAR_12;
 int VAR_13;
 int VAR_14;




 VAR_8 = VAR_5;
 VAR_13 = VAR_1;
 FUNC_11("atkbdc", 0, "port", &VAR_13);
 VAR_14 = VAR_1 + VAR_4;




 VAR_9 = (bus_space_handle_t)VAR_13;
 VAR_10 = (bus_space_handle_t)VAR_14;
 VAR_12 = FUNC_9();
 for (VAR_11 = 0; VAR_11 != 65535; VAR_11++) {
  if ((FUNC_7(VAR_8, VAR_10, 0) & 0x2) == 0)
   break;
 }
 FUNC_10(VAR_12);
 if (VAR_11 == 65535)
                return VAR_0;


 return FUNC_5(VAR_7[0], VAR_8, VAR_9, VAR_10);
}
