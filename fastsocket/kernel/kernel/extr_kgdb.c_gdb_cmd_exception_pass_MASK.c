
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_state {int pass_exception; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct kgdb_state *VAR_4)
{



 if (VAR_2[1] == '0' && VAR_2[2] == '9') {

  VAR_4->pass_exception = 1;
  VAR_2[0] = 'c';

 } else if (VAR_2[1] == '1' && VAR_2[2] == '5') {

  VAR_4->pass_exception = 1;
  VAR_2[0] = 'D';
  FUNC_1();
  VAR_1 = 0;
  return 1;

 } else {
  FUNC_0(VAR_3, -VAR_0);
  return 0;
 }


 return -1;
}
