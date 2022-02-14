
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iavf_sc {int dummy; } ;
struct iavf_mac_filter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iavf_mac_filter* FUNC_0 (struct iavf_sc*,int *) ;

__attribute__((used)) static int
FUNC_1(struct iavf_sc *VAR_2, u8 *VAR_3)
{
 struct iavf_mac_filter *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_4->flags |= VAR_1;
 return (0);
}
