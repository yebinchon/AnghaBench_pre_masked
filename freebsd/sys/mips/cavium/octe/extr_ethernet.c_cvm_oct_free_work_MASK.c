
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pool; int i; scalar_t__ addr; } ;
struct TYPE_13__ {TYPE_3__ s; } ;
struct TYPE_9__ {int bufs; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
struct TYPE_12__ {TYPE_5__ packet_ptr; TYPE_2__ word2; } ;
typedef TYPE_4__ cvmx_wqe_t ;
typedef TYPE_5__ cvmx_buf_ptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (TYPE_5__) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int FUNC_5(void *VAR_2)
{
 cvmx_wqe_t *VAR_3 = VAR_2;

 int VAR_4 = VAR_3->word2.s.bufs;
 cvmx_buf_ptr_t VAR_5 = VAR_3->packet_ptr;

 while (VAR_4--) {
  cvmx_buf_ptr_t VAR_6 = *(cvmx_buf_ptr_t *)FUNC_4(VAR_5.s.addr-8);
  if (FUNC_1(!VAR_5.s.i))
   FUNC_3(FUNC_2(VAR_5), VAR_5.s.pool, FUNC_0(VAR_0/128));
  VAR_5 = VAR_6;
 }
 FUNC_3(VAR_3, VAR_1, FUNC_0(1));

 return 0;
}
