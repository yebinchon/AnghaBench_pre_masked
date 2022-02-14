
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int nodes; } ;
struct mempolicy {TYPE_1__ v; } ;


 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static unsigned FUNC_3(struct mempolicy *VAR_0,
  struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_0->v.nodes);
 unsigned VAR_4;
 int VAR_5;
 int VAR_6 = -1;

 if (!VAR_3)
  return FUNC_2();
 VAR_4 = (unsigned int)VAR_2 % VAR_3;
 VAR_5 = 0;
 do {
  VAR_6 = FUNC_0(VAR_6, VAR_0->v.nodes);
  VAR_5++;
 } while (VAR_5 <= VAR_4);
 return VAR_6;
}
