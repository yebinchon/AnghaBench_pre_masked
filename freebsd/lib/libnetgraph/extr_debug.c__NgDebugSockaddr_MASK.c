
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ng {int sg_data; int sg_len; int sg_family; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

void
FUNC_1(const struct sockaddr_ng *VAR_0)
{
 FUNC_0("SOCKADDR: { fam=%d len=%d addr=\"%s\" }",
        VAR_0->sg_family, VAR_0->sg_len, VAR_0->sg_data);
}
