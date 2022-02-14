
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_softc {int aac_io_lock; } ;
struct aac_fib {int * data; } ;
struct TYPE_2__ {int* param; int command; scalar_t__ data; } ;
struct aac_cnt_config {scalar_t__ Command; TYPE_1__ CTCommand; } ;
struct aac_cf_status_hdr {scalar_t__ action; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_3 (struct aac_cnt_config*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct aac_softc *VAR_9)
{
 struct aac_fib *VAR_10;
 struct aac_cnt_config *VAR_11;
 struct aac_cf_status_hdr *VAR_12;
 int VAR_13;

 FUNC_4(&VAR_9->aac_io_lock);
 FUNC_0(VAR_9, &VAR_10);

 VAR_11 = (struct aac_cnt_config *)&VAR_10->data[0];
 FUNC_3(VAR_11, sizeof (*VAR_11) - VAR_5);
 VAR_11->Command = VAR_8;
 VAR_11->CTCommand.command = VAR_3;
 VAR_11->CTCommand.param[VAR_1] = sizeof(struct aac_cf_status_hdr);

 VAR_13 = FUNC_2(VAR_9, VAR_6, 0, VAR_10,
  sizeof (struct aac_cnt_config));
 VAR_12 = (struct aac_cf_status_hdr *)VAR_11->CTCommand.data;
 if (VAR_13 == 0 && VAR_11->Command == VAR_7 &&
  VAR_11->CTCommand.param[0] == VAR_4) {
  if (VAR_12->action <= VAR_0) {
   FUNC_3(VAR_11, sizeof (*VAR_11) - VAR_5);
   VAR_11->Command = VAR_8;
   VAR_11->CTCommand.command = VAR_2;

   VAR_13 = FUNC_2(VAR_9, VAR_6, 0, VAR_10,
    sizeof (struct aac_cnt_config));
   if (VAR_13 == 0 && VAR_11->Command == VAR_7 &&
    VAR_11->CTCommand.param[0] == VAR_4) {

    VAR_13 = 0;
   } else {

    VAR_13 = -2;
   }
  } else {


   VAR_13 = -3;
  }
 } else {

  VAR_13 = -1;
 }

 FUNC_1(VAR_9);
 FUNC_5(&VAR_9->aac_io_lock);
 return(VAR_13);
}
