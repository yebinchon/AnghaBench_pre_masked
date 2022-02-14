
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_char ;
struct sctphdr {int src_port; int dest_port; scalar_t__ v_tag; } ;
struct sctp_init_chunk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int
FUNC_1(const u_char *VAR_4, int VAR_5)
{
 struct sctphdr *const VAR_6 = (struct sctphdr *) VAR_4;

 if (FUNC_0(VAR_6->src_port) != VAR_1 ||
     FUNC_0(VAR_6->dest_port) != VAR_2 + (VAR_0 ? 0 : VAR_5))
  return (0);
 if (VAR_3 < (int)(sizeof(struct sctphdr) +
     sizeof(struct sctp_init_chunk))) {
  return (VAR_6->v_tag ==
      (u_int32_t)((VAR_6->src_port << 16) | VAR_6->dest_port));
 } else {




  return (VAR_6->v_tag == 0);
 }
}
