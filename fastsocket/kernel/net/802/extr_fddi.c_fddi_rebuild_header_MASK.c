
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ ethertype; } ;
struct TYPE_6__ {TYPE_2__ llc_snap; } ;
struct fddihdr {TYPE_3__ hdr; int daddr; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1)
{
 struct fddihdr *VAR_2 = (struct fddihdr *)VAR_1->data;







 {
  FUNC_3("%s: Don't know how to resolve type %04X addresses.\n",
         VAR_1->dev->name, FUNC_2(VAR_2->hdr.llc_snap.ethertype));
  return(0);
 }
}
