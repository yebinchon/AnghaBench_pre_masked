
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct xs_transaction {int dummy; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 struct sbuf* FUNC_3 () ;
 int FUNC_4 (struct sbuf*,char const*,int ) ;
 int FUNC_5 (struct xs_transaction,char const*,char const*,int ) ;

int
FUNC_6(struct xs_transaction VAR_0,
    const char *VAR_1, const char *VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct sbuf *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3();
 FUNC_4(VAR_5, VAR_3, VAR_4);
 FUNC_2(VAR_5);
 VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_2, FUNC_0(VAR_5));
 FUNC_1(VAR_5);

 return (VAR_6);
}
