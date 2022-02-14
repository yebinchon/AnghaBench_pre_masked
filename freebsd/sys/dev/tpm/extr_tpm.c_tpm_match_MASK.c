
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_attach_args {int ia_iosize; int ia_maddr; int ia_msize; int ia_iobase; int ia_iot; int ia_memt; } ;
struct cfdata {scalar_t__ cf_unit; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(device_t VAR_1, void *VAR_2, void *VAR_3)
{
 struct isa_attach_args *VAR_4 = VAR_3;
 struct cfdata *VAR_5 = VAR_2;
 bus_space_tag_t VAR_6 = VAR_4->ia_memt;
 bus_space_handle_t VAR_7;
 int VAR_8;


 if (VAR_5->cf_unit)
  return 0;

 if (FUNC_2(VAR_4->ia_iot, VAR_4->ia_iobase)) {
  VAR_4->ia_iosize = 2;
  return 1;
 }

 if (VAR_4->ia_maddr == -1)
  return 0;

 if (FUNC_0(VAR_6, VAR_4->ia_maddr, VAR_0, 0, &VAR_7))
  return 0;

 if ((VAR_8 = FUNC_3(VAR_6, VAR_7))) {
  VAR_4->ia_iosize = 0;
  VAR_4->ia_msize = VAR_0;
 }

 FUNC_1(VAR_6, VAR_7, VAR_0);
 return VAR_8;
}
