
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcm_feeder {TYPE_1__* desc; int data; } ;
struct TYPE_4__ {scalar_t__ format; } ;
struct TYPE_3__ {scalar_t__ in; scalar_t__ out; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct pcm_feeder *VAR_3)
{
 int VAR_4;

 if (VAR_3->desc->in != VAR_3->desc->out)
  return (VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_1(VAR_3->desc->in) ==
      VAR_2[VAR_4].format) {
       VAR_3->data =
       FUNC_2(VAR_4, FUNC_0(VAR_3->desc->in));
   return (0);
  }
 }

 return (VAR_0);
}
