
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {unsigned long resv_huge_pages; scalar_t__ order; int surplus_huge_pages; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct hstate*,int *,int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(struct hstate *VAR_3,
     unsigned long VAR_4)
{
 unsigned long VAR_5;


 VAR_3->resv_huge_pages -= VAR_4;


 if (VAR_3->order >= VAR_0)
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_3->surplus_huge_pages);
 while (VAR_5--) {
  if (!FUNC_0(VAR_3, &VAR_2[VAR_1], 1))
   break;
 }
}
