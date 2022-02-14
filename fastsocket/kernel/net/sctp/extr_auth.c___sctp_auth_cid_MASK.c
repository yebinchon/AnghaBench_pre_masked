
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct sctp_chunks_param {int* chunks; TYPE_1__ param_hdr; } ;
typedef int sctp_paramhdr_t ;
typedef int sctp_cid_t ;






 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(sctp_cid_t VAR_0, struct sctp_chunks_param *VAR_1)
{
 unsigned short VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 if (!VAR_1 || VAR_1->param_hdr.length == 0)
  return 0;

 VAR_2 = FUNC_0(VAR_1->param_hdr.length) - sizeof(sctp_paramhdr_t);







 for (VAR_4 = 0; !VAR_3 && VAR_4 < VAR_2; VAR_4++) {
  switch (VAR_1->chunks[VAR_4]) {
      case 130:
      case 129:
      case 128:
      case 131:
   break;

      default:
   if (VAR_1->chunks[VAR_4] == VAR_0)
       VAR_3 = 1;
   break;
  }
 }

 return VAR_3;
}
