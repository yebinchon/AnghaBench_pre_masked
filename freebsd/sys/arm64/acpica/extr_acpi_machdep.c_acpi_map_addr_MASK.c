
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_generic_address {scalar_t__ SpaceId; int Address; } ;
typedef int * bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int VAR_1 ;

int
FUNC_1(struct acpi_generic_address *VAR_2, bus_space_tag_t *VAR_3,
    bus_space_handle_t *VAR_4, bus_size_t VAR_5)
{
 bus_addr_t VAR_6;


 if (VAR_2->SpaceId != 0)
  return (VAR_0);

 VAR_6 = VAR_2->Address;
 *VAR_3 = &VAR_1;

 return (FUNC_0(*VAR_3, VAR_6, VAR_5, 0, VAR_4));
}
