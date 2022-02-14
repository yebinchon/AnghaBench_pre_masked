
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ db_addr_t ;


 int FUNC_0 (int ,size_t,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

db_addr_t
FUNC_3(db_addr_t VAR_0, bool VAR_1)

{
 int VAR_2;

 if (FUNC_2((vm_offset_t)VAR_0)) {
  FUNC_0((vm_offset_t)VAR_0, (size_t)sizeof(int),
      (char *)&VAR_2);
  FUNC_1(VAR_2, VAR_0);
 }

 return (VAR_0 + sizeof(int));
}
