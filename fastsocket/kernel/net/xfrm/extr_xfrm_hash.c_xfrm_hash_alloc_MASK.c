
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 struct hlist_head* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_5 ;
 struct hlist_head* FUNC_3 (unsigned int,int) ;

struct hlist_head *FUNC_4(unsigned int VAR_6)
{
 struct hlist_head *VAR_7;

 if (VAR_6 <= VAR_2)
  VAR_7 = FUNC_3(VAR_6, VAR_0);
 else if (VAR_5)
  VAR_7 = FUNC_1(VAR_6, VAR_0 | VAR_4, VAR_1);
 else
  VAR_7 = (struct hlist_head *)
   FUNC_0(VAR_0 | VAR_3 | VAR_4,
      FUNC_2(VAR_6));

 return VAR_7;
}
