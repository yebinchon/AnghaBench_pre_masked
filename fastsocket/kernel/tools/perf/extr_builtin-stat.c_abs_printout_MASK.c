
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ type; int config; } ;
struct perf_evsel {TYPE_2__ attr; TYPE_1__* cgrp; } ;
struct TYPE_25__ {scalar_t__ n; } ;
struct TYPE_24__ {scalar_t__ n; } ;
struct TYPE_23__ {scalar_t__ n; } ;
struct TYPE_22__ {scalar_t__ n; } ;
struct TYPE_21__ {scalar_t__ n; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_18__ {int * map; } ;
struct TYPE_17__ {scalar_t__ n; } ;
struct TYPE_16__ {scalar_t__ n; } ;


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
 scalar_t__ VAR_14 ;
 double FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 int FUNC_1 (int ,char const*,...) ;
 double FUNC_2 (double,double) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 TYPE_14__* FUNC_3 (struct perf_evsel*) ;
 scalar_t__ FUNC_4 (struct perf_evsel*,int ,int ) ;
 int FUNC_5 (struct perf_evsel*) ;
 int FUNC_6 (int,struct perf_evsel*,double) ;
 int FUNC_7 (int,struct perf_evsel*,double) ;
 int FUNC_8 (int,struct perf_evsel*,double) ;
 int FUNC_9 (int,struct perf_evsel*,double) ;
 int FUNC_10 (int,struct perf_evsel*,double) ;
 int FUNC_11 (int,struct perf_evsel*,double) ;
 int FUNC_12 (int,struct perf_evsel*,double) ;
 int FUNC_13 (int,struct perf_evsel*,double) ;
 TYPE_13__* VAR_20 ;
 TYPE_3__* VAR_21 ;
 TYPE_3__* VAR_22 ;
 TYPE_10__* VAR_23 ;
 TYPE_9__* VAR_24 ;
 TYPE_8__* VAR_25 ;
 TYPE_7__* VAR_26 ;
 TYPE_6__* VAR_27 ;
 TYPE_3__* VAR_28 ;
 TYPE_3__* VAR_29 ;
 TYPE_3__* VAR_30 ;
 int FUNC_14 (char*,char*,int,int ,char*) ;

__attribute__((used)) static void FUNC_15(int VAR_31, struct perf_evsel *VAR_32, double VAR_33)
{
 double VAR_34, VAR_35 = 0.0;
 char VAR_36[16] = { '\0', };
 const char *VAR_37;

 if (VAR_16)
  VAR_37 = "%s%.0f%s%s";
 else if (VAR_15)
  VAR_37 = "%s%'18.0f%s%-25s";
 else
  VAR_37 = "%s%18.0f%s%-25s";

 if (VAR_18)
  FUNC_14(VAR_36, "CPU%*d%s",
   VAR_16 ? 0 : -4,
   FUNC_3(VAR_32)->map[VAR_31], VAR_17);
 else
  VAR_31 = 0;

 FUNC_1(VAR_19, VAR_37, VAR_36, VAR_33, VAR_17, FUNC_5(VAR_32));

 if (VAR_32->cgrp)
  FUNC_1(VAR_19, "%s%d", VAR_17, VAR_32->cgrp->name);

 if (VAR_16)
  return;

 if (FUNC_4(VAR_32, VAR_0, VAR_4)) {
  VAR_34 = FUNC_0(&VAR_22[VAR_31]);

  if (VAR_34)
   VAR_35 = VAR_33 / VAR_34;

  FUNC_1(VAR_19, " #   %5.2f  insns per cycle        ", VAR_35);

  VAR_34 = FUNC_0(&VAR_30[VAR_31]);
  VAR_34 = FUNC_2(VAR_34, FUNC_0(&VAR_29[VAR_31]));

  if (VAR_34 && VAR_33) {
   VAR_35 = VAR_34 / VAR_33;
   FUNC_1(VAR_19, "\n                                             #   %5.2f  stalled cycles per insn", VAR_35);
  }

 } else if (FUNC_4(VAR_32, VAR_0, VAR_1) &&
   VAR_20[VAR_31].n != 0) {
  FUNC_6(VAR_31, VAR_32, VAR_33);
 } else if (
  VAR_32->attr.type == VAR_14 &&
  VAR_32->attr.config == ( VAR_9 |
     ((VAR_12) << 8) |
     ((VAR_13) << 16)) &&
   VAR_25[VAR_31].n != 0) {
  FUNC_9(VAR_31, VAR_32, VAR_33);
 } else if (
  VAR_32->attr.type == VAR_14 &&
  VAR_32->attr.config == ( VAR_10 |
     ((VAR_12) << 8) |
     ((VAR_13) << 16)) &&
   VAR_26[VAR_31].n != 0) {
  FUNC_10(VAR_31, VAR_32, VAR_33);
 } else if (
  VAR_32->attr.type == VAR_14 &&
  VAR_32->attr.config == ( VAR_7 |
     ((VAR_12) << 8) |
     ((VAR_13) << 16)) &&
   VAR_23[VAR_31].n != 0) {
  FUNC_7(VAR_31, VAR_32, VAR_33);
 } else if (
  VAR_32->attr.type == VAR_14 &&
  VAR_32->attr.config == ( VAR_8 |
     ((VAR_12) << 8) |
     ((VAR_13) << 16)) &&
   VAR_24[VAR_31].n != 0) {
  FUNC_8(VAR_31, VAR_32, VAR_33);
 } else if (
  VAR_32->attr.type == VAR_14 &&
  VAR_32->attr.config == ( VAR_11 |
     ((VAR_12) << 8) |
     ((VAR_13) << 16)) &&
   VAR_27[VAR_31].n != 0) {
  FUNC_11(VAR_31, VAR_32, VAR_33);
 } else if (FUNC_4(VAR_32, VAR_0, VAR_2) &&
   VAR_21[VAR_31].n != 0) {
  VAR_34 = FUNC_0(&VAR_21[VAR_31]);

  if (VAR_34)
   VAR_35 = VAR_33 * 100 / VAR_34;

  FUNC_1(VAR_19, " # %8.3f %% of all cache refs    ", VAR_35);

 } else if (FUNC_4(VAR_32, VAR_0, VAR_6)) {
  FUNC_13(VAR_31, VAR_32, VAR_33);
 } else if (FUNC_4(VAR_32, VAR_0, VAR_5)) {
  FUNC_12(VAR_31, VAR_32, VAR_33);
 } else if (FUNC_4(VAR_32, VAR_0, VAR_3)) {
  VAR_34 = FUNC_0(&VAR_28[VAR_31]);

  if (VAR_34)
   VAR_35 = 1.0 * VAR_33 / VAR_34;

  FUNC_1(VAR_19, " # %8.3f GHz                    ", VAR_35);
 } else if (VAR_28[VAR_31].n != 0) {
  char VAR_38 = 'M';

  VAR_34 = FUNC_0(&VAR_28[VAR_31]);

  if (VAR_34)
   VAR_35 = 1000.0 * VAR_33 / VAR_34;
  if (VAR_35 < 0.001) {
   VAR_35 *= 1000;
   VAR_38 = 'K';
  }

  FUNC_1(VAR_19, " # %8.3f %c/sec                  ", VAR_35, VAR_38);
 } else {
  FUNC_1(VAR_19, "                                   ");
 }
}
