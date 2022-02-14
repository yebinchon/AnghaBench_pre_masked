
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_section {int section_mem_map; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mem_section *VAR_1)
{
 return (VAR_1->section_mem_map >> VAR_0);
}
