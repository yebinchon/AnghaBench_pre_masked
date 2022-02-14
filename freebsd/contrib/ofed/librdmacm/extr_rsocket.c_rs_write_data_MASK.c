
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct rsocket {int opts; size_t target_sge; TYPE_1__* target_sgl; int sbuf_bytes_avail; int sqe_avail; int sseq_no; } ;
struct ibv_sge {int dummy; } ;
struct TYPE_2__ {scalar_t__ length; int addr; scalar_t__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct rsocket*,struct ibv_sge*,int,int ,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_3,
    struct ibv_sge *VAR_4, int VAR_5,
    uint32_t VAR_6, int VAR_7)
{
 uint64_t VAR_8;
 uint32_t VAR_9;

 VAR_3->sseq_no++;
 VAR_3->sqe_avail--;
 if (VAR_3->opts & VAR_0)
  VAR_3->sqe_avail--;
 VAR_3->sbuf_bytes_avail -= VAR_6;

 VAR_8 = VAR_3->target_sgl[VAR_3->target_sge].addr;
 VAR_9 = VAR_3->target_sgl[VAR_3->target_sge].key;

 VAR_3->target_sgl[VAR_3->target_sge].addr += VAR_6;
 VAR_3->target_sgl[VAR_3->target_sge].length -= VAR_6;

 if (!VAR_3->target_sgl[VAR_3->target_sge].length) {
  if (++VAR_3->target_sge == VAR_2)
   VAR_3->target_sge = 0;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_5, FUNC_0(VAR_1, VAR_6),
     VAR_7, VAR_8, VAR_9);
}
