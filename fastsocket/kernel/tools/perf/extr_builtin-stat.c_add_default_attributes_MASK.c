
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event_attr {int config; int type; } ;
struct TYPE_3__ {int nr_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_1__* VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_0 (TYPE_1__*,struct perf_event_attr*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct perf_event_attr VAR_25[] = {

  { .type = VAR_21, .config = VAR_18 },
  { .type = VAR_21, .config = VAR_15 },
  { .type = VAR_21, .config = VAR_16 },
  { .type = VAR_21, .config = VAR_17 },

  { .type = VAR_19, .config = VAR_11 },
  { .type = VAR_19, .config = VAR_14 },
  { .type = VAR_19, .config = VAR_13 },
  { .type = VAR_19, .config = VAR_12 },
  { .type = VAR_19, .config = VAR_0 },
  { .type = VAR_19, .config = VAR_1 },

};




 struct perf_event_attr VAR_26[] = {

  { .type = VAR_20,
    .config =
  VAR_4 << 0 |
 (VAR_8 << 8) |
 (VAR_9 << 16) },

  { .type = VAR_20,
    .config =
  VAR_4 << 0 |
 (VAR_8 << 8) |
 (VAR_10 << 16) },

  { .type = VAR_20,
    .config =
  VAR_6 << 0 |
 (VAR_8 << 8) |
 (VAR_9 << 16) },

  { .type = VAR_20,
    .config =
  VAR_6 << 0 |
 (VAR_8 << 8) |
 (VAR_10 << 16) },
};




 struct perf_event_attr VAR_27[] = {

  { .type = VAR_20,
    .config =
  VAR_5 << 0 |
 (VAR_8 << 8) |
 (VAR_9 << 16) },

  { .type = VAR_20,
    .config =
  VAR_5 << 0 |
 (VAR_8 << 8) |
 (VAR_10 << 16) },

  { .type = VAR_20,
    .config =
  VAR_2 << 0 |
 (VAR_8 << 8) |
 (VAR_9 << 16) },

  { .type = VAR_20,
    .config =
  VAR_2 << 0 |
 (VAR_8 << 8) |
 (VAR_10 << 16) },

  { .type = VAR_20,
    .config =
  VAR_3 << 0 |
 (VAR_8 << 8) |
 (VAR_9 << 16) },

  { .type = VAR_20,
    .config =
  VAR_3 << 0 |
 (VAR_8 << 8) |
 (VAR_10 << 16) },

};




 struct perf_event_attr VAR_28[] = {

  { .type = VAR_20,
    .config =
  VAR_4 << 0 |
 (VAR_7 << 8) |
 (VAR_9 << 16) },

  { .type = VAR_20,
    .config =
  VAR_4 << 0 |
 (VAR_7 << 8) |
 (VAR_10 << 16) },
};


 if (VAR_24)
  return 0;

 if (!VAR_23->nr_entries) {
  if (FUNC_0(VAR_23, VAR_25) < 0)
   return -1;
 }



 if (VAR_22 < 1)
  return 0;


 if (FUNC_0(VAR_23, VAR_26) < 0)
  return -1;

 if (VAR_22 < 2)
  return 0;


 if (FUNC_0(VAR_23, VAR_27) < 0)
  return -1;

 if (VAR_22 < 3)
  return 0;


 return FUNC_0(VAR_23, VAR_28);
}
