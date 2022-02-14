
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zone {int * zonefile; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*) ;

int
FUNC_3(struct auth_zone* VAR_0, char* VAR_1)
{
 if(VAR_0->zonefile) FUNC_0(VAR_0->zonefile);
 if(VAR_1 == ((void*)0)) {
  VAR_0->zonefile = ((void*)0);
 } else {
  VAR_0->zonefile = FUNC_2(VAR_1);
  if(!VAR_0->zonefile) {
   FUNC_1("malloc failure");
   return 0;
  }
 }
 return 1;
}
