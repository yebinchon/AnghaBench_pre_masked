
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_chan {int client; int vq; } ;
struct p9_req_t {int status; } ;
struct p9_fcall {struct p9_fcall* tag; } ;
struct TYPE_2__ {struct virtio_chan* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (int ,struct p9_fcall*) ;
 struct p9_fcall* FUNC_3 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct virtqueue *VAR_2)
{
 struct virtio_chan *VAR_3 = VAR_2->vdev->priv;
 struct p9_fcall *VAR_4;
 unsigned int VAR_5;
 struct p9_req_t *VAR_6;

 FUNC_0(VAR_0, ": request done\n");

 while ((VAR_4 = FUNC_3(VAR_3->vq, &VAR_5)) != ((void*)0)) {
  FUNC_0(VAR_0, ": rc %p\n", VAR_4);
  FUNC_0(VAR_0, ": lookup tag %d\n", VAR_4->tag);
  VAR_6 = FUNC_2(VAR_3->client, VAR_4->tag);
  VAR_6->status = VAR_1;
  FUNC_1(VAR_3->client, VAR_6);
 }
}
