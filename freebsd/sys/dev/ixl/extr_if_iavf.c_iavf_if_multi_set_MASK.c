
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_sc {int promisc_flags; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iavf_sc*) ;
 int VAR_4 ;
 int FUNC_3 (struct iavf_sc*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct iavf_sc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct iavf_sc* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(if_ctx_t VAR_5)
{
 struct iavf_sc *VAR_6 = FUNC_7(VAR_5);

 FUNC_0("iavf_if_multi_set: begin");

 if (FUNC_1(FUNC_5(FUNC_6(VAR_5)) >=
     VAR_3)) {

  FUNC_2(VAR_6);
  VAR_6->promisc_flags |= VAR_0;
  FUNC_3(VAR_6, VAR_2);
  return;
 }


 FUNC_2(VAR_6);


 if (FUNC_4(FUNC_6(VAR_5), VAR_4, VAR_6) >
     0)
  FUNC_3(VAR_6, VAR_1);
}
