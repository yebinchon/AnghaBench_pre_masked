
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
struct mbdata {int mb_top; } ;
struct nbns_rq {int nr_nmflags; int nr_trnid; int nr_opcode; int nr_qdcount; int nr_ancount; int nr_nscount; int nr_arcount; int nr_qdtype; int nr_qdclass; int nr_qdname; TYPE_2__ nr_dest; int nr_rp; struct mbdata nr_rq; struct nb_ctx* nr_nbd; } ;
struct nb_ctx {int nb_timo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mbdata*,int,char**) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mbdata*,int) ;
 int FUNC_4 (struct mbdata*,int) ;
 int FUNC_5 (int **,int) ;
 int * VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct nbns_rq *VAR_5)
{
 struct nb_ctx *VAR_6 = VAR_5->nr_nbd;
 struct mbdata *VAR_7 = &VAR_5->nr_rq;
 u_int8_t VAR_8;
 u_char *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_2(&VAR_5->nr_rp, VAR_2);
 if (VAR_11)
  return VAR_11;
 if (VAR_5->nr_dest.sin_addr.s_addr == VAR_1) {
  VAR_5->nr_nmflags |= VAR_3;
  if (VAR_4 == ((void*)0)) {
   VAR_11 = FUNC_5(&VAR_4, 100);
   if (VAR_11)
    return VAR_11;
  }
 } else
  VAR_5->nr_nmflags &= ~VAR_3;
 FUNC_3(VAR_7, VAR_5->nr_trnid);
 VAR_8 = ((VAR_5->nr_opcode & 0x1F) << 3) | ((VAR_5->nr_nmflags & 0x70) >> 4);
 FUNC_4(VAR_7, VAR_8);
 FUNC_4(VAR_7, (VAR_5->nr_nmflags & 0x0f) << 4 );
 FUNC_3(VAR_7, VAR_5->nr_qdcount);
 FUNC_3(VAR_7, VAR_5->nr_ancount);
 FUNC_3(VAR_7, VAR_5->nr_nscount);
 FUNC_3(VAR_7, VAR_5->nr_arcount);
 if (VAR_5->nr_qdcount) {
  if (VAR_5->nr_qdcount > 1)
   return VAR_0;
  VAR_10 = FUNC_7(VAR_5->nr_qdname);
  VAR_11 = FUNC_1(VAR_7, VAR_10, (char**)&VAR_9);
  if (VAR_11)
   return VAR_11;
  FUNC_6(VAR_5->nr_qdname, VAR_9);
  FUNC_3(VAR_7, VAR_5->nr_qdtype);
  FUNC_3(VAR_7, VAR_5->nr_qdclass);
 }
 FUNC_0(VAR_7->mb_top, &VAR_7->mb_top);
 if (VAR_6->nb_timo == 0)
  VAR_6->nb_timo = 1;
 return 0;
}
