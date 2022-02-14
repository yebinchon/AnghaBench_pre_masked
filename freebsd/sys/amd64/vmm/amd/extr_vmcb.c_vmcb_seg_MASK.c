
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcb_segment {int dummy; } ;
struct vmcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmcb_segment*,struct vmcb_segment*,int) ;
 struct vmcb_segment* FUNC_1 (struct vmcb*,int) ;

int
FUNC_2(struct vmcb *VAR_1, int VAR_2, struct vmcb_segment *VAR_3)
{
 struct vmcb_segment *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, VAR_3, sizeof(struct vmcb_segment));
  return (0);
 } else {
  return (VAR_0);
 }
}
