
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_chan {scalar_t__ num_alt; int xfer; int * buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

int
FUNC_2(struct uaudio_chan *VAR_2)
{
 if (VAR_2->buf != ((void*)0)) {
  FUNC_0(VAR_2->buf, VAR_0);
  VAR_2->buf = ((void*)0);
 }
 FUNC_1(VAR_2->xfer, VAR_1 + 1);

 VAR_2->num_alt = 0;

 return (0);
}
