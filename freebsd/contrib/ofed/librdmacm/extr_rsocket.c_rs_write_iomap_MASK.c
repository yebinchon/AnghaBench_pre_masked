
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int key; scalar_t__ addr; } ;
struct rsocket {int opts; int sbuf_bytes_avail; TYPE_1__ remote_iomap; int sqe_avail; int sseq_no; } ;
struct rs_iomap_mr {int index; } ;
struct rs_iomap {int dummy; } ;
struct ibv_sge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct rsocket*,struct ibv_sge*,int,int ,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_2, struct rs_iomap_mr *VAR_3,
     struct ibv_sge *VAR_4, int VAR_5, int VAR_6)
{
 uint64_t VAR_7;

 VAR_2->sseq_no++;
 VAR_2->sqe_avail--;
 if (VAR_2->opts & VAR_0)
  VAR_2->sqe_avail--;
 VAR_2->sbuf_bytes_avail -= sizeof(struct rs_iomap);

 VAR_7 = VAR_2->remote_iomap.addr + VAR_3->index * sizeof(struct rs_iomap);
 return FUNC_1(VAR_2, VAR_4, VAR_5, FUNC_0(VAR_1, VAR_3->index),
     VAR_6, VAR_7, VAR_2->remote_iomap.key);
}
