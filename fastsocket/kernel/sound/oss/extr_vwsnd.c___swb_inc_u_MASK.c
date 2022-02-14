
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int swb_u_idx; int swbuf_size; int swb_u_avail; int swb_i_avail; } ;
typedef TYPE_1__ vwsnd_port_t ;



__attribute__((used)) static __inline__ unsigned int FUNC_0(vwsnd_port_t *VAR_0, int VAR_1)
{
 if (VAR_1) {
  VAR_0->swb_u_idx += VAR_1;
  VAR_0->swb_u_idx %= VAR_0->swbuf_size;
  VAR_0->swb_u_avail -= VAR_1;
  VAR_0->swb_i_avail += VAR_1;
 }
 return VAR_0->swb_u_avail;
}
