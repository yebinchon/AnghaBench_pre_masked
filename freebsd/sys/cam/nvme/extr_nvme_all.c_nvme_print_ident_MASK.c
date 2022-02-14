
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct nvme_namespace_data {int dummy; } ;
struct nvme_controller_data {int sn; int fr; int mn; } ;


 int FUNC_0 (struct sbuf*,int ,int,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;

void
FUNC_2(const struct nvme_controller_data *VAR_0,
    const struct nvme_namespace_data *VAR_1, struct sbuf *VAR_2)
{

 FUNC_1(VAR_2, "<");
 FUNC_0(VAR_2, VAR_0->mn, sizeof(VAR_0->mn), 0);
 FUNC_1(VAR_2, " ");
 FUNC_0(VAR_2, VAR_0->fr, sizeof(VAR_0->fr), 0);
 FUNC_1(VAR_2, " ");
 FUNC_0(VAR_2, VAR_0->sn, sizeof(VAR_0->sn), 0);
 FUNC_1(VAR_2, ">\n");
}
