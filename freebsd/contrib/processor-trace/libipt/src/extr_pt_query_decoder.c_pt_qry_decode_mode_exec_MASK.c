
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int evq; } ;
struct pt_packet_mode_exec {int dummy; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ exec_mode; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pt_packet_mode_exec const*) ;
 int FUNC_2 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct pt_query_decoder *VAR_4,
       const struct pt_packet_mode_exec *VAR_5)
{
 struct pt_event *VAR_6;

 if (!VAR_4 || !VAR_5)
  return -VAR_1;


 VAR_6 = FUNC_0(&VAR_4->evq, VAR_0);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->type = VAR_3;
 VAR_6->variant.exec_mode.mode = FUNC_1(VAR_5);

 return FUNC_2(VAR_6, VAR_4);
}
