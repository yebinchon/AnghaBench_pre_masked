
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct ws_buf {scalar_t__ n; scalar_t__ buf; scalar_t__ base; } ;
struct TYPE_3__ {void* md5_pkt_len; } ;
struct TYPE_4__ {int au_pw; TYPE_1__ a_md5; } ;
struct netauth {TYPE_2__ au; void* a_type; int a_family; } ;
struct auth {int * key; } ;
typedef int MD5_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (int) ;

void
FUNC_4(struct ws_buf *VAR_3,
      struct auth *VAR_4)
{
 struct netauth *VAR_5, *VAR_6;
 MD5_CTX VAR_7;
 int VAR_8;


 VAR_5 = (struct netauth*)VAR_3->base;
 VAR_6 = (struct netauth*)VAR_3->n;
 VAR_8 = (char *)VAR_6-(char *)VAR_3->buf;
 VAR_6->a_family = VAR_0;
 VAR_6->a_type = FUNC_3(1);
 VAR_5->au.a_md5.md5_pkt_len = FUNC_3(VAR_8);
 FUNC_1(&VAR_7);
 FUNC_2(&VAR_7, (u_char *)VAR_3->buf, VAR_8 + VAR_1);
 FUNC_2(&VAR_7, VAR_4->key, VAR_2);
 FUNC_0(VAR_6->au.au_pw, &VAR_7);
 VAR_3->n++;
}
