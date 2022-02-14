
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {int free_huge_pages_node; } ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hstate*,long) ;
 int VAR_1 ;
 int FUNC_2 (struct hstate*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hstate *VAR_2, long VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_3(&VAR_1);
 if (VAR_3 > 0) {
  if (FUNC_1(VAR_2, VAR_3) < 0)
   goto out;

  if (VAR_3 > FUNC_0(VAR_2->free_huge_pages_node)) {
   FUNC_2(VAR_2, VAR_3);
   goto out;
  }
 }

 VAR_4 = 0;
 if (VAR_3 < 0)
  FUNC_2(VAR_2, (unsigned long) -VAR_3);

out:
 FUNC_4(&VAR_1);
 return VAR_4;
}
