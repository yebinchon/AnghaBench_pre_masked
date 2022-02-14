
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edns_option {scalar_t__ opt_code; scalar_t__ opt_len; int opt_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(struct edns_option* VAR_0, struct edns_option* VAR_1)
{
 if(!VAR_0 && !VAR_1) return 0;
 if(!VAR_0) return -1;
 if(!VAR_1) return 1;
 FUNC_0(VAR_0 && VAR_1);
 if(VAR_0->opt_code != VAR_1->opt_code)
  return (int)VAR_1->opt_code - (int)VAR_0->opt_code;
 if(VAR_0->opt_len != VAR_1->opt_len)
  return (int)VAR_1->opt_len - (int)VAR_0->opt_len;
 if(VAR_0->opt_len != 0)
  return FUNC_1(VAR_0->opt_data, VAR_1->opt_data, VAR_0->opt_len);
 return 0;
}
