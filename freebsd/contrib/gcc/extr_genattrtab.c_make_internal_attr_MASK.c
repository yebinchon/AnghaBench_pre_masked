
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_desc {int is_numeric; int is_special; scalar_t__ default_val; scalar_t__ is_const; } ;
typedef int rtx ;


 int VAR_0 ;
 struct attr_desc* FUNC_0 (char const**,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,struct attr_desc*,int) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_1, rtx VAR_2, int VAR_3)
{
  struct attr_desc *VAR_4;

  VAR_4 = FUNC_0 (&VAR_1, 1);
  FUNC_1 (!VAR_4->default_val);

  VAR_4->is_numeric = 1;
  VAR_4->is_const = 0;
  VAR_4->is_special = (VAR_3 & VAR_0) != 0;
  VAR_4->default_val = FUNC_2 (VAR_2, VAR_4, -2);
}
