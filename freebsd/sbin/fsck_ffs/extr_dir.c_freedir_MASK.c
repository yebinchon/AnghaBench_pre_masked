
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef scalar_t__ ino_t ;


 scalar_t__ FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 union dinode* FUNC_3 (scalar_t__) ;
 int FUNC_4 (union dinode*) ;

__attribute__((used)) static void
FUNC_5(ino_t VAR_1, ino_t VAR_2)
{
 union dinode *VAR_3;

 if (VAR_1 != VAR_2) {
  VAR_3 = FUNC_3(VAR_2);
  FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_3, VAR_0) - 1);
  FUNC_4(VAR_3);
 }
 FUNC_2(VAR_1);
}
