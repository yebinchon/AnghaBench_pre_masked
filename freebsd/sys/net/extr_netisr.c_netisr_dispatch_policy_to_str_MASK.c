
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netisr_dispatch_table_entry {size_t ndte_policy; char* ndte_policy_str; } ;


 struct netisr_dispatch_table_entry* VAR_0 ;
 size_t FUNC_0 (struct netisr_dispatch_table_entry*) ;
 int FUNC_1 (char*,size_t,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(u_int VAR_1, char *VAR_2,
    u_int VAR_3)
{
 const struct netisr_dispatch_table_entry *VAR_4;
 const char *VAR_5;
 u_int VAR_6;

 VAR_5 = "unknown";
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_4 = &VAR_0[VAR_6];
  if (VAR_4->ndte_policy == VAR_1) {
   VAR_5 = VAR_4->ndte_policy_str;
   break;
  }
 }
 FUNC_1(VAR_2, VAR_3, "%s", VAR_5);
}
