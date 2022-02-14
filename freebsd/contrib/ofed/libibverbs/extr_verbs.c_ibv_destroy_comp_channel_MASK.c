
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_context {int mutex; } ;
struct ibv_comp_channel {int fd; scalar_t__ refcnt; struct ibv_context* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_comp_channel*) ;
 int FUNC_2 (struct ibv_comp_channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ibv_comp_channel *VAR_2)
{
 struct ibv_context *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->context;
 FUNC_3(&VAR_3->mutex);

 if (VAR_2->refcnt) {
  VAR_4 = VAR_0;
  goto out;
 }

 if (VAR_1 <= 2) {
  VAR_4 = FUNC_2(VAR_2);
  goto out;
 }

 FUNC_0(VAR_2->fd);
 FUNC_1(VAR_2);
 VAR_4 = 0;

out:
 FUNC_4(&VAR_3->mutex);

 return VAR_4;
}
