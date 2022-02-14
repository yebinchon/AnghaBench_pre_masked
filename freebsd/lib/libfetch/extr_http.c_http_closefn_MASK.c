
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpio {struct httpio* buf; int conn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct httpio*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0)
{
 struct httpio *VAR_1 = (struct httpio *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->conn);
 if (VAR_1->buf)
  FUNC_1(VAR_1->buf);
 FUNC_1(VAR_1);
 return (VAR_2);
}
