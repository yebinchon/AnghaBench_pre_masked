
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bio {int bio_error; int bio_flags; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {int sc; TYPE_1__ status; int data_dmamap; int data_dmatag; struct bio* arg; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(ips_command_t *VAR_4)
{

 struct bio *VAR_5 = VAR_4->arg;
 if(FUNC_4(VAR_5)) {
  FUNC_1(VAR_4->data_dmatag, VAR_4->data_dmamap,
    VAR_1);
 } else {
  FUNC_1(VAR_4->data_dmatag, VAR_4->data_dmamap,
    VAR_2);
 }
 FUNC_2(VAR_4->data_dmatag, VAR_4->data_dmamap);
 if(FUNC_0(VAR_4)){
  VAR_5->bio_flags |=VAR_0;
  VAR_5->bio_error = VAR_3;
  FUNC_6("ips: io error, status= 0x%x\n", VAR_4->status.value);
 }
 FUNC_3(VAR_4->sc, VAR_4);
 FUNC_5(VAR_5);
}
