
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(struct xdr_netobj *VAR_1, char *VAR_2, int VAR_3, int VAR_4)
{
 if (!(VAR_1->data = FUNC_0(VAR_4,VAR_0)))
  return 0;
 VAR_1->len = VAR_4;
 FUNC_1(VAR_1->data, VAR_2, VAR_3);
 return 1;
}
