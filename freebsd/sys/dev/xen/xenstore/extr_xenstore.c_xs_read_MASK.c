
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xs_transaction {int dummy; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 struct sbuf* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct xs_transaction,int ,int ,int *,void**) ;

int
FUNC_4(struct xs_transaction VAR_1, const char *VAR_2, const char *VAR_3,
    u_int *VAR_4, void **VAR_5)
{
 struct sbuf *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 VAR_8 = FUNC_3(VAR_1, VAR_0, FUNC_0(VAR_6), VAR_4, &VAR_7);
 FUNC_1(VAR_6);
 if (VAR_8)
  return (VAR_8);
 *VAR_5 = VAR_7;
 return (0);
}
