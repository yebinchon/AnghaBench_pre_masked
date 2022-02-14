
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * m_head; int map; } ;
typedef TYPE_3__ qla_rx_buf_t ;
struct TYPE_7__ {TYPE_1__* sds; } ;
struct TYPE_9__ {TYPE_2__ hw; TYPE_3__* rx_jbuf; TYPE_3__* rx_buf; int * rx_tag; } ;
typedef TYPE_4__ qla_host_t ;
struct TYPE_6__ {scalar_t__ rxj_free; int * rxjb_free; scalar_t__ rx_free; int * rxb_free; scalar_t__ sdsr_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(qla_host_t *VAR_3)
{
 int VAR_4;
 qla_rx_buf_t *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &VAR_3->rx_buf[VAR_4];
  if (VAR_5->m_head != ((void*)0)) {
   FUNC_2(VAR_3->rx_tag, VAR_5->map);
   FUNC_1(VAR_3->rx_tag, VAR_5->map);
   FUNC_4(VAR_5->m_head);
   VAR_5->m_head = ((void*)0);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = &VAR_3->rx_jbuf[VAR_4];
  if (VAR_5->m_head != ((void*)0)) {
   FUNC_2(VAR_3->rx_tag, VAR_5->map);
   FUNC_1(VAR_3->rx_tag, VAR_5->map);
   FUNC_4(VAR_5->m_head);
   VAR_5->m_head = ((void*)0);
  }
 }

 if (VAR_3->rx_tag != ((void*)0)) {
  FUNC_0(VAR_3->rx_tag);
  VAR_3->rx_tag = ((void*)0);
 }

 FUNC_3((void *)VAR_3->rx_buf, (sizeof(qla_rx_buf_t) * VAR_1));
 FUNC_3((void *)VAR_3->rx_jbuf,
  (sizeof(qla_rx_buf_t) * VAR_2));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->hw.sds[VAR_4].sdsr_next = 0;
  VAR_3->hw.sds[VAR_4].rxb_free = ((void*)0);
  VAR_3->hw.sds[VAR_4].rx_free = 0;
  VAR_3->hw.sds[VAR_4].rxjb_free = ((void*)0);
  VAR_3->hw.sds[VAR_4].rxj_free = 0;
 }

 return;
}
