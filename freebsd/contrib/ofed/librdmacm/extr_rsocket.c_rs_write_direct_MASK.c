
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct rsocket {int sbuf_bytes_avail; int sqe_avail; } ;
struct TYPE_2__ {int key; scalar_t__ addr; } ;
struct rs_iomap {TYPE_1__ sge; scalar_t__ offset; } ;
struct ibv_sge {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct rsocket*,struct ibv_sge*,int,int ,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_1, struct rs_iomap *VAR_2, uint64_t VAR_3,
      struct ibv_sge *VAR_4, int VAR_5, uint32_t VAR_6, int VAR_7)
{
 uint64_t VAR_8;

 VAR_1->sqe_avail--;
 VAR_1->sbuf_bytes_avail -= VAR_6;

 VAR_8 = VAR_2->sge.addr + VAR_3 - VAR_2->offset;
 return FUNC_1(VAR_1, VAR_4, VAR_5, FUNC_0(VAR_0, VAR_6),
        VAR_7, VAR_8, VAR_2->sge.key);
}
