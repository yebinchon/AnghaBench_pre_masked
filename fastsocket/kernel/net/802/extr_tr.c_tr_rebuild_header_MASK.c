
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trllc {scalar_t__ ethertype; } ;
struct trh_hdr {int daddr; } ;
struct sk_buff {struct net_device* dev; scalar_t__ data; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sk_buff*,struct trh_hdr*,struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1)
{
 struct trh_hdr *VAR_2=(struct trh_hdr *)VAR_1->data;
 struct trllc *VAR_3=(struct trllc *)(VAR_1->data+sizeof(struct trh_hdr));
 struct net_device *VAR_4 = VAR_1->dev;





 if(VAR_3->ethertype != FUNC_1(VAR_0)) {
  FUNC_3("tr_rebuild_header: Don't know how to resolve type %04X addresses ?\n", FUNC_2(VAR_3->ethertype));
  return 0;
 }







 {
  FUNC_4(VAR_1,VAR_2,VAR_4);
  return 0;
 }
}
