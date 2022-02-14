
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int device_type ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11(void)
{
 bus_space_handle_t VAR_6;
 phandle_t VAR_7, VAR_8;
 char VAR_9[16];
 int VAR_10 = 0;
 int VAR_11 = 0;
 uint32_t VAR_12;
 int VAR_13;

 VAR_7 = FUNC_1("/cpus");
 if (VAR_7 == -1) {

  VAR_5 = 1;
  return (0);
 }


 for (VAR_8 = FUNC_0(VAR_7); VAR_8 != 0; VAR_8 = FUNC_3(VAR_8)) {

  FUNC_8(VAR_9, 0, sizeof(VAR_9));
  VAR_13 = FUNC_2(VAR_8, "device_type", VAR_9,
      sizeof(VAR_9) - 1);
  if (VAR_13 < 0)
   continue;
  if (FUNC_10(VAR_9, "cpu") != 0)
   continue;

  VAR_10++;
 }


 VAR_13 = FUNC_4(VAR_4, (bus_addr_t)VAR_0,
     VAR_1, 0, &VAR_6);
 if (VAR_13 != 0) {

  VAR_5 = 1;
  return (0);
 }

 VAR_12 = FUNC_5(VAR_4, VAR_6, VAR_2);
 FUNC_6(VAR_4, VAR_6, VAR_1);
        VAR_11 = (VAR_12 & VAR_3) + 1;


 VAR_5 = FUNC_9(VAR_11, VAR_10);

 VAR_5 = FUNC_7(1, VAR_5);

 return (VAR_5);
}
