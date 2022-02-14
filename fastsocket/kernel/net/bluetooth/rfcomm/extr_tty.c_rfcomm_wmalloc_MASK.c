
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rfcomm_dev {int dlc; int wmem_alloc; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (unsigned long,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct rfcomm_dev*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct rfcomm_dev *VAR_0, unsigned long VAR_1, gfp_t VAR_2)
{
 if (FUNC_1(&VAR_0->wmem_alloc) < FUNC_2(VAR_0->dlc)) {
  struct sk_buff *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_3(VAR_3, VAR_0);
   return VAR_3;
  }
 }
 return ((void*)0);
}
