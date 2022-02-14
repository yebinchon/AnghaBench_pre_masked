
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; int type; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct list_head**,int*,struct perf_event_attr*,char*) ;
 int FUNC_1 (struct perf_event_attr*,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,char*,char*) ;

int FUNC_5(struct list_head **VAR_11, int *VAR_12,
      char *VAR_13, char *VAR_14, char *VAR_15)
{
 struct perf_event_attr VAR_16;
 char VAR_17[VAR_1];
 int VAR_18 = -1, VAR_19 = -1, VAR_20 = -1;
 char *VAR_21[2] = { VAR_14, VAR_15 };
 int VAR_22, VAR_23;





 VAR_18 = FUNC_2(VAR_13, VAR_8,
       VAR_2);
 if (VAR_18 == -1)
  return -VAR_0;

 VAR_23 = FUNC_4(VAR_17, VAR_1, "%s", VAR_13);

 for (VAR_22 = 0; (VAR_22 < 2) && (VAR_21[VAR_22]); VAR_22++) {
  char *VAR_24 = VAR_21[VAR_22];

  VAR_23 += FUNC_4(VAR_17 + VAR_23, VAR_1 - VAR_23, "-%s", VAR_24);

  if (VAR_19 == -1) {
   VAR_19 = FUNC_2(VAR_24, VAR_9,
       VAR_3);
   if (VAR_19 >= 0) {
    if (!FUNC_3(VAR_18, VAR_19))
     return -VAR_0;
    continue;
   }
  }

  if (VAR_20 == -1) {
   VAR_20 = FUNC_2(VAR_24, VAR_10,
           VAR_6);
   if (VAR_20 >= 0)
    continue;
  }
 }




 if (VAR_19 == -1)
  VAR_19 = VAR_4;




 if (VAR_20 == -1)
  VAR_20 = VAR_5;

 FUNC_1(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.config = VAR_18 | (VAR_19 << 8) | (VAR_20 << 16);
 VAR_16.type = VAR_7;
 return FUNC_0(VAR_11, VAR_12, &VAR_16, VAR_17);
}
