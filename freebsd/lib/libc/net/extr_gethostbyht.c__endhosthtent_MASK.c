
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent_data {int * hostf; int stayopen; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct hostent_data *VAR_0)
{
 if (VAR_0->hostf && !VAR_0->stayopen) {
  (void) FUNC_0(VAR_0->hostf);
  VAR_0->hostf = ((void*)0);
 }
}
