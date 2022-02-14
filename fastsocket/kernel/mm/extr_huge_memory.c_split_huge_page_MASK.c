
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct anon_vma {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_0 ;
 int FUNC_4 (struct page*,struct anon_vma*) ;
 int FUNC_5 (int ) ;
 struct anon_vma* FUNC_6 (struct page*) ;
 int FUNC_7 (struct anon_vma*) ;

int FUNC_8(struct page *VAR_1)
{
 struct anon_vma *VAR_2;
 int VAR_3 = 1;

 FUNC_0(!FUNC_1(VAR_1));
 VAR_2 = FUNC_6(VAR_1);
 if (!VAR_2)
  goto out;
 VAR_3 = 0;
 if (!FUNC_2(VAR_1))
  goto out_unlock;

 FUNC_0(!FUNC_3(VAR_1));
 FUNC_4(VAR_1, VAR_2);
 FUNC_5(VAR_0);

 FUNC_0(FUNC_2(VAR_1));
out_unlock:
 FUNC_7(VAR_2);
out:
 return VAR_3;
}
