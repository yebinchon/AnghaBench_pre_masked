
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_list {scalar_t__ len; int addr; } ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;


 int FUNC_0 (int,char const*,int *,scalar_t__) ;
 int FUNC_1 (int,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(enum verbosity_value VAR_0, const char* VAR_1, struct sock_list* VAR_2)
{
 if(VAR_2->len)
  FUNC_0(VAR_0, VAR_1, &VAR_2->addr, VAR_2->len);
 else FUNC_1(VAR_0, "%s cache", VAR_1);
}
