
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {scalar_t__ order; scalar_t__ surplus_huge_pages; scalar_t__ nr_overcommit_huge_pages; int nr_huge_pages; int * surplus_huge_pages_node; int * nr_huge_pages_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*,int ) ;
 struct page* FUNC_2 (int,int ) ;
 struct page* FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct hstate*) ;
 int VAR_10 ;
 unsigned int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct page *FUNC_10(struct hstate *VAR_11, int VAR_12)
{
 struct page *VAR_13;
 unsigned int VAR_14;

 if (VAR_11->order >= VAR_2)
  return ((void*)0);
 FUNC_8(&VAR_10);
 if (VAR_11->surplus_huge_pages >= VAR_11->nr_overcommit_huge_pages) {
  FUNC_9(&VAR_10);
  return ((void*)0);
 } else {
  VAR_11->nr_huge_pages++;
  VAR_11->surplus_huge_pages++;
 }
 FUNC_9(&VAR_10);

 if (VAR_12 == VAR_3)
  VAR_13 = FUNC_2(VAR_9|VAR_4|
       VAR_6|VAR_5,
       FUNC_5(VAR_11));
 else
  VAR_13 = FUNC_3(VAR_12,
   VAR_9|VAR_4|VAR_7|
   VAR_6|VAR_5, FUNC_5(VAR_11));

 if (VAR_13 && FUNC_4(VAR_13)) {
  FUNC_1(VAR_13, FUNC_5(VAR_11));
  return ((void*)0);
 }

 FUNC_8(&VAR_10);
 if (VAR_13) {
  VAR_14 = FUNC_6(VAR_13);
  FUNC_7(VAR_13, VAR_8);



  VAR_11->nr_huge_pages_node[VAR_14]++;
  VAR_11->surplus_huge_pages_node[VAR_14]++;
  FUNC_0(VAR_0);
 } else {
  VAR_11->nr_huge_pages--;
  VAR_11->surplus_huge_pages--;
  FUNC_0(VAR_1);
 }
 FUNC_9(&VAR_10);

 return VAR_13;
}
