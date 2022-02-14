
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct af_iucv_trans_hdr {char* destUserID; char* destAppName; char* srcUserID; char* srcAppName; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 struct af_iucv_trans_hdr *VAR_2 =
    (struct af_iucv_trans_hdr *)VAR_1->data;
 char VAR_3[8];
 char VAR_4[8];

 FUNC_0(VAR_2->destUserID, sizeof(VAR_2->destUserID));
 FUNC_0(VAR_2->destAppName, sizeof(VAR_2->destAppName));
 FUNC_0(VAR_2->srcUserID, sizeof(VAR_2->srcUserID));
 FUNC_0(VAR_2->srcAppName, sizeof(VAR_2->srcAppName));
 FUNC_1(VAR_3, VAR_2->srcUserID, 8);
 FUNC_1(VAR_4, VAR_2->srcAppName, 8);
 FUNC_1(VAR_2->srcUserID, VAR_2->destUserID, 8);
 FUNC_1(VAR_2->srcAppName, VAR_2->destAppName, 8);
 FUNC_1(VAR_2->destUserID, VAR_3, 8);
 FUNC_1(VAR_2->destAppName, VAR_4, 8);
 FUNC_3(VAR_1, VAR_0);
 FUNC_2(VAR_1->data, 0, VAR_0);
}
