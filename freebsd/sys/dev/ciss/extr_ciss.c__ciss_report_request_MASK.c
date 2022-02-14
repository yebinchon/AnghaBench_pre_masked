
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ciss_request {int cr_sc; struct ciss_command* cr_cc; } ;
struct TYPE_7__ {int offense_value; int offense_offset; int offense_size; } ;
struct TYPE_8__ {TYPE_3__ invalid_command; } ;
struct ciss_error_info {int command_status; int scsi_status; TYPE_4__ additional_error_info; } ;
struct TYPE_6__ {int host_tag; } ;
struct TYPE_5__ {scalar_t__* cdb; } ;
struct ciss_command {TYPE_2__ header; TYPE_1__ cdb; int * sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ciss_request*) ;
 int FUNC_2 (int ,char*,int,int ,int,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct ciss_request *VAR_11, int *VAR_12, int *VAR_13, const char *VAR_14)
{
    struct ciss_command *VAR_15;
    struct ciss_error_info *VAR_16;

    FUNC_4(2);

    VAR_15 = VAR_11->cr_cc;
    VAR_16 = (struct ciss_error_info *)&(VAR_15->sg[0]);





    if ((VAR_15->header.host_tag & VAR_5) &&
 ((VAR_16->command_status == VAR_0) ||
  (VAR_16->command_status == VAR_1)) &&
 ((VAR_15->cdb.cdb[0] == VAR_6) ||
  (VAR_15->cdb.cdb[0] == VAR_7) ||
  (VAR_15->cdb.cdb[0] == VAR_8))) {
 VAR_15->header.host_tag &= ~VAR_5;
 FUNC_3(2, "ignoring irrelevant under/overrun error");
    }





    if (!(VAR_15->header.host_tag & VAR_5)) {
 if (VAR_13 != ((void*)0))
     *VAR_13 = VAR_9;
 if (VAR_12 != ((void*)0))
     *VAR_12 = VAR_3;
 return(0);
    } else {
 if (VAR_12 != ((void*)0))
     *VAR_12 = VAR_16->command_status;
 if (VAR_13 != ((void*)0)) {
     if (VAR_16->command_status == VAR_4) {
  *VAR_13 = VAR_16->scsi_status;
     } else {
  *VAR_13 = -1;
     }
 }
 if (VAR_10)
     FUNC_2(VAR_11->cr_sc, "command status 0x%x (%s) scsi status 0x%x\n",
   VAR_16->command_status, FUNC_0(VAR_16->command_status),
   VAR_16->scsi_status);
 if (VAR_16->command_status == VAR_2) {
     FUNC_2(VAR_11->cr_sc, "invalid command, offense size %d at %d, value 0x%x, function %s\n",
   VAR_16->additional_error_info.invalid_command.offense_size,
   VAR_16->additional_error_info.invalid_command.offense_offset,
   VAR_16->additional_error_info.invalid_command.offense_value,
   VAR_14);
 }
    }



    return(1);
}
