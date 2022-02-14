
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usX2Y_substream {scalar_t__ urb; int endpoint; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_usX2Y_substream *VAR_1)
{
 int VAR_2;
 FUNC_0("snd_usX2Y_urbs_release() %i\n", VAR_1->endpoint);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->urb + VAR_2);
}
