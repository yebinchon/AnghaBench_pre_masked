
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct iavf_sc {int promisc_flags; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct iavf_sc*,int ) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 struct ifnet* FUNC_2 (int ) ;
 struct iavf_sc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(if_ctx_t VAR_6, int VAR_7)
{
 struct iavf_sc *VAR_8 = FUNC_3(VAR_6);
 struct ifnet *VAR_9 = FUNC_2(VAR_6);

 VAR_8->promisc_flags = 0;

 if (VAR_7 & VAR_3 || FUNC_1(VAR_9) >=
     VAR_5)
  VAR_8->promisc_flags |= VAR_0;
 if (VAR_7 & VAR_4)
  VAR_8->promisc_flags |= VAR_1;

 FUNC_0(VAR_8, VAR_2);

 return (0);
}
