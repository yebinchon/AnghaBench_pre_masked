
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section_list {int isid; int section; } ;
struct pt_section {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_section_list*) ;
 struct pt_section_list* FUNC_1 (int) ;
 int FUNC_2 (struct pt_section_list*,int ,int) ;
 int FUNC_3 (int *,struct pt_section*,struct pt_asid const*,int ,int ,int ) ;
 int FUNC_4 (struct pt_section*) ;

__attribute__((used)) static struct pt_section_list *FUNC_5(struct pt_section *VAR_0,
        const struct pt_asid *VAR_1,
        uint64_t VAR_2,
        uint64_t VAR_3,
        uint64_t VAR_4, int VAR_5)
{
 struct pt_section_list *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 VAR_7 = FUNC_4(VAR_0);
 if (VAR_7 < 0)
  goto out_mem;

 FUNC_3(&VAR_6->section, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_6->isid = VAR_5;

 return VAR_6;

out_mem:
 FUNC_0(VAR_6);
 return ((void*)0);
}
