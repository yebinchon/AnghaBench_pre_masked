
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent_data {int stayopen; scalar_t__ hostf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(int VAR_1, struct hostent_data *VAR_2)
{
 if (!VAR_2->hostf)
  VAR_2->hostf = FUNC_0(VAR_0, "re");
 else
  FUNC_1(VAR_2->hostf);
 VAR_2->stayopen = VAR_1;
}
