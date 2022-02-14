
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usX2Y_substream {scalar_t__ transfer_done; scalar_t__ hwptr_done; scalar_t__ hwptr; int * urb; int endpoint; } ;


 int FUNC_0 (char*,struct snd_usX2Y_substream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_usX2Y_substream *VAR_0)
{
 FUNC_0("usX2Y_substream_prepare(%p) ep=%i urb0=%p urb1=%p\n",
      VAR_0, VAR_0->endpoint, VAR_0->urb[0], VAR_0->urb[1]);

 VAR_0->hwptr = 0;
 VAR_0->hwptr_done = 0;
 VAR_0->transfer_done = 0;
}
