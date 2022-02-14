
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ctl_be_block_lun {int (* getattr ) (struct ctl_be_block_lun*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_be_block_lun*,char const*) ;

__attribute__((used)) static uint64_t
FUNC_1(void *VAR_1, const char *VAR_2)
{
 struct ctl_be_block_lun *VAR_3 = (struct ctl_be_block_lun *)VAR_1;

 if (VAR_3->getattr == ((void*)0))
  return (VAR_0);
 return (VAR_3->getattr(VAR_3, VAR_2));
}
