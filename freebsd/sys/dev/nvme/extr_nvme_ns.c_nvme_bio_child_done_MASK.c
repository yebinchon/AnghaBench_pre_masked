
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion {int dummy; } ;
struct bio {struct bio* bio_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int) ;
 scalar_t__ FUNC_2 (struct nvme_completion const*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, const struct nvme_completion *VAR_2)
{
 struct bio *VAR_3 = VAR_1;
 struct bio *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->bio_parent;
 FUNC_0(VAR_3);
 VAR_5 = FUNC_2(VAR_2) ? VAR_0 : 0;
 FUNC_1(VAR_4, VAR_5);
}
