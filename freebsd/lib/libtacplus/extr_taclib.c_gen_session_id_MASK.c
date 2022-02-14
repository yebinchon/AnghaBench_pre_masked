
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_msg {int* session_id; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct tac_msg *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0();
 VAR_0->session_id[0] = VAR_1 >> 8;
 VAR_0->session_id[1] = VAR_1;
 VAR_1 = FUNC_0();
 VAR_0->session_id[2] = VAR_1 >> 8;
 VAR_0->session_id[3] = VAR_1;
}
