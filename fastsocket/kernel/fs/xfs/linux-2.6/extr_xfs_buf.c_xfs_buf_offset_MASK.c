
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_caddr_t ;
struct TYPE_4__ {int b_flags; struct page** b_pages; scalar_t__ b_offset; } ;
typedef TYPE_1__ xfs_buf_t ;
struct page {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct page*) ;

xfs_caddr_t
FUNC_2(
 xfs_buf_t *VAR_3,
 size_t VAR_4)
{
 struct page *VAR_5;

 if (VAR_3->b_flags & VAR_2)
  return FUNC_0(VAR_3) + VAR_4;

 VAR_4 += VAR_3->b_offset;
 VAR_5 = VAR_3->b_pages[VAR_4 >> VAR_0];
 return (xfs_caddr_t)FUNC_1(VAR_5) + (VAR_4 & (VAR_1-1));
}
