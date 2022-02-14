
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 struct page* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct page * FUNC_2(swp_entry_t VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_1(&VAR_2, VAR_3.val);

 if (VAR_4)
  FUNC_0(VAR_0);

 FUNC_0(VAR_1);
 return VAR_4;
}
