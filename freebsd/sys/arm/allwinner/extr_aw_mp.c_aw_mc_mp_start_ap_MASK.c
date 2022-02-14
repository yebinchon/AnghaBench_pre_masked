
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(bus_space_handle_t VAR_4, bus_space_handle_t VAR_5,
    bus_space_handle_t VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_0(VAR_2 <= 4, ("multiple clusters not yet supported"));

 FUNC_3();

 FUNC_2(VAR_1, VAR_4, VAR_0,
     FUNC_4((vm_offset_t)VAR_3));

 VAR_7 = 0;
 for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++)
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
