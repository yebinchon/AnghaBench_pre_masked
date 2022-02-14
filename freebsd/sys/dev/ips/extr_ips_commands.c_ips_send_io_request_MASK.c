
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio {int bio_bcount; int bio_data; } ;
struct TYPE_4__ {int data_dmamap; int data_dmatag; struct bio* arg; int callback; } ;
typedef TYPE_1__ ips_command_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(ips_command_t *VAR_2, struct bio *VAR_3)
{
 VAR_2->callback = VAR_1;
 VAR_2->arg = VAR_3;
 FUNC_0(10, "ips test: : bcount %ld\n", VAR_3->bio_bcount);
 FUNC_1(VAR_2->data_dmatag, VAR_2->data_dmamap,
   VAR_3->bio_data, VAR_3->bio_bcount,
   VAR_0, VAR_2, 0);
 return 0;
}
