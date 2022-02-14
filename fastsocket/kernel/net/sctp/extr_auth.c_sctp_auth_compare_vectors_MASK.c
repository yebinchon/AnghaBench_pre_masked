
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_auth_bytes {int len; scalar_t__* data; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct sctp_auth_bytes *VAR_0,
         struct sctp_auth_bytes *VAR_1)
{
 int VAR_2;
 int VAR_3;
 const __u8 *VAR_4;

 VAR_2 = VAR_0->len - VAR_1->len;
 if (VAR_2) {
  VAR_4 = (VAR_2 > 0) ? VAR_0->data : VAR_1->data;





  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++ ) {
   if (VAR_4[VAR_3] != 0)
    return VAR_2;
  }
 }


 return FUNC_1(VAR_0->data, VAR_1->data, VAR_0->len);
}
