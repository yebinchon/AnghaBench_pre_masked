
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct iovec* uio_iov; } ;
struct TYPE_10__ {TYPE_2__ xu_uio; } ;
typedef TYPE_1__ xuio_t ;
typedef TYPE_2__ uio_t ;
struct iovec {char* iov_base; size_t iov_len; } ;
typedef scalar_t__ offset_t ;
struct TYPE_12__ {int cnt; TYPE_4__** bufs; int next; } ;
typedef TYPE_3__ dmu_xuio_t ;
struct TYPE_13__ {scalar_t__ b_data; } ;
typedef TYPE_4__ arc_buf_t ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

int
FUNC_3(xuio_t *VAR_0, arc_buf_t *VAR_1, offset_t VAR_2, size_t VAR_3)
{
 struct iovec *VAR_4;
 uio_t *VAR_5 = &VAR_0->xu_uio;
 dmu_xuio_t *VAR_6 = FUNC_1(VAR_0);
 int VAR_7 = VAR_6->next++;

 FUNC_0(VAR_7 < VAR_6->cnt);
 FUNC_0(VAR_2 + VAR_3 <= FUNC_2(VAR_1));
 VAR_4 = VAR_5->uio_iov + VAR_7;
 VAR_4->iov_base = (char *)VAR_1->b_data + VAR_2;
 VAR_4->iov_len = VAR_3;
 VAR_6->bufs[VAR_7] = VAR_1;
 return (0);
}
