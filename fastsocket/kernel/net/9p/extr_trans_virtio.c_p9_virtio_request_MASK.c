
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_chan {int vq; int sg; } ;
struct p9_req_t {TYPE_1__* tc; int status; scalar_t__ rc; } ;
struct p9_fcall {int dummy; } ;
struct p9_client {int msize; struct virtio_chan* trans; } ;
struct TYPE_2__ {char* sdata; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int,TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct p9_client *VAR_4, struct p9_req_t *VAR_5)
{
 int VAR_6, VAR_7;
 struct virtio_chan *VAR_8 = VAR_4->trans;
 char *VAR_9 = (char *)VAR_5->rc+sizeof(struct p9_fcall);

 FUNC_0(VAR_1, "9p debug: virtio request\n");

 VAR_7 = FUNC_1(VAR_8->sg, 0, VAR_3, VAR_5->tc->sdata,
        VAR_5->tc->size);
 VAR_6 = FUNC_1(VAR_8->sg, VAR_7, VAR_3-VAR_7, VAR_9,
        VAR_4->msize);

 VAR_5->status = VAR_2;

 if (FUNC_2(VAR_8->vq, VAR_8->sg, VAR_7, VAR_6, VAR_5->tc) < 0) {
  FUNC_0(VAR_1,
   "9p debug: virtio rpc add_buf returned failure");
  return -VAR_0;
 }

 FUNC_3(VAR_8->vq);

 FUNC_0(VAR_1, "9p debug: virtio request kicked\n");
 return 0;
}
