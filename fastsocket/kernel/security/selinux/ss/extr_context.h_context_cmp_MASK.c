
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ len; scalar_t__ user; scalar_t__ role; scalar_t__ type; int str; } ;


 scalar_t__ FUNC_0 (struct context*,struct context*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct context *VAR_0, struct context *VAR_1)
{
 if (VAR_0->len && VAR_1->len)
  return (VAR_0->len == VAR_1->len && !FUNC_1(VAR_0->str, VAR_1->str));
 if (VAR_0->len || VAR_1->len)
  return 0;
 return ((VAR_0->user == VAR_1->user) &&
  (VAR_0->role == VAR_1->role) &&
  (VAR_0->type == VAR_1->type) &&
  FUNC_0(VAR_0, VAR_1));
}
