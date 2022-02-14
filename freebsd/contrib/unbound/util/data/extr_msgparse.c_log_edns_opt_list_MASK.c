
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edns_option {struct edns_option* next; int opt_len; int opt_data; int opt_code; } ;
typedef int str ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;


 int FUNC_0 (char**,size_t*,int ,int ,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int VAR_0 ;

void
FUNC_2(enum verbosity_value VAR_1, const char* VAR_2,
 struct edns_option* VAR_3)
{
 if(VAR_0 >= VAR_1 && VAR_3) {
  char VAR_4[128], *VAR_5;
  size_t VAR_6;
  FUNC_1(VAR_1, "%s", VAR_2);
  while(VAR_3) {
   VAR_5 = VAR_4;
   VAR_6 = sizeof(VAR_4);
   (void)FUNC_0(&VAR_5, &VAR_6, VAR_3->opt_code,
    VAR_3->opt_data, VAR_3->opt_len);
   FUNC_1(VAR_1, "  %s", VAR_4);
   VAR_3 = VAR_3->next;
  }
 }
}
