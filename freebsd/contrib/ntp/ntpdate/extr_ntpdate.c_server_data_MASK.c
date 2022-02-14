
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_short ;
typedef int u_fp ;
struct server {size_t filter_nextpt; int * filter_error; int * filter_soffset; int * filter_offset; int * filter_delay; } ;
typedef int s_fp ;
typedef int l_fp ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_1(
 register struct server *VAR_1,
 s_fp VAR_2,
 l_fp *VAR_3,
 u_fp VAR_4
 )
{
 u_short VAR_5;

 VAR_5 = VAR_1->filter_nextpt;
 if (VAR_5 < VAR_0) {
  VAR_1->filter_delay[VAR_5] = VAR_2;
  VAR_1->filter_offset[VAR_5] = *VAR_3;
  VAR_1->filter_soffset[VAR_5] = FUNC_0(VAR_3);
  VAR_1->filter_error[VAR_5] = VAR_4;
  VAR_1->filter_nextpt = (u_short)(VAR_5 + 1);
 }
}
