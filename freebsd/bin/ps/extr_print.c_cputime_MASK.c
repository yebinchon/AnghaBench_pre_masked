
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARENT ;
struct TYPE_8__ {TYPE_2__* ki_p; } ;
struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {int ki_runtime; TYPE_1__ ki_childtime; } ;
typedef TYPE_3__ KINFO ;


 char* FUNC_0 (TYPE_3__*,int *,long,long) ;
 scalar_t__ VAR_0 ;

char *
FUNC_1(KINFO *VAR_1, VARENT *VAR_2)
{
 long VAR_3, VAR_4;






 VAR_3 = VAR_1->ki_p->ki_runtime / 1000000;
 VAR_4 = VAR_1->ki_p->ki_runtime % 1000000;
 if (VAR_0) {
  VAR_3 += VAR_1->ki_p->ki_childtime.tv_sec;
  VAR_4 += VAR_1->ki_p->ki_childtime.tv_usec;
 }
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4));
}
