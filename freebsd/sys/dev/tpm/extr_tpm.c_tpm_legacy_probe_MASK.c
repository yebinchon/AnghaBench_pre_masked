
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int id ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (int ,int,int,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (char*,char*,char,char,char,char) ;
 int VAR_1 ;
 char FUNC_6 (int ,int ,scalar_t__) ;

int
FUNC_7(bus_space_tag_t VAR_2, bus_addr_t VAR_3)
{
 bus_space_handle_t VAR_4;
 u_int8_t VAR_5, VAR_6;
 int VAR_7, VAR_8 = 0;
 char VAR_9[8];

 if (!VAR_1 || VAR_3 == -1)
  return 0;

 if (FUNC_1(VAR_2, VAR_3, 2, 0, &VAR_4))
  return 0;

 VAR_6 = FUNC_2(VAR_2, VAR_4, 0);
 if (VAR_6 == 0xff) {
  FUNC_3(VAR_2, VAR_4, 2);
  return 0;
 }
 VAR_5 = FUNC_2(VAR_2, VAR_4, 1);

 for (VAR_7 = sizeof(VAR_9); VAR_7--; )
  VAR_9[VAR_7] = FUNC_6(VAR_2, VAR_4, VAR_0 + VAR_7);
 if (!FUNC_0(&VAR_9[4], "ATML", 4))
  VAR_8 = 1;

 if (!VAR_8) {
  FUNC_4(VAR_2, VAR_4, VAR_5, 1);
  FUNC_4(VAR_2, VAR_4, VAR_6, 0);
 }
 FUNC_3(VAR_2, VAR_4, 2);

 return VAR_8;
}
