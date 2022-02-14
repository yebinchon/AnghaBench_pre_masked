
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {int read; int unmap; int mapping; struct ifix_status* status; int mcount; } ;
struct ifix_status {int mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct pt_section *VAR_3)
{
 struct ifix_status *VAR_4;
 uint16_t VAR_5;

 if (!VAR_3)
  return -VAR_2;

 VAR_5 = VAR_3->mcount++;
 if (VAR_5)
  return 0;

 if (VAR_3->mapping)
  return -VAR_2;

 VAR_4 = VAR_3->status;
 if (!VAR_4)
  return -VAR_2;

 VAR_3->mapping = VAR_4->mapping;
 VAR_3->unmap = VAR_1;
 VAR_3->read = VAR_0;

 return 0;
}
