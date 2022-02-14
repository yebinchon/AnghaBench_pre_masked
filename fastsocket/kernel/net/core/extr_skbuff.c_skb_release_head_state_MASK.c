
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ tc_verd; scalar_t__ tc_index; int nf_bridge; int nfct_reasm; int nfct; int (* destructor ) (struct sk_buff*) ;int sp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_0)
{
 FUNC_6(VAR_0);



 if (VAR_0->destructor) {
  FUNC_0(FUNC_1());
  VAR_0->destructor(VAR_0);
 }
}
