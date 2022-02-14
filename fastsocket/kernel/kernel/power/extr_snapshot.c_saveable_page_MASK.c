
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct zone* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 struct page* FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;

__attribute__((used)) static struct page *FUNC_10(struct zone *VAR_0, unsigned long VAR_1)
{
 struct page *VAR_2;

 if (!FUNC_7(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_6(VAR_1);
 if (FUNC_4(VAR_2) != VAR_0)
  return ((void*)0);

 FUNC_0(FUNC_1(VAR_2));

 if (FUNC_8(VAR_2) || FUNC_9(VAR_2))
  return ((void*)0);

 if (FUNC_2(VAR_2)
     && (!FUNC_3(VAR_2) || FUNC_5(VAR_1)))
  return ((void*)0);

 return VAR_2;
}
