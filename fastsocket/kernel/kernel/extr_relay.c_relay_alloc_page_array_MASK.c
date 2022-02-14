
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct page** FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct page**,int ,size_t) ;
 struct page** FUNC_2 (size_t) ;

__attribute__((used)) static struct page **FUNC_3(unsigned int VAR_2)
{
 struct page **VAR_3;
 size_t VAR_4 = VAR_2 * sizeof(struct page *);

 if (VAR_4 > VAR_1) {
  VAR_3 = FUNC_2(VAR_4);
  if (VAR_3)
   FUNC_1(VAR_3, 0, VAR_4);
 } else {
  VAR_3 = FUNC_0(VAR_4, VAR_0);
 }
 return VAR_3;
}
