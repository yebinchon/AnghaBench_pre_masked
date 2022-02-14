
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {scalar_t__ bio_cmd; int bio_flags; int bio_error; scalar_t__ bio_resid; } ;
struct aac_command {TYPE_1__* cm_fib; scalar_t__ cm_private; } ;
struct aac_blockwrite_response {scalar_t__ Status; } ;
struct aac_blockread_response {scalar_t__ Status; } ;
struct TYPE_2__ {int * data; } ;
typedef scalar_t__ AAC_FSAStatus ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct aac_command*) ;

__attribute__((used)) static void
FUNC_2(struct aac_command *VAR_4)
{
 struct aac_blockread_response *VAR_5;
 struct aac_blockwrite_response *VAR_6;
 struct bio *VAR_7;
 AAC_FSAStatus VAR_8;


 VAR_7 = (struct bio *)VAR_4->cm_private;
 if (VAR_7->bio_cmd == VAR_1) {
  VAR_5 = (struct aac_blockread_response *)&VAR_4->cm_fib->data[0];
  VAR_8 = VAR_5->Status;
 } else {
  VAR_6 = (struct aac_blockwrite_response *)&VAR_4->cm_fib->data[0];
  VAR_8 = VAR_6->Status;
 }
 FUNC_1(VAR_4);


 if (VAR_8 == VAR_3) {
  VAR_7->bio_resid = 0;
 } else {
  VAR_7->bio_error = VAR_2;
  VAR_7->bio_flags |= VAR_0;
 }
 FUNC_0(VAR_7);
}
