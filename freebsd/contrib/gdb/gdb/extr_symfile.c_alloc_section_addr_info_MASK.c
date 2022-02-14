
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_addr_info {size_t num_sections; } ;
struct other_sections {int dummy; } ;


 int FUNC_0 (struct section_addr_info*,int ,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;

struct section_addr_info *
FUNC_2 (size_t VAR_0)
{
  struct section_addr_info *VAR_1;
  size_t VAR_2;

  VAR_2 = (sizeof (struct section_addr_info)
   + sizeof (struct other_sections) * (VAR_0 - 1));
  VAR_1 = (struct section_addr_info *) FUNC_1 (VAR_2);
  FUNC_0 (VAR_1, 0, VAR_2);
  VAR_1->num_sections = VAR_0;

  return VAR_1;
}
