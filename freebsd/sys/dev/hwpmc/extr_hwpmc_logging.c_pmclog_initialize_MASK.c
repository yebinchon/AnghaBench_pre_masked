
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmclog_buffer {int dummy; } ;
struct TYPE_2__ {int pdbh_ncpus; struct pmclog_buffer* pdbh_plbs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pmclog_buffer*,void*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int,int ,int ,int) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct pmclog_buffer*) ;
 int VAR_9 ;
 int FUNC_5 (char*,int) ;
 int VAR_10 ;

void
FUNC_6()
{
 struct pmclog_buffer *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_9 <= 0 || VAR_9 > 16*1024) {
  (void) FUNC_5("hwpmc: tunable logbuffersize=%d must be "
       "greater than zero and less than or equal to 16MB.\n",
       VAR_9);
  VAR_9 = VAR_4;
 }

 if (VAR_8 <= 0) {
  (void) FUNC_5("hwpmc: tunable nlogbuffers=%d must be greater "
       "than zero.\n", VAR_8);
  VAR_8 = VAR_5;
 }
 if (VAR_8*VAR_9 > 32*1024) {
  (void) FUNC_5("hwpmc: memory allocated pcpu must be less than 32MB (is %dK).\n",
       VAR_8*VAR_9);
  VAR_8 = VAR_5;
  VAR_9 = VAR_4;
 }
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = VAR_6[VAR_12]->pdbh_ncpus;
  VAR_14 = VAR_13 * VAR_8;

  VAR_11 = FUNC_2(sizeof(struct pmclog_buffer) * VAR_14,
      VAR_1, FUNC_0(VAR_12), VAR_2 | VAR_3);
  VAR_6[VAR_12]->pdbh_plbs = VAR_11;
  for (; VAR_14 > 0; VAR_14--, VAR_11++) {
   void *VAR_15;

   VAR_15 = FUNC_2(1024 * VAR_9, VAR_1,
       FUNC_0(VAR_12), VAR_2 | VAR_3);
   FUNC_1(VAR_11, VAR_15, VAR_12);
   FUNC_4(VAR_11);
  }
 }
 FUNC_3(&VAR_7, "pmc-kthread", "pmc-sleep", VAR_0);
}
