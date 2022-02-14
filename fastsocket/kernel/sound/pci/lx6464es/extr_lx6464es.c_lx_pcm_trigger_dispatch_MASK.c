
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lx_stream {int status; } ;
struct lx6464es {int trigger_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lx6464es *VAR_3,
       struct lx_stream *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_5) {
 case 129:
  VAR_4->status = VAR_1;
  break;

 case 128:
  VAR_4->status = VAR_2;
  break;

 default:
  VAR_6 = -VAR_0;
  goto exit;
 }
 FUNC_0(&VAR_3->trigger_tasklet);

exit:
 return VAR_6;
}
