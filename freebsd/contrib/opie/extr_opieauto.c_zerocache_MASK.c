
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachedotp {struct cachedotp* next; } ;


 struct cachedotp* VAR_0 ;
 int FUNC_0 (struct cachedotp*,int ,int) ;

void FUNC_1(void)
{
  struct cachedotp *VAR_1 = VAR_0, *VAR_2;

  while(VAR_1) {
    VAR_2 = VAR_1->next;
    FUNC_0(VAR_1, 0, sizeof(struct cachedotp));
    VAR_1 = VAR_2;
  };
}
