
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_query_decoder {int pos; int evq; int config; } ;
struct TYPE_9__ {int abrt; int intx; } ;
struct TYPE_10__ {TYPE_4__ tsx; int exec; } ;
struct pt_packet_mode {int leaf; TYPE_5__ bits; } ;
struct TYPE_7__ {int aborted; int speculative; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_8__ {TYPE_2__ tsx; TYPE_1__ exec_mode; } ;
struct pt_event {TYPE_3__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;


 int FUNC_2 (struct pt_packet_mode*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct pt_query_decoder *VAR_5)
{
 struct pt_packet_mode VAR_6;
 struct pt_event *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_1;

 VAR_8 = FUNC_2(&VAR_6, VAR_5->pos, &VAR_5->config);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_7 = FUNC_0(&VAR_5->evq, VAR_0);
 if (!VAR_7)
  return -VAR_2;

 switch (VAR_6.leaf) {
 case 129:
  VAR_7->type = VAR_3;
  VAR_7->variant.exec_mode.mode =
   FUNC_1(&VAR_6.bits.exec);
  break;

 case 128:
  VAR_7->type = VAR_4;
  VAR_7->variant.tsx.speculative = VAR_6.bits.tsx.intx;
  VAR_7->variant.tsx.aborted = VAR_6.bits.tsx.abrt;
  break;
 }

 VAR_5->pos += VAR_8;
 return 0;
}
