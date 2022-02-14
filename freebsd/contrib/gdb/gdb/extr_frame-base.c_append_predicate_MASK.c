
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_base_table {int nr; int ** sniffer; } ;
typedef int frame_base_sniffer_ftype ;


 int ** FUNC_0 (int **,int) ;

__attribute__((used)) static void
FUNC_1 (struct frame_base_table *VAR_0,
    frame_base_sniffer_ftype *VAR_1)
{
  VAR_0->sniffer = FUNC_0 (VAR_0->sniffer,
        ((VAR_0->nr + 1)
         * sizeof (frame_base_sniffer_ftype *)));
  VAR_0->sniffer[VAR_0->nr] = VAR_1;
  VAR_0->nr++;
}
