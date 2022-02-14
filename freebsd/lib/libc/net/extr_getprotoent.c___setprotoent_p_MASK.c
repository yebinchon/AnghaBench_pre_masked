
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent_data {int stayopen; int * fp; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(int VAR_1, struct protoent_data *VAR_2)
{
 if (VAR_2->fp == ((void*)0))
  VAR_2->fp = FUNC_0(VAR_0, "re");
 else
  FUNC_1(VAR_2->fp);
 VAR_2->stayopen |= VAR_1;
}
