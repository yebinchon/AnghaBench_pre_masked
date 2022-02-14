
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int mtc_state; } ;


 int VAR_0 ;





__attribute__((used)) static inline int FUNC_0(struct echoaudio *VAR_1, short VAR_2)
{
 switch (VAR_1->mtc_state) {
 case 130:
  if (VAR_2 == 0xF1)
   VAR_1->mtc_state = 129;
  break;
 case 129:
  VAR_1->mtc_state = 128;
  return VAR_0;
  break;
 case 128:
  VAR_1->mtc_state = 131;
  return VAR_0;
  break;
 case 131:
  VAR_1->mtc_state = 130;
  break;
 }
 return 0;
}
