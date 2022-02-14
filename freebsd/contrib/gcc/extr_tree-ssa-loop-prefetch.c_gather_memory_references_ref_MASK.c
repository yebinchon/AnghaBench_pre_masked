
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mem_ref_group {int dummy; } ;
struct loop {int dummy; } ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (struct loop*,int *,int *,int *,int *,int ) ;
 struct mem_ref_group* FUNC_1 (struct mem_ref_group**,int ,int ) ;
 int FUNC_2 (struct mem_ref_group*,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3 (struct loop *VAR_0, struct mem_ref_group **VAR_1,
         tree VAR_2, bool VAR_3, tree VAR_4)
{
  tree VAR_5;
  HOST_WIDE_INT VAR_6, VAR_7;
  struct mem_ref_group *VAR_8;

  if (!FUNC_0 (VAR_0, &VAR_2, &VAR_5, &VAR_6, &VAR_7, VAR_4))
    return;



  VAR_8 = FUNC_1 (VAR_1, VAR_5, VAR_6);
  FUNC_2 (VAR_8, VAR_4, VAR_2, VAR_7, VAR_3);
}
