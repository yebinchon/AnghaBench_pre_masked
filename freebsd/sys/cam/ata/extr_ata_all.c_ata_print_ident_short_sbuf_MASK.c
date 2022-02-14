
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ata_params {int revision; int model; } ;


 int FUNC_0 (struct sbuf*,int ,int,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;

void
FUNC_2(struct ata_params *VAR_0, struct sbuf *VAR_1)
{

 FUNC_1(VAR_1, "<");
 FUNC_0(VAR_1, VAR_0->model, sizeof(VAR_0->model), 0);
 FUNC_1(VAR_1, " ");
 FUNC_0(VAR_1, VAR_0->revision, sizeof(VAR_0->revision), 0);
 FUNC_1(VAR_1, ">");
}
