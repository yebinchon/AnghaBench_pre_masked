
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_feeder {int data; } ;


 int VAR_0 ;

 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct pcm_feeder *VAR_3, int VAR_4, int VAR_5)
{

 switch (VAR_4) {
 case 128:
  if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
   return (VAR_0);
  VAR_3->data = FUNC_0(FUNC_1(VAR_3->data), VAR_5);
  break;
 default:
  return (VAR_0);
  break;
 }

 return (0);
}
