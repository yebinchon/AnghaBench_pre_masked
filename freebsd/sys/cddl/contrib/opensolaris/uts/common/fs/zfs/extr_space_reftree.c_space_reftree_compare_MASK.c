
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sr_offset; } ;
typedef TYPE_1__ space_ref_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const space_ref_t *VAR_2 = (const space_ref_t *)VAR_0;
 const space_ref_t *VAR_3 = (const space_ref_t *)VAR_1;

 int VAR_4 = FUNC_0(VAR_2->sr_offset, VAR_3->sr_offset);
 if (FUNC_2(VAR_4))
  return (VAR_4);

 return (FUNC_1(VAR_2, VAR_3));
}
