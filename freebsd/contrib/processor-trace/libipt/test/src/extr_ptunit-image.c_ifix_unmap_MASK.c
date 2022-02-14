
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {int * mapping; scalar_t__ mcount; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pt_section *VAR_1)
{
 uint16_t VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->mcount;
 if (!VAR_2)
  return -VAR_0;

 if (!VAR_1->mapping)
  return -VAR_0;

 VAR_2 = --VAR_1->mcount;
 if (!VAR_2)
  VAR_1->mapping = ((void*)0);

 return 0;
}
