
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torus {unsigned int* port_order; int flags; TYPE_1__* osm; int max_changes; int seed_cnt; int portgrp_sz; } ;
struct fabric {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int log; } ;
typedef int FILE ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char**,size_t*,int *) ;
 int FUNC_6 (struct torus*,int) ;
 int FUNC_7 (int,struct torus*,char const*) ;
 int FUNC_8 (int,struct torus*,char const*) ;
 int FUNC_9 (struct torus*,char const*) ;
 int FUNC_10 (struct torus*,char const*) ;
 int FUNC_11 (int *,char const*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 unsigned int FUNC_13 (int ) ;
 char* FUNC_14 (char*,char const*) ;

__attribute__((used)) static
bool FUNC_15(const char *VAR_8, struct fabric *VAR_9, struct torus *VAR_10)
{
 FILE *VAR_11;
 unsigned VAR_12;
 char *VAR_13;
 char *VAR_14 = ((void*)0);
 const char *VAR_15 = " \n\t\015";
 size_t VAR_16 = 0;
 size_t VAR_17 = 0;
 ssize_t VAR_18;
 bool VAR_19, VAR_20 = 1;

 if (!FUNC_6(VAR_10, 2))
  return 0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->port_order); VAR_12++)
  VAR_10->port_order[VAR_12] = VAR_12;

 VAR_11 = FUNC_3(VAR_8, "r");
 if (!VAR_11) {
  FUNC_1(&VAR_10->osm->log, VAR_2,
   "ERR 4E11: Opening %s: %s\n", VAR_8, FUNC_13(VAR_7));
  return 0;
 }
 VAR_10->flags |= VAR_1;
 VAR_10->portgrp_sz = VAR_3;
 VAR_10->max_changes = VAR_0;

next_line:
 VAR_18 = FUNC_5(&VAR_14, &VAR_16, VAR_11);
 if (VAR_18 < 0)
  goto out;

 ++VAR_17;

 VAR_13 = FUNC_14(VAR_14, VAR_15);
 if (!VAR_13)
  goto next_line;

 if (FUNC_12("torus", VAR_13) == 0) {
  VAR_19 = FUNC_10(VAR_10, VAR_15);
 } else if (FUNC_12("mesh", VAR_13) == 0) {
  VAR_10->flags |= VAR_4 | VAR_5 | VAR_6;
  VAR_19 = FUNC_10(VAR_10, VAR_15);
 } else if (FUNC_12("port_order", VAR_13) == 0) {
  VAR_19 = FUNC_9(VAR_10, VAR_15);
 } else if (FUNC_12("next_seed", VAR_13) == 0) {
  VAR_19 = FUNC_6(VAR_10, 1);
  VAR_10->seed_cnt++;
 } else if (FUNC_12("portgroup_max_ports", VAR_13) == 0) {
  VAR_19 = FUNC_11(&VAR_10->portgrp_sz, VAR_15);
 } else if (FUNC_12("xp_link", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_8(1, VAR_10, VAR_15);
 } else if (FUNC_12("xm_link", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_8(-1, VAR_10, VAR_15);
 } else if (FUNC_12("x_dateline", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_7(1, VAR_10, VAR_15);
 } else if (FUNC_12("yp_link", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_8(2, VAR_10, VAR_15);
 } else if (FUNC_12("ym_link", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_8(-2, VAR_10, VAR_15);
 } else if (FUNC_12("y_dateline", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_7(2, VAR_10, VAR_15);
 } else if (FUNC_12("zp_link", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_8(3, VAR_10, VAR_15);
 } else if (FUNC_12("zm_link", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_8(-3, VAR_10, VAR_15);
 } else if (FUNC_12("z_dateline", VAR_13) == 0) {
  if (!VAR_10->seed_cnt)
   VAR_10->seed_cnt++;
  VAR_19 = FUNC_7(3, VAR_10, VAR_15);
 } else if (FUNC_12("max_changes", VAR_13) == 0) {
  VAR_19 = FUNC_11(&VAR_10->max_changes, VAR_15);
 } else if (VAR_13[0] == '#')
  goto next_line;
 else {
  FUNC_1(&VAR_10->osm->log, VAR_2,
   "ERR 4E12: no keyword found: line %u\n",
   (unsigned)VAR_17);
  VAR_19 = 0;
 }
 if (!VAR_19) {
  FUNC_1(&VAR_10->osm->log, VAR_2,
   "ERR 4E13: parsing '%s': line %u\n",
   VAR_13, (unsigned)VAR_17);
 }
 VAR_20 = VAR_20 && VAR_19;
 goto next_line;

out:
 if (VAR_14)
  FUNC_4(VAR_14);
 FUNC_2(VAR_11);
 return VAR_20;
}
