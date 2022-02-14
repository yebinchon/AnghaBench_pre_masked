
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zilog_t ;
typedef scalar_t__ uint_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_5__ {int lrc_txtype; int lrc_txg; scalar_t__ lrc_seq; scalar_t__ lrc_reclen; } ;
typedef TYPE_1__ lr_t ;
struct TYPE_6__ {int zri_count; int (* zri_print ) (int *,int,TYPE_1__*) ;int zri_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,TYPE_1__*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_4, lr_t *VAR_5, void *VAR_6, uint64_t VAR_7)
{
 int VAR_8;
 int VAR_9 = FUNC_1(VAR_2['d'], VAR_2['i']);


 VAR_8 = VAR_5->lrc_txtype;

 FUNC_0(VAR_8 != 0 && (uint_t)VAR_8 < VAR_1);
 FUNC_0(VAR_5->lrc_txg);

 (void) FUNC_2("\t\t%s%s len %6llu, txg %llu, seq %llu\n",
     (VAR_5->lrc_txtype & VAR_0) ? "CI-" : "",
     VAR_3[VAR_8].zri_name,
     (u_longlong_t)VAR_5->lrc_reclen,
     (u_longlong_t)VAR_5->lrc_txg,
     (u_longlong_t)VAR_5->lrc_seq);

 if (VAR_8 && VAR_9 >= 3)
  VAR_3[VAR_8].zri_print(VAR_4, VAR_8, VAR_5);

 VAR_3[VAR_8].zri_count++;
 VAR_3[0].zri_count++;

 return (0);
}
