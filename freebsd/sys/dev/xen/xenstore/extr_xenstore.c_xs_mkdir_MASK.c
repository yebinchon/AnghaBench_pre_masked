
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_transaction {int dummy; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 struct sbuf* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct xs_transaction,int ,int ,int *,int *) ;

int
FUNC_4(struct xs_transaction VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct sbuf *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 VAR_5 = FUNC_3(VAR_1, VAR_0, FUNC_0(VAR_4), ((void*)0), ((void*)0));
 FUNC_1(VAR_4);

 return (VAR_5);
}
