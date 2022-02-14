
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* data; } ;
struct TYPE_2__ {scalar_t__ type; int length; } ;
typedef TYPE_1__ sctp_chunkhdr_t ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3)
{
 sctp_chunkhdr_t *VAR_4;
 __u8 *VAR_5;

 VAR_4 = (sctp_chunkhdr_t *) VAR_3->data;


 do {

  if (FUNC_1(VAR_4->length) < sizeof(sctp_chunkhdr_t))
   break;

  VAR_5 = ((__u8 *)VAR_4) + FUNC_0(FUNC_1(VAR_4->length));
  if (VAR_5 > FUNC_2(VAR_3))
   break;





  if (VAR_0 == VAR_4->type)
   goto discard;





  if (VAR_2 == VAR_4->type)
   goto discard;






  if (VAR_1 == VAR_4->type && (void *)VAR_4 != VAR_3->data)
   goto discard;

  VAR_4 = (sctp_chunkhdr_t *) VAR_5;
 } while (VAR_5 < FUNC_2(VAR_3));

 return 0;

discard:
 return 1;
}
