
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct page* FUNC_1 (int ,int ,struct vm_area_struct*,unsigned long,int) ;

__attribute__((used)) static inline struct page *FUNC_2(int VAR_1,
           struct vm_area_struct *VAR_2,
           unsigned long VAR_3, int VAR_4,
           gfp_t VAR_5)
{
 return FUNC_1(FUNC_0(VAR_1, VAR_5),
          VAR_0, VAR_2, VAR_3, VAR_4);
}
