
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int,int,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int VAR_0 ;

void
FUNC_3(void)
{
 bus_space_tag_t VAR_1;
 bus_space_handle_t VAR_2;

 VAR_1 = VAR_0;



 FUNC_0(VAR_1, 0x1e8c0000, 0x20000, 0, &VAR_2);
 FUNC_2(VAR_1, VAR_2, 0, 13000);
 FUNC_2(VAR_1, VAR_2, 8, (1<<3) | (1<<4) | 7);
 FUNC_1(VAR_1, VAR_2, 0x20000);

 for (;;)
  continue;
}
