
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {scalar_t__ type; int fmt; } ;
struct l_v4l2_format {scalar_t__ type; int fmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct l_v4l2_format *VAR_3, struct v4l2_format *VAR_4)
{
 VAR_4->type = VAR_3->type;
 if (VAR_3->type == VAR_2



     )




  return (VAR_0);
 FUNC_0(&VAR_4->fmt, &VAR_3->fmt, sizeof(VAR_4->fmt));
 return (0);
}
