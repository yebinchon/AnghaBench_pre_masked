
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct worker {int dummy; } ;
struct daemon {int num; struct worker** workers; TYPE_1__* cfg; int dtenv; scalar_t__ num_ports; scalar_t__ reuseport; int rand; } ;
struct TYPE_2__ {int num_threads; int dnstap_socket_path; scalar_t__ dnstap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (struct daemon*,int*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (unsigned int,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int) ;
 struct worker* FUNC_14 (struct daemon*,int,int*,int) ;

__attribute__((used)) static void
FUNC_15(struct daemon* VAR_1)
{
 int VAR_2, VAR_3;
 int* VAR_4;
 FUNC_8(VAR_1 && VAR_1->cfg);
 if(!VAR_1->rand) {
  unsigned int VAR_5 = (unsigned int)FUNC_10(((void*)0)) ^
   (unsigned int)FUNC_6() ^ 0x438;
  VAR_1->rand = FUNC_11(VAR_5, ((void*)0));
  if(!VAR_1->rand)
   FUNC_4("could not init random generator");
  FUNC_7((uint32_t)FUNC_12(VAR_1->rand));
 }
 VAR_4 = (int*)FUNC_0(65536, sizeof(int));
 if(!VAR_4)
  FUNC_4("out of memory during daemon init");
 VAR_3 = FUNC_1(VAR_1, VAR_4);
 FUNC_13(VAR_0, "total of %d outgoing ports available", VAR_3);

 VAR_1->num = (VAR_1->cfg->num_threads?VAR_1->cfg->num_threads:1);
 if(VAR_1->reuseport && (int)VAR_1->num < (int)VAR_1->num_ports) {
  FUNC_9("cannot reduce num-threads to %d because so-reuseport "
   "so continuing with %d threads.", (int)VAR_1->num,
   (int)VAR_1->num_ports);
  VAR_1->num = (int)VAR_1->num_ports;
 }
 VAR_1->workers = (struct worker**)FUNC_0((size_t)VAR_1->num,
  sizeof(struct worker*));
 if(!VAR_1->workers)
  FUNC_4("out of memory during daemon init");
 if(VAR_1->cfg->dnstap) {







  FUNC_4("dnstap enabled in config but not built with dnstap support");

 }
 for(VAR_2=0; VAR_2<VAR_1->num; VAR_2++) {
  if(!(VAR_1->workers[VAR_2] = FUNC_14(VAR_1, VAR_2,
   VAR_4+VAR_3*VAR_2/VAR_1->num,
   VAR_3*(VAR_2+1)/VAR_1->num - VAR_3*VAR_2/VAR_1->num)))

   FUNC_4("could not create worker");
 }
 FUNC_5(VAR_4);
}
