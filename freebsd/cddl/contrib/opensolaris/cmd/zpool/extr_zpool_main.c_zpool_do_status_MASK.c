
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb_count; void* cb_allpools; void* cb_first; void* cb_explain; void* cb_dedup_stats; void* cb_verbose; int member_0; } ;
typedef TYPE_1__ status_cbdata_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char**,void*,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int*,char**,unsigned long*,unsigned long*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (char*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ) ;

int
FUNC_10(int VAR_9, char **VAR_10)
{
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13 = 0, VAR_14 = 0;
 status_cbdata_t VAR_15 = { 0 };


 while ((VAR_11 = FUNC_4(VAR_9, VAR_10, "vxDT:")) != -1) {
  switch (VAR_11) {
  case 'v':
   VAR_15.cb_verbose = VAR_1;
   break;
  case 'x':
   VAR_15.cb_explain = VAR_1;
   break;
  case 'D':
   VAR_15.cb_dedup_stats = VAR_1;
   break;
  case 'T':
   FUNC_3(*VAR_3);
   break;
  case '?':
   (void) FUNC_1(VAR_7, FUNC_5("invalid option '%c'\n"),
       VAR_5);
   FUNC_9(VAR_0);
  }
 }

 VAR_9 -= VAR_4;
 VAR_10 += VAR_4;

 FUNC_2(&VAR_9, VAR_10, &VAR_13, &VAR_14);

 if (VAR_9 == 0)
  VAR_15.cb_allpools = VAR_1;

 VAR_15.cb_first = VAR_1;

 for (;;) {
  if (VAR_8 != VAR_2)
   FUNC_6(VAR_8);

  VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_1, ((void*)0),
      VAR_6, &VAR_15);

  if (VAR_9 == 0 && VAR_15.cb_count == 0)
   (void) FUNC_7(FUNC_5("no pools available\n"));
  else if (VAR_15.cb_explain && VAR_15.cb_first && VAR_15.cb_allpools)
   (void) FUNC_7(FUNC_5("all pools are healthy\n"));

  if (VAR_12 != 0)
   return (VAR_12);

  if (VAR_13 == 0)
   break;

  if (VAR_14 != 0 && --VAR_14 == 0)
   break;

  (void) FUNC_8(VAR_13);
 }

 return (0);
}
