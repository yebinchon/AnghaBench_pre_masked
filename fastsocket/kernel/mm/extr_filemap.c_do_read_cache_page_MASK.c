
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 struct page* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct address_space*,int ,int (*) (void*,struct page*),void*,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static struct page *FUNC_8(struct address_space *VAR_0,
    pgoff_t VAR_1,
    int (*VAR_2)(void *, struct page *),
    void *VAR_3,
    gfp_t VAR_4)

{
 struct page *VAR_5;
 int VAR_6;

retry:
 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_5;
 if (FUNC_2(VAR_5))
  goto out;

 FUNC_4(VAR_5);
 if (!VAR_5->mapping) {
  FUNC_7(VAR_5);
  FUNC_6(VAR_5);
  goto retry;
 }
 if (FUNC_2(VAR_5)) {
  FUNC_7(VAR_5);
  goto out;
 }
 VAR_6 = VAR_2(VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_6(VAR_5);
  return FUNC_0(VAR_6);
 }
out:
 FUNC_5(VAR_5);
 return VAR_5;
}
