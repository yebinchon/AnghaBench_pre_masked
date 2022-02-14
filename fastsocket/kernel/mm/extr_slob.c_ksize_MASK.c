
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t private; } ;
struct slob_page {TYPE_1__ page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 size_t FUNC_1 (unsigned int) ;
 void const* VAR_3 ;
 scalar_t__ FUNC_2 (struct slob_page*) ;
 int FUNC_3 (int ,int ) ;
 struct slob_page* FUNC_4 (void const*) ;
 scalar_t__ FUNC_5 (int) ;

size_t FUNC_6(const void *VAR_4)
{
 struct slob_page *VAR_5;

 FUNC_0(!VAR_4);
 if (FUNC_5(VAR_4 == VAR_3))
  return 0;

 VAR_5 = FUNC_4(VAR_4);
 if (FUNC_2(VAR_5)) {
  int VAR_6 = FUNC_3(VAR_0, VAR_1);
  unsigned int *VAR_7 = (unsigned int *)(VAR_4 - VAR_6);
  return FUNC_1(*VAR_7) * VAR_2;
 } else
  return VAR_5->page.private;
}
