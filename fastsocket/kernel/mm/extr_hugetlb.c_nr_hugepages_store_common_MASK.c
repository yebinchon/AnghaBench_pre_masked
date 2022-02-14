
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct hstate {scalar_t__ order; int max_huge_pages; scalar_t__* nr_huge_pages_node; scalar_t__ nr_huge_pages; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 struct hstate* FUNC_4 (struct kobject*,int*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (struct hstate*,unsigned long,int *) ;
 int FUNC_6 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_7(bool VAR_9,
   struct kobject *VAR_10, struct kobj_attribute *VAR_11,
   const char *VAR_12, size_t VAR_13)
{
 int VAR_14;
 int VAR_15;
 unsigned long VAR_16;
 struct hstate *VAR_17;
 FUNC_0(VAR_7, VAR_8, VAR_1 | VAR_5);

 VAR_14 = FUNC_6(VAR_12, 10, &VAR_16);
 if (VAR_14)
  goto out;

 VAR_17 = FUNC_4(VAR_10, &VAR_15);
 if (VAR_17->order >= VAR_2) {
  VAR_14 = -VAR_0;
  goto out;
 }

 if (VAR_15 == VAR_3) {



  if (!(VAR_9 &&
    FUNC_2(VAR_8))) {
   FUNC_1(VAR_8);
   VAR_8 = &VAR_6[VAR_4];
  }
 } else if (VAR_8) {




  VAR_16 += VAR_17->nr_huge_pages - VAR_17->nr_huge_pages_node[VAR_15];
  FUNC_3(VAR_8, VAR_15);
 } else
  VAR_8 = &VAR_6[VAR_4];

 VAR_17->max_huge_pages = FUNC_5(VAR_17, VAR_16, VAR_8);

 if (VAR_8 != &VAR_6[VAR_4])
  FUNC_1(VAR_8);

 return VAR_13;
out:
 FUNC_1(VAR_8);
 return VAR_14;
}
