
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct nmreq_vale_polling {unsigned int nr_first_cpu_id; unsigned int nr_num_polling_cpus; scalar_t__ nr_mode; } ;
struct nm_bdg_polling_state {scalar_t__ mode; unsigned int qfirst; unsigned int qlast; unsigned int cpu_from; unsigned int ncpus; } ;
struct netmap_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct netmap_adapter*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nmreq_vale_polling *VAR_4, struct netmap_adapter *VAR_5,
  struct nm_bdg_polling_state *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 uint32_t VAR_11 = VAR_4->nr_first_cpu_id;
 uint32_t VAR_12 = VAR_4->nr_num_polling_cpus;

 VAR_7 = FUNC_0();

 if (VAR_12 == 0) {
  FUNC_1("req_cpus must be > 0");
  return VAR_0;
 } else if (VAR_12 >= VAR_7) {
  FUNC_1("Cannot use all the CPUs in the system");
  return VAR_0;
 }

 if (VAR_4->nr_mode == VAR_1) {




  if (VAR_11 + VAR_12 > FUNC_3(VAR_5, VAR_3)) {
   FUNC_1("Rings %u-%u not in range (have %d rings)",
    VAR_11, VAR_11 + VAR_12, FUNC_3(VAR_5, VAR_3));
   return VAR_0;
  }
  VAR_9 = VAR_11;
  VAR_10 = VAR_9 + VAR_12;
  VAR_8 = VAR_9;

 } else if (VAR_4->nr_mode == VAR_2) {


  if (VAR_12 != 1) {
   FUNC_1("ncpus must be 1 for NETMAP_POLLING_MODE_SINGLE_CPU "
    "(was %d)", VAR_12);
   return VAR_0;
  }
  VAR_9 = 0;
  VAR_10 = FUNC_3(VAR_5, VAR_3);
  VAR_8 = VAR_11;
 } else {
  FUNC_1("Invalid polling mode");
  return VAR_0;
 }

 VAR_6->mode = VAR_4->nr_mode;
 VAR_6->qfirst = VAR_9;
 VAR_6->qlast = VAR_10;
 VAR_6->cpu_from = VAR_8;
 VAR_6->ncpus = VAR_12;
 FUNC_2("%s qfirst %u qlast %u cpu_from %u ncpus %u",
  VAR_4->nr_mode == VAR_1 ?
  "MULTI" : "SINGLE",
  VAR_9, VAR_10, VAR_8, VAR_12);
 return 0;
}
