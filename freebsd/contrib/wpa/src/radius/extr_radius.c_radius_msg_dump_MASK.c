
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radius_msg {size_t attr_used; TYPE_1__* hdr; } ;
struct radius_attr_hdr {int dummy; } ;
struct TYPE_2__ {int length; int identifier; int code; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct radius_attr_hdr* FUNC_2 (struct radius_msg*,size_t) ;
 int FUNC_3 (struct radius_attr_hdr*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;

void FUNC_5(struct radius_msg *VAR_1)
{
 size_t VAR_2;

 FUNC_4(VAR_0, "RADIUS message: code=%d (%s) identifier=%d length=%d",
     VAR_1->hdr->code, FUNC_1(VAR_1->hdr->code),
     VAR_1->hdr->identifier, FUNC_0(VAR_1->hdr->length));

 for (VAR_2 = 0; VAR_2 < VAR_1->attr_used; VAR_2++) {
  struct radius_attr_hdr *VAR_3 = FUNC_2(VAR_1, VAR_2);
  FUNC_3(VAR_3);
 }
}
