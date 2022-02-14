
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int* data; } ;
struct iphdr {int ihl; } ;
struct gre_protocol {int (* err_handler ) (struct sk_buff*,int ) ;} ;


 size_t VAR_0 ;
 int * VAR_1 ;
 struct gre_protocol* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_2, u32 VAR_3)
{
 const struct gre_protocol *VAR_4;
 const struct iphdr *VAR_5 = (const struct iphdr *)VAR_2->data;
 u8 VAR_6 = VAR_2->data[(VAR_5->ihl<<2) + 1]&0x7f;

 if (VAR_6 >= VAR_0)
  return;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1[VAR_6]);
 if (VAR_4 && VAR_4->err_handler)
  VAR_4->err_handler(VAR_2, VAR_3);
 FUNC_2();
}
