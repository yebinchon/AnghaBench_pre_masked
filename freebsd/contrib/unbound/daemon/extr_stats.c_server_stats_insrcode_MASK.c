
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_server_stats {int ans_rcode_nodata; int * ans_rcode; scalar_t__ extended; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct ub_server_stats* VAR_0, sldns_buffer* VAR_1)
{
 if(VAR_0->extended && FUNC_3(VAR_1) != 0) {
  int VAR_2 = (int)FUNC_1( FUNC_2(VAR_1) );
  VAR_0->ans_rcode[VAR_2] ++;
  if(VAR_2 == 0 && FUNC_0( FUNC_2(VAR_1) ) == 0)
   VAR_0->ans_rcode_nodata ++;
 }
}
