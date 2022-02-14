
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {int ocsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct http_ctx *VAR_3, int VAR_4)
{
 if (VAR_4 == 0)
  VAR_3->ocsp = VAR_1;
 else if (VAR_4 == 1)
  VAR_3->ocsp = VAR_2;
 if (VAR_4 == 2)
  VAR_3->ocsp = VAR_0;
}
