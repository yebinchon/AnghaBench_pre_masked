
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 struct sk_buff* FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct sk_buff *FUNC_3(unsigned int VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned int VAR_4;





 VAR_4 = FUNC_2(VAR_2, VAR_1);
 VAR_3 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_3) {
  FUNC_0("ipt_ULOG: can't alloc whole buffer %ub!\n", VAR_4);

  if (VAR_4 > VAR_2) {



   VAR_3 = FUNC_1(VAR_2, VAR_0);
   if (!VAR_3)
    FUNC_0("ipt_ULOG: can't even allocate %ub\n",
           VAR_2);
  }
 }

 return VAR_3;
}
