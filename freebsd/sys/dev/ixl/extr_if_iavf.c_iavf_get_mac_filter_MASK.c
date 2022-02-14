
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_sc {int mac_filters; } ;
struct iavf_mac_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct iavf_mac_filter*,int ) ;
 struct iavf_mac_filter* FUNC_1 (int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static struct iavf_mac_filter *
FUNC_2(struct iavf_sc *VAR_4)
{
 struct iavf_mac_filter *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct iavf_mac_filter),
     VAR_0, VAR_1 | VAR_2);
 if (VAR_5)
  FUNC_0(VAR_4->mac_filters, VAR_5, VAR_3);

 return (VAR_5);
}
