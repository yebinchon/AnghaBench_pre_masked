
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* address_class_name_to_type_flags ) (struct gdbarch*,char const*,int*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,char const*,int*) ;

int
FUNC_3 (struct gdbarch *VAR_2, const char *VAR_3, int *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->address_class_name_to_type_flags != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_address_class_name_to_type_flags called\n");
  return VAR_2->address_class_name_to_type_flags (VAR_2, VAR_3, VAR_4);
}
