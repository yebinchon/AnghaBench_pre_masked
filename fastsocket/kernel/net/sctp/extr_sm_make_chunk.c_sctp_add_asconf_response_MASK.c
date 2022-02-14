
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_chunk {int dummy; } ;
struct TYPE_6__ {void* length; scalar_t__ type; } ;
struct TYPE_7__ {void* length; scalar_t__ cause; int crr_id; TYPE_1__ param_hdr; } ;
typedef TYPE_2__ sctp_errhdr_t ;
typedef TYPE_2__ sctp_addip_param_t ;
typedef int err_param ;
typedef int ack_param ;
typedef int __be32 ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct sctp_chunk*,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct sctp_chunk *VAR_3, __be32 VAR_4,
         __be16 VAR_5, sctp_addip_param_t *VAR_6)
{
 sctp_addip_param_t VAR_7;
 sctp_errhdr_t VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 __be16 VAR_11;

 if (VAR_0 == VAR_5) {
  VAR_11 = VAR_2;
 } else {
  VAR_11 = VAR_1;
  VAR_10 = sizeof(VAR_8);
  if (VAR_6)
   VAR_9 =
     FUNC_1(VAR_6->param_hdr.length);
 }


 VAR_7.param_hdr.type = VAR_11;
 VAR_7.param_hdr.length = FUNC_0(sizeof(VAR_7) +
        VAR_10 +
        VAR_9);
 VAR_7.crr_id = VAR_4;
 FUNC_2(VAR_3, sizeof(VAR_7), &VAR_7);

 if (VAR_0 == VAR_5)
  return;


 VAR_8.cause = VAR_5;
 VAR_8.length = FUNC_0(VAR_10 + VAR_9);
 FUNC_2(VAR_3, VAR_10, &VAR_8);


 if (VAR_6)
  FUNC_2(VAR_3, VAR_9, VAR_6);
}
