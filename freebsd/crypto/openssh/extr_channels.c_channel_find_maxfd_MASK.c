
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh_channels {size_t channels_alloc; int channel_max_fd; TYPE_1__** channels; } ;
struct TYPE_2__ {int efd; int wfd; int rfd; } ;
typedef TYPE_1__ Channel ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct ssh_channels *VAR_0)
{
 u_int VAR_1;
 int VAR_2 = 0;
 Channel *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->channels_alloc; VAR_1++) {
  VAR_3 = VAR_0->channels[VAR_1];
  if (VAR_3 != ((void*)0)) {
   VAR_2 = FUNC_0(VAR_2, VAR_3->rfd);
   VAR_2 = FUNC_0(VAR_2, VAR_3->wfd);
   VAR_2 = FUNC_0(VAR_2, VAR_3->efd);
  }
 }
 VAR_0->channel_max_fd = VAR_2;
}
