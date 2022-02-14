
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int const index; } ;
typedef int s64 ;
typedef int loff_t ;


 int const VAR_0 ;
 int FUNC_0 (struct page*,int const) ;

__attribute__((used)) static inline void FUNC_1(struct page *VAR_1,
  const loff_t VAR_2, const s64 VAR_3)
{
 if ((VAR_1->index >= (VAR_3 >> VAR_0)) &&
   (VAR_3 < VAR_2))
  FUNC_0(VAR_1, VAR_3);
 return;
}
