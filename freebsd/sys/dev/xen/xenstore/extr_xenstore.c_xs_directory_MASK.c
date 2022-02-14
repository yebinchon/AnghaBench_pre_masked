
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
 char** FUNC_2 (char*,int ,int *) ;
 struct sbuf* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (struct xs_transaction,int ,int ,int *,void**) ;

int
FUNC_5(struct xs_transaction VAR_1, const char *VAR_2, const char *VAR_3,
    u_int *VAR_4, const char ***VAR_5)
{
 struct sbuf *VAR_6;
 char *VAR_7;
 u_int VAR_8 = 0;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 VAR_9 = FUNC_4(VAR_1, VAR_0, FUNC_0(VAR_6), &VAR_8,
     (void **)&VAR_7);
 FUNC_1(VAR_6);
 if (VAR_9)
  return (VAR_9);

 *VAR_5 = FUNC_2(VAR_7, VAR_8, VAR_4);

 return (0);
}
