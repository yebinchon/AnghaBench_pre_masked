
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct hlist_head*) ;

__attribute__((used)) static void FUNC_3(struct hlist_head *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = VAR_2 * sizeof(struct hlist_head);

 if (VAR_3 <= VAR_0)
  FUNC_2(VAR_1);
 else
  FUNC_0((unsigned long)VAR_1, FUNC_1(VAR_3));
}
