
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {scalar_t__ type; int* out; int* in; int out_created; scalar_t__ authentic_pos; int out_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rad_handle*) ;
 int FUNC_1 (struct rad_handle*,char*) ;
 int FUNC_2 (int*,int ,int ) ;

int
FUNC_3(struct rad_handle *VAR_6, int VAR_7)
{

 if (VAR_6->type != VAR_5) {
  FUNC_1(VAR_6, "denied function call");
  return (-1);
 }
 VAR_6->out[VAR_3] = VAR_7;
 VAR_6->out[VAR_4] = VAR_6->in[VAR_4];
 FUNC_2(&VAR_6->out[VAR_2], 0, VAR_0);
 VAR_6->out_len = VAR_1;
 FUNC_0(VAR_6);
 VAR_6->authentic_pos = 0;
 VAR_6->out_created = 1;
 return 0;
}
