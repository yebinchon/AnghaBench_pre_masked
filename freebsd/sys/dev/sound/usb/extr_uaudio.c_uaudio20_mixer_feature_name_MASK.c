
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct uaudio_tt_to_feature {scalar_t__ terminal_type; scalar_t__ feature; } ;
struct uaudio_terminal_node {int dummy; } ;
struct uaudio_mixer_node {scalar_t__ class; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct uaudio_terminal_node const*,struct uaudio_mixer_node*) ;
 struct uaudio_tt_to_feature* VAR_2 ;

__attribute__((used)) static uint16_t
FUNC_2(const struct uaudio_terminal_node *VAR_3,
    struct uaudio_mixer_node *VAR_4)
{
 const struct uaudio_tt_to_feature *VAR_5;
 uint16_t VAR_6 = FUNC_1(VAR_3, VAR_4);

 if ((VAR_4->class == VAR_1) && (VAR_6 == 0))
  return (VAR_0);

 for (VAR_5 = VAR_2; VAR_5->terminal_type != 0; VAR_5++) {
  if (VAR_5->terminal_type == VAR_6)
   break;
 }

 FUNC_0("terminal_type=0x%04x -> %d\n",
     VAR_6, VAR_5->feature);

 return (VAR_5->feature);
}
