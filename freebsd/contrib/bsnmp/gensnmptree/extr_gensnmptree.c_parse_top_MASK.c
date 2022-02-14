
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int is_enum; int is_bits; int syntax; } ;
struct node {int dummy; } ;
typedef enum tok { ____Placeholder_tok } tok ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 struct type* FUNC_2 (int ) ;
 struct node* FUNC_3 (int) ;
 int FUNC_4 (int*,struct type*,int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct node *
FUNC_7(enum tok VAR_8)
{
 struct type *VAR_9;

 if (VAR_8 == '(')
  return (FUNC_3(VAR_8));

 if (VAR_8 == VAR_5) {
  if (FUNC_0() != VAR_4)
   FUNC_6("type name expected after typedef");

  VAR_9 = FUNC_2(VAR_6);

  VAR_8 = FUNC_0();
  VAR_9->is_enum = (VAR_8 == VAR_1);
  VAR_9->is_bits = (VAR_8 == VAR_0);

  VAR_9->syntax = FUNC_4(&VAR_8, VAR_9, ((void*)0), ((void*)0));
  FUNC_5(VAR_8);

  return (((void*)0));
 }

 if (VAR_8 == VAR_3) {
  if (FUNC_0() != VAR_2)
   FUNC_6("filename expected in include directive");

  FUNC_1(VAR_6, VAR_7);
  return (((void*)0));
 }

 FUNC_6("'(' or 'typedef' expected");
}
