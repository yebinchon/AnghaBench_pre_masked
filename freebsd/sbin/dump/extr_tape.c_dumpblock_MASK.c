
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
struct TYPE_6__ {TYPE_1__* req; } ;
struct TYPE_5__ {int c_tapea; } ;
struct TYPE_4__ {int dblk; int count; } ;


 int FUNC_0 (int,size_t) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

void
FUNC_3(ufs2_daddr_t VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 ufs2_daddr_t VAR_11;

 VAR_11 = FUNC_2(VAR_2, VAR_7);
 VAR_10 = VAR_8 >> VAR_5;
 while ((VAR_9 = FUNC_0(VAR_10, VAR_1 - VAR_6)) > 0) {
  VAR_3->req[VAR_6].dblk = VAR_11;
  VAR_3->req[VAR_6].count = VAR_9;
  VAR_6 += VAR_9;
  VAR_4.c_tapea += VAR_9;
  if (VAR_6 >= VAR_1)
   FUNC_1();
  VAR_11 += VAR_9 << (VAR_5 - VAR_0);
  VAR_10 -= VAR_9;
 }
}
