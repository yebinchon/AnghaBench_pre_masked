
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*,struct address_space*,int ,int) ;
 struct page* FUNC_2 (struct address_space*,int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct page*) ;

struct page *FUNC_8(struct address_space *VAR_4,
     pgoff_t VAR_5, unsigned VAR_6)
{
 int VAR_7;
 struct page *VAR_8;
 gfp_t VAR_9 = 0;
 if (VAR_6 & VAR_0)
  VAR_9 = VAR_3;
repeat:
 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (FUNC_3(VAR_8))
  goto found;

 VAR_8 = FUNC_0(FUNC_4(VAR_4) & ~VAR_9);
 if (!VAR_8)
  return ((void*)0);
 VAR_7 = FUNC_1(VAR_8, VAR_4, VAR_5,
      VAR_2 & ~VAR_9);
 if (FUNC_6(VAR_7)) {
  FUNC_5(VAR_8);
  if (VAR_7 == -VAR_1)
   goto repeat;
  return ((void*)0);
 }
found:
 FUNC_7(VAR_8);
 return VAR_8;
}
