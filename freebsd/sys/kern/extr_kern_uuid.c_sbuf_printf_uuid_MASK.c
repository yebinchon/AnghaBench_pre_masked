
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid {int dummy; } ;
struct sbuf {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct sbuf*,char*) ;
 int FUNC_1 (char*,int,struct uuid*) ;

int
FUNC_2(struct sbuf *VAR_0, struct uuid *VAR_1)
{
 char VAR_2[38];

 FUNC_1(VAR_2, sizeof(VAR_2), VAR_1);
 return (FUNC_0(VAR_0, VAR_2));
}
