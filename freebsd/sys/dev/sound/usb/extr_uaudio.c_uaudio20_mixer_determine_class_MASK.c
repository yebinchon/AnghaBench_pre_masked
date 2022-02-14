
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {TYPE_2__* it_v2; TYPE_1__* ot_v2; } ;
struct uaudio_terminal_node {TYPE_3__ u; } ;
struct uaudio_mixer_node {int class; } ;
struct TYPE_5__ {int wTerminalType; } ;
struct TYPE_4__ {int wTerminalType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct uaudio_terminal_node* FUNC_1 (struct uaudio_terminal_node const*,int) ;
 struct uaudio_terminal_node* FUNC_2 (struct uaudio_terminal_node const*,int) ;

__attribute__((used)) static uint16_t
FUNC_3(const struct uaudio_terminal_node *VAR_4,
    struct uaudio_mixer_node *VAR_5)
{
 uint16_t VAR_6 = 0x0000;
 const struct uaudio_terminal_node *VAR_7[2];
 const struct uaudio_terminal_node *VAR_8[2];

 VAR_7[0] = FUNC_1(VAR_4, 0);
 VAR_7[1] = FUNC_1(VAR_4, 1);

 VAR_8[0] = FUNC_2(VAR_4, 0);
 VAR_8[1] = FUNC_2(VAR_4, 1);





 if (VAR_8[0] && (!VAR_8[1]))
  VAR_6 = FUNC_0(VAR_8[0]->u.ot_v2->wTerminalType);




 if ((VAR_6 & 0xff00) == (VAR_3 & 0xff00)) {

  VAR_5->class = VAR_2;
  if (VAR_7[0] && (!VAR_7[1])) {
   VAR_6 =
       FUNC_0(VAR_7[0]->u.it_v2->wTerminalType);
  } else {
   VAR_6 = 0;
  }
  goto done;
 }





 if (VAR_7[0] && (!VAR_7[1])) {
  VAR_5->class = VAR_0;
  VAR_6 =
      FUNC_0(VAR_7[0]->u.it_v2->wTerminalType);
  goto done;
 }



 VAR_5->class = VAR_1;
done:
 return (VAR_6);
}
