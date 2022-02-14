
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {scalar_t__ order; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_5 ;
 int FUNC_3 (struct hstate*) ;
 int FUNC_4 (struct hstate*,struct page*,int) ;

__attribute__((used)) static struct page *FUNC_5(struct hstate *VAR_6, int VAR_7)
{
 struct page *VAR_8;

 if (VAR_6->order >= VAR_0)
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_7,
  VAR_5|VAR_1|VAR_4|
      VAR_3|VAR_2,
  FUNC_3(VAR_6));
 if (VAR_8) {
  if (FUNC_2(VAR_8)) {
   FUNC_0(VAR_8, FUNC_3(VAR_6));
   return ((void*)0);
  }
  FUNC_4(VAR_6, VAR_8, VAR_7);
 }

 return VAR_8;
}
