
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {int sv_nrthreads; unsigned int sv_max_payload; void (* sv_shutdown ) (struct svc_serv*) ;unsigned int sv_xdrsize; int sv_nrpools; unsigned int sp_id; struct svc_serv* sv_pools; int sp_lock; int sp_all_threads; int sp_sockets; int sp_threads; int sv_name; int sv_lock; int sv_temptimer; int sv_permsocks; int sv_tempsocks; int sv_max_mesg; int sv_stats; struct svc_program* sv_program; } ;
struct svc_program {int pg_lovers; int pg_nvers; unsigned int pg_hivers; struct svc_program* pg_next; TYPE_1__** pg_vers; int pg_stats; int pg_name; } ;
struct svc_pool {int sv_nrthreads; unsigned int sv_max_payload; void (* sv_shutdown ) (struct svc_serv*) ;unsigned int sv_xdrsize; int sv_nrpools; unsigned int sp_id; struct svc_pool* sv_pools; int sp_lock; int sp_all_threads; int sp_sockets; int sp_threads; int sv_name; int sv_lock; int sv_temptimer; int sv_permsocks; int sv_tempsocks; int sv_max_mesg; int sv_stats; struct svc_program* sv_program; } ;
struct TYPE_2__ {unsigned int vs_xdrsize; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 struct svc_serv* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct svc_serv*) ;
 struct svc_serv* FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 void FUNC_8 (struct svc_serv*) ;
 scalar_t__ FUNC_9 (struct svc_serv*) ;
 scalar_t__ FUNC_10 (struct svc_serv*) ;

__attribute__((used)) static struct svc_serv *
FUNC_11(struct svc_program *VAR_3, unsigned int VAR_4, int VAR_5,
      void (*VAR_6)(struct svc_serv *VAR_7))
{
 struct svc_serv *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 if (!(VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_0)))
  return ((void*)0);
 VAR_8->sv_name = VAR_3->pg_name;
 VAR_8->sv_program = VAR_3;
 VAR_8->sv_nrthreads = 1;
 VAR_8->sv_stats = VAR_3->pg_stats;
 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;
 VAR_8->sv_max_payload = VAR_4? VAR_4 : 4096;
 VAR_8->sv_max_mesg = FUNC_6(VAR_8->sv_max_payload + VAR_1, VAR_1);
 VAR_8->sv_shutdown = VAR_6;
 VAR_10 = 0;
 while (VAR_3) {
  VAR_3->pg_lovers = VAR_3->pg_nvers-1;
  for (VAR_9=0; VAR_9<VAR_3->pg_nvers ; VAR_9++)
   if (VAR_3->pg_vers[VAR_9]) {
    VAR_3->pg_hivers = VAR_9;
    if (VAR_3->pg_lovers > VAR_9)
     VAR_3->pg_lovers = VAR_9;
    if (VAR_3->pg_vers[VAR_9]->vs_xdrsize > VAR_10)
     VAR_10 = VAR_3->pg_vers[VAR_9]->vs_xdrsize;
   }
  VAR_3 = VAR_3->pg_next;
 }
 VAR_8->sv_xdrsize = VAR_10;
 FUNC_0(&VAR_8->sv_tempsocks);
 FUNC_0(&VAR_8->sv_permsocks);
 FUNC_2(&VAR_8->sv_temptimer);
 FUNC_7(&VAR_8->sv_lock);

 VAR_8->sv_nrpools = VAR_5;
 VAR_8->sv_pools =
  FUNC_3(VAR_8->sv_nrpools, sizeof(struct svc_pool),
   VAR_0);
 if (!VAR_8->sv_pools) {
  FUNC_4(VAR_8);
  return ((void*)0);
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->sv_nrpools; VAR_11++) {
  struct svc_pool *VAR_12 = &VAR_8->sv_pools[VAR_11];

  FUNC_1("svc: initialising pool %u for %s\n",
    VAR_11, VAR_8->sv_name);

  VAR_12->sp_id = VAR_11;
  FUNC_0(&VAR_12->sp_threads);
  FUNC_0(&VAR_12->sp_sockets);
  FUNC_0(&VAR_12->sp_all_threads);
  FUNC_7(&VAR_12->sp_lock);
 }

 if (FUNC_10(VAR_8)) {
         if (FUNC_9(VAR_8) < 0) {
   FUNC_4(VAR_8->sv_pools);
   FUNC_4(VAR_8);
   return ((void*)0);
  }
  if (!VAR_8->sv_shutdown)
   VAR_8->sv_shutdown = FUNC_8;
 }

 return VAR_8;
}
