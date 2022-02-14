
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int data_endpoint; int flags; int sync_endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_substream *VAR_2,
      int VAR_3, int VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_1, &VAR_2->flags))
  FUNC_0(VAR_2->sync_endpoint,
          VAR_3, VAR_4, VAR_5);

 if (FUNC_1(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_2->data_endpoint,
          VAR_3, VAR_4, VAR_5);
}
