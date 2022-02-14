
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int destructor; void* sk; int truesize; } ;
struct rfcomm_dev {int wmem_alloc; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rfcomm_dev*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1, struct rfcomm_dev *VAR_2)
{
 FUNC_1(VAR_2);
 FUNC_0(VAR_1->truesize, &VAR_2->wmem_alloc);
 VAR_1->sk = (void *) VAR_2;
 VAR_1->destructor = VAR_0;
}
