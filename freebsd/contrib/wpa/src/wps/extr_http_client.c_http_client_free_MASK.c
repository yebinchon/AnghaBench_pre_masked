
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_client {scalar_t__ sd; int req; int hread; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct http_client*,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct http_client*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct http_client *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_3(VAR_2->hread);
 FUNC_5(VAR_2->req);
 if (VAR_2->sd >= 0) {
  FUNC_2(VAR_2->sd, VAR_0);
  FUNC_0(VAR_2->sd);
 }
 FUNC_1(VAR_1, VAR_2, ((void*)0));
 FUNC_4(VAR_2);
}
