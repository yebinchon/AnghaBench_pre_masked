
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct ciss_request {int cr_tag; scalar_t__ cr_ccphys; struct ciss_command* cr_cc; } ;
struct TYPE_4__ {scalar_t__ error_info_length; scalar_t__ error_info_address; } ;
struct TYPE_3__ {int host_tag; scalar_t__ host_tag_zeroes; scalar_t__ sg_total; scalar_t__ sg_in_list; } ;
struct ciss_command {TYPE_2__ error_info; int * sg; TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct ciss_request *VAR_1)
{
    struct ciss_command *VAR_2;
    u_int32_t VAR_3;







    VAR_2 = VAR_1->cr_cc;
    VAR_2->header.sg_in_list = 0;
    VAR_2->header.sg_total = 0;
    VAR_2->header.host_tag = VAR_1->cr_tag << 2;
    VAR_2->header.host_tag_zeroes = 0;
    FUNC_0(&(VAR_2->sg[0]), VAR_0 - sizeof(struct ciss_command));
    VAR_3 = VAR_1->cr_ccphys;
    VAR_2->error_info.error_info_address = VAR_3 + sizeof(struct ciss_command);
    VAR_2->error_info.error_info_length = VAR_0 - sizeof(struct ciss_command);
}
