
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uaudio_chan {int buf; int pcm_buf; int set_alt; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct uaudio_chan*,int ) ;

int
FUNC_2(struct uaudio_chan *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 2 * FUNC_1(VAR_0, VAR_0->set_alt);
 FUNC_0(VAR_0->pcm_buf, VAR_0->buf, VAR_2);
 return (VAR_2 / 2);
}
