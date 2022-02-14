
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_chan {int inuse; } ;
struct p9_client {struct virtio_chan* trans; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct p9_client *VAR_1)
{
 struct virtio_chan *VAR_2 = VAR_1->trans;

 FUNC_0(&VAR_0);
 VAR_2->inuse = 0;
 FUNC_1(&VAR_0);
}
