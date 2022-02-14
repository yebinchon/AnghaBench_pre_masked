
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_hash {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct auth_hash *VAR_4, void *VAR_5)
{

 if ((VAR_3 & VAR_2) != 0 &&
     (VAR_4->type == VAR_0 ||
      VAR_4->type == VAR_1)) {
  FUNC_0(VAR_5);
 }
}
