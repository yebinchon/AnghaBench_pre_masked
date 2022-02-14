
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int mapping; } ;
struct mem_cgroup {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (struct anon_vma*) ;
 int FUNC_7 (struct anon_vma*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct mem_cgroup*,struct page*,struct page*,int) ;
 int FUNC_10 (struct page*,struct page*,struct mem_cgroup**) ;
 int FUNC_11 (struct page*,struct page*,int,int) ;
 scalar_t__ FUNC_12 (struct page*) ;
 struct anon_vma* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct anon_vma*) ;
 int FUNC_16 (struct page*,struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,int) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct page *VAR_10, struct page *VAR_11,
   int VAR_12, bool VAR_13, enum migrate_mode VAR_14)
{
 int VAR_15 = -VAR_0;
 int VAR_16 = 1;
 int VAR_17 = 0;
 struct mem_cgroup *VAR_18 = ((void*)0);
 struct anon_vma *VAR_19 = ((void*)0);
 if (VAR_9->flags & VAR_5)
  VAR_12 = 0;


 VAR_15 = -VAR_0;

 if (!FUNC_19(VAR_10)) {
  if (!VAR_12 || VAR_14 == VAR_3)
   goto out;
  FUNC_8(VAR_10);
 }


 VAR_17 = FUNC_10(VAR_10, VAR_11, &VAR_18);
 if (VAR_17 == -VAR_2) {
  VAR_15 = -VAR_2;
  goto unlock;
 }
 FUNC_0(VAR_17);

 if (FUNC_4(VAR_10)) {






  if (VAR_14 != VAR_4) {
   VAR_15 = -VAR_1;
   goto uncharge;
  }
  if (!VAR_12)
   goto uncharge;
  FUNC_21(VAR_10);
 }
 if (FUNC_1(VAR_10) && !FUNC_2(VAR_10)) {




  VAR_19 = FUNC_13(VAR_10);
  if (VAR_19) {





   FUNC_7(VAR_19);
   FUNC_15(VAR_19);
  }
  else if (FUNC_3(VAR_10)) {
   VAR_16 = 0;
  } else {
   goto uncharge;
  }
 }
 if (!VAR_10->mapping) {
  FUNC_5(FUNC_1(VAR_10));
  if (FUNC_12(VAR_10)) {
   FUNC_17(VAR_10);
   goto uncharge;
  }
  goto skip_unmap;
 }


 FUNC_18(VAR_10, VAR_8|VAR_7|VAR_6);

skip_unmap:
 if (!FUNC_14(VAR_10))
  VAR_15 = FUNC_11(VAR_11, VAR_10, VAR_16, VAR_14);

 if (VAR_15 && VAR_16)
  FUNC_16(VAR_10, VAR_10);


 if (VAR_19)
  FUNC_6(VAR_19);

uncharge:
 if (!VAR_17)
  FUNC_9(VAR_18, VAR_10, VAR_11, VAR_15 == 0);
unlock:
 FUNC_20(VAR_10);
out:
 return VAR_15;
}
