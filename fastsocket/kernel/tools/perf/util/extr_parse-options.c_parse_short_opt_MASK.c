
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {scalar_t__* opt; } ;
struct option {scalar_t__ type; scalar_t__ short_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parse_opt_ctx_t*,struct option const*,int ) ;

__attribute__((used)) static int FUNC_1(struct parse_opt_ctx_t *VAR_2, const struct option *VAR_3)
{
 for (; VAR_3->type != VAR_0; VAR_3++) {
  if (VAR_3->short_name == *VAR_2->opt) {
   VAR_2->opt = VAR_2->opt[1] ? VAR_2->opt + 1 : ((void*)0);
   return FUNC_0(VAR_2, VAR_3, VAR_1);
  }
 }
 return -2;
}
