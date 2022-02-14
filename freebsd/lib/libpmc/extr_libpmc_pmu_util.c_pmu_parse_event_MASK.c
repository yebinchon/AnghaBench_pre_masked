
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_event_desc {int ped_umask; void* ped_l3_slice; void* ped_l3_thread; void* ped_config1; void* ped_ch_mask; void* ped_fc_mask; void* ped_ldlat; void* ped_frontend; void* ped_edge; void* ped_inv; void* ped_cmask; void* ped_any; void* ped_offcore_rsp; void* ped_period; void* ped_event; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pmu_event_desc*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char**,char*) ;
 void* FUNC_8 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_9(struct pmu_event_desc *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9;

 if ((VAR_4 = FUNC_6(VAR_3)) == ((void*)0))
  return (VAR_1);
 VAR_8 = VAR_4;
 FUNC_1(VAR_2, sizeof(*VAR_2));
 VAR_2->ped_period = VAR_0;
 VAR_2->ped_umask = -1;
 while ((VAR_5 = FUNC_7(&VAR_4, ",")) != ((void*)0)) {
  VAR_6 = FUNC_7(&VAR_5, "=");
  if (VAR_6 == ((void*)0))
   FUNC_0();
  VAR_7 = VAR_5;
  if (FUNC_5(VAR_6, "umask") == 0)
   VAR_2->ped_umask = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "event") == 0)
   VAR_2->ped_event = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "period") == 0)
   VAR_2->ped_period = FUNC_8(VAR_7, ((void*)0), 10);
  else if (FUNC_5(VAR_6, "offcore_rsp") == 0)
   VAR_2->ped_offcore_rsp = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "any") == 0)
   VAR_2->ped_any = FUNC_8(VAR_7, ((void*)0), 10);
  else if (FUNC_5(VAR_6, "cmask") == 0)
   VAR_2->ped_cmask = FUNC_8(VAR_7, ((void*)0), 10);
  else if (FUNC_5(VAR_6, "inv") == 0)
   VAR_2->ped_inv = FUNC_8(VAR_7, ((void*)0), 10);
  else if (FUNC_5(VAR_6, "edge") == 0)
   VAR_2->ped_edge = FUNC_8(VAR_7, ((void*)0), 10);
  else if (FUNC_5(VAR_6, "frontend") == 0)
   VAR_2->ped_frontend = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "ldlat") == 0)
   VAR_2->ped_ldlat = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "fc_mask") == 0)
   VAR_2->ped_fc_mask = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "ch_mask") == 0)
   VAR_2->ped_ch_mask = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "config1") == 0)
   VAR_2->ped_config1 = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "l3_thread_mask") == 0)
   VAR_2->ped_l3_thread = FUNC_8(VAR_7, ((void*)0), 16);
  else if (FUNC_5(VAR_6, "l3_slice_mask") == 0)
   VAR_2->ped_l3_slice = FUNC_8(VAR_7, ((void*)0), 16);
  else {
   VAR_9 = FUNC_3("PMUDEBUG");
   if (VAR_9 != ((void*)0) && FUNC_5(VAR_9, "true") == 0 && VAR_7 != ((void*)0))
    FUNC_4("unrecognized kvpair: %s:%s\n", VAR_6, VAR_7);
  }
 }
 FUNC_2(VAR_8);
 return (0);
}
