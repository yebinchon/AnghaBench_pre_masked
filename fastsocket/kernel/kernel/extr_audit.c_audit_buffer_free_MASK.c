
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int list; scalar_t__ skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct audit_buffer *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_4)
  return;

 if (VAR_4->skb)
  FUNC_1(VAR_4->skb);

 FUNC_3(&VAR_3, VAR_5);
 if (VAR_2 > VAR_0)
  FUNC_0(VAR_4);
 else {
  VAR_2++;
  FUNC_2(&VAR_4->list, &VAR_1);
 }
 FUNC_4(&VAR_3, VAR_5);
}
