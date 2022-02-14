
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_hdr {int dccph_doff; } ;


 int FUNC_0 (int) ;


 unsigned char VAR_0 ;
 int FUNC_1 (char*) ;
 struct dccp_hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2, int VAR_3,
      unsigned char **VAR_4, unsigned char *VAR_5)
{
 const struct dccp_hdr *VAR_6 = FUNC_2(VAR_2);
 unsigned char *VAR_7 = (unsigned char *)VAR_6 + FUNC_3(VAR_2);
 unsigned char *VAR_8;
 const unsigned char *VAR_9 = (unsigned char *)VAR_6 +
     (VAR_6->dccph_doff * 4);
 unsigned char VAR_10, VAR_11;
 unsigned char *VAR_12;

 FUNC_0(VAR_3 < 0);
 VAR_7 += VAR_3;
 VAR_8 = VAR_7;
 if (VAR_8 >= VAR_9)
  return -1;

 while (VAR_8 != VAR_9) {
  VAR_10 = *VAR_8++;
  VAR_11 = 0;
  VAR_12 = ((void*)0);


  if (VAR_10 > VAR_0) {
   if (VAR_8 == VAR_9)
    goto out_invalid_option;

   VAR_11 = *VAR_8++;
   if (VAR_11 < 3)
    goto out_invalid_option;




   VAR_11 -= 2;
   VAR_12 = VAR_8;
   VAR_8 += VAR_11;

   if (VAR_8 > VAR_9)
    goto out_invalid_option;
  }

  switch (VAR_10) {
  case 129:
  case 128:
   *VAR_4 = VAR_12;
   *VAR_5 = VAR_11;
   return VAR_3 + (VAR_8 - VAR_7);
  }
 }

 return -1;

out_invalid_option:
 FUNC_1("Invalid option - this should not happen (previous parsing)!");
 return -1;
}
