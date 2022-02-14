
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int output; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct bufferevent *VAR_1, void *VAR_2)
{
 FUNC_0(FUNC_2(VAR_1->output) <= 100);
 if (FUNC_2(VAR_1->output) == 0) {
  FUNC_1(VAR_1->output, FUNC_2(VAR_1->output));
  VAR_0++;
 }
}
