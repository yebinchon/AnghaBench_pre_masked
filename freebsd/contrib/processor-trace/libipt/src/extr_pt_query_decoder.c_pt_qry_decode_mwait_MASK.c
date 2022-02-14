
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int pos; int evq; int config; } ;
struct pt_packet_mwait {int ext; int hints; } ;
struct TYPE_3__ {int ext; int hints; } ;
struct TYPE_4__ {TYPE_1__ mwait; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pt_packet_mwait*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct pt_query_decoder *VAR_3)
{
 struct pt_packet_mwait VAR_4;
 struct pt_event *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_1(&VAR_4, VAR_3->pos, &VAR_3->config);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0(&VAR_3->evq, VAR_0);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->type = VAR_2;
 VAR_5->variant.mwait.hints = VAR_4.hints;
 VAR_5->variant.mwait.ext = VAR_4.ext;

 VAR_3->pos += VAR_6;
 return 0;
}
