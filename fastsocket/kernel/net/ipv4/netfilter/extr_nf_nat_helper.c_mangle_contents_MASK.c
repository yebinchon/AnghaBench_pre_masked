
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ network_header; scalar_t__ tail; } ;
struct TYPE_3__ {int tot_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned char*,char const*,unsigned int) ;
 int FUNC_6 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_7 (char*,unsigned int,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 unsigned char* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct sk_buff *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3,
       const char *VAR_4,
       unsigned int VAR_5)
{
 unsigned char *VAR_6;

 FUNC_0(FUNC_8(VAR_0));
 VAR_6 = FUNC_9(VAR_0) + VAR_1;


 FUNC_6(VAR_6 + VAR_2 + VAR_5,
  VAR_6 + VAR_2 + VAR_3,
  VAR_0->tail - (VAR_0->network_header + VAR_1 +
        VAR_2 + VAR_3));


 FUNC_5(VAR_6 + VAR_2, VAR_4, VAR_5);


 if (VAR_5 > VAR_3) {
  FUNC_7("nf_nat_mangle_packet: Extending packet by "
    "%u from %u bytes\n", VAR_5 - VAR_3, VAR_0->len);
  FUNC_10(VAR_0, VAR_5 - VAR_3);
 } else {
  FUNC_7("nf_nat_mangle_packet: Shrinking packet from "
    "%u from %u bytes\n", VAR_3 - VAR_5, VAR_0->len);
  FUNC_1(VAR_0, VAR_0->len + VAR_5 - VAR_3);
 }


 FUNC_3(VAR_0)->tot_len = FUNC_2(VAR_0->len);
 FUNC_4(FUNC_3(VAR_0));
}
