
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,struct futx const*,int) ;

__attribute__((used)) static void
FUNC_3(const struct futx *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_3, VAR_0|VAR_1|VAR_2, 0644);
 if (VAR_5 < 0)
  return;
 FUNC_2(VAR_5, VAR_4, sizeof(*VAR_4));
 FUNC_0(VAR_5);
}
