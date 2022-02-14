
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tube {int sr; int sw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tube*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct tube*) ;

struct tube* FUNC_7(void)
{
 struct tube* VAR_3 = (struct tube*)FUNC_0(1, sizeof(*VAR_3));
 int VAR_4[2];
 if(!VAR_3) {
  int VAR_5 = VAR_2;
  FUNC_3("tube_create: out of memory");
  VAR_2 = VAR_5;
  return ((void*)0);
 }
 VAR_3->sr = -1;
 VAR_3->sw = -1;
 if(FUNC_4(VAR_0, VAR_1, 0, VAR_4) == -1) {
  int VAR_6 = VAR_2;
  FUNC_3("socketpair: %s", FUNC_5(VAR_2));
  FUNC_2(VAR_3);
  VAR_2 = VAR_6;
  return ((void*)0);
 }
 VAR_3->sr = VAR_4[0];
 VAR_3->sw = VAR_4[1];
 if(!FUNC_1(VAR_3->sr) || !FUNC_1(VAR_3->sw)) {
  int VAR_7 = VAR_2;
  FUNC_3("tube: cannot set nonblocking");
  FUNC_6(VAR_3);
  VAR_2 = VAR_7;
  return ((void*)0);
 }
 return VAR_3;
}
