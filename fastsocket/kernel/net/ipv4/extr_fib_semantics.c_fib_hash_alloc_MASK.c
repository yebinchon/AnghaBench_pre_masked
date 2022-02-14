
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 struct hlist_head* FUNC_2 (int,int) ;

__attribute__((used)) static struct hlist_head *FUNC_3(int VAR_3)
{
 if (VAR_3 <= VAR_1)
  return FUNC_2(VAR_3, VAR_0);
 else
  return (struct hlist_head *)
   FUNC_0(VAR_0 | VAR_2, FUNC_1(VAR_3));
}
