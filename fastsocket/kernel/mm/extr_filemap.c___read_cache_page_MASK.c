
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct page*,struct address_space*,int ,int ) ;
 struct page* FUNC_3 (struct address_space*,int ) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct page *FUNC_6(struct address_space *VAR_4,
    pgoff_t VAR_5,
    int (*VAR_6)(void *, struct page *),
    void *VAR_7,
    gfp_t VAR_8)
{
 struct page *VAR_9;
 int VAR_10;
repeat:
 VAR_9 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_9) {
  VAR_9 = FUNC_1(VAR_8 | VAR_3);
  if (!VAR_9)
   return FUNC_0(-VAR_1);
  VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_5, VAR_2);
  if (FUNC_5(VAR_10)) {
   FUNC_4(VAR_9);
   if (VAR_10 == -VAR_0)
    goto repeat;

   return FUNC_0(VAR_10);
  }
  VAR_10 = VAR_6(VAR_7, VAR_9);
  if (VAR_10 < 0) {
   FUNC_4(VAR_9);
   VAR_9 = FUNC_0(VAR_10);
  }
 }
 return VAR_9;
}
