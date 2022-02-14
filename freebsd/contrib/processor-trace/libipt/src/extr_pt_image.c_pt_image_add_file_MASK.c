
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid*,struct pt_asid const*) ;
 int FUNC_1 (struct pt_image*,struct pt_section*,struct pt_asid*,int ,int ) ;
 int FUNC_2 (struct pt_section**,char const*,int ,int ) ;
 int FUNC_3 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_4(struct pt_image *VAR_1, const char *VAR_2,
        uint64_t VAR_3, uint64_t VAR_4,
        const struct pt_asid *VAR_5, uint64_t VAR_6)
{
 struct pt_section *VAR_7;
 struct pt_asid VAR_8;
 int VAR_9;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_0(&VAR_8, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = ((void*)0);
 VAR_9 = FUNC_2(&VAR_7, VAR_2, VAR_3, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_7, &VAR_8, VAR_6, 0);
 if (VAR_9 < 0) {
  (void) FUNC_3(VAR_7);
  return VAR_9;
 }


 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
