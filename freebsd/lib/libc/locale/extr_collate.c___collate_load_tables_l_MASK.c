
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlocale_collate {int __collate_load_error; int * large_pri_table; int * chain_pri_table; int ** subst_table; void* char_pri_table; TYPE_1__* info; } ;
struct stat {int st_size; } ;
typedef int info ;
typedef int collate_subst_t ;
typedef int collate_large_t ;
struct TYPE_2__ {int directive_count; int chain_count; int large_count; int* subst_count; } ;
typedef TYPE_1__ collate_info_t ;
typedef int collate_char_t ;
typedef int collate_chain_t ;


 int VAR_0 ;
 char* VAR_1 ;
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char**,char*,int ,char const*) ;
 int VAR_12 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int,int ,int ,int,int ) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

int
FUNC_9(const char *VAR_13, struct xlocale_collate *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 char *VAR_18;
 char *VAR_19;
 char *VAR_20;
 collate_info_t *VAR_21;
 struct stat VAR_22;
 int VAR_23;

 VAR_14->__collate_load_error = 1;


 if (FUNC_7(VAR_13, "C") == 0 || FUNC_7(VAR_13, "POSIX") == 0 ||
     FUNC_8(VAR_13, "C.", 2) == 0) {
  return (VAR_8);
 }

 if (FUNC_3(&VAR_18, "%d/%s/LC_COLLATE", VAR_11, VAR_13) == -1)
  return (VAR_9);

 if ((VAR_23 = FUNC_2(VAR_18, VAR_5)) < 0) {
  FUNC_4(VAR_18);
  return (VAR_9);
 }
 FUNC_4(VAR_18);
 if (FUNC_1(VAR_23, &VAR_22) < 0) {
  (void) FUNC_0(VAR_23);
  return (VAR_9);
 }
 if (VAR_22.st_size < (VAR_0 + sizeof (VAR_21))) {
  (void) FUNC_0(VAR_23);
  VAR_12 = VAR_3;
  return (VAR_9);
 }
 VAR_20 = FUNC_5(((void*)0), VAR_22.st_size, VAR_6, VAR_4, VAR_23, 0);
 (void) FUNC_0(VAR_23);
 if ((VAR_19 = VAR_20) == ((void*)0)) {
  return (VAR_9);
 }

 if (FUNC_8(VAR_19, VAR_1, VAR_0) != 0) {
  (void) FUNC_6(VAR_20, VAR_22.st_size);
  VAR_12 = VAR_3;
  return (VAR_9);
 }
 VAR_19 += VAR_0;

 VAR_21 = (void *)VAR_19;
 VAR_19 += sizeof (*VAR_21);

 if ((VAR_21->directive_count < 1) ||
     (VAR_21->directive_count >= VAR_2) ||
     ((VAR_16 = VAR_21->chain_count) < 0)) {
  (void) FUNC_6(VAR_20, VAR_22.st_size);
  VAR_12 = VAR_3;
  return (VAR_9);
 }

 VAR_15 = (sizeof (collate_char_t) * (VAR_7 + 1)) +
     (sizeof (collate_chain_t) * VAR_16) +
     (sizeof (collate_large_t) * VAR_21->large_count);
 for (VAR_17 = 0; VAR_17 < VAR_21->directive_count; VAR_17++) {
  VAR_15 += sizeof (collate_subst_t) * VAR_21->subst_count[VAR_17];
 }
 if (VAR_15 != (VAR_22.st_size - (VAR_19 - VAR_20))) {
  (void) FUNC_6(VAR_20, VAR_22.st_size);
  VAR_12 = VAR_3;
  return (VAR_9);
 }

 VAR_14->info = VAR_21;
 VAR_14->char_pri_table = (void *)VAR_19;
 VAR_19 += sizeof (collate_char_t) * (VAR_7 + 1);

 for (VAR_17 = 0; VAR_17 < VAR_21->directive_count; VAR_17++) {
  if (VAR_21->subst_count[VAR_17] > 0) {
   VAR_14->subst_table[VAR_17] = (void *)VAR_19;
   VAR_19 += VAR_21->subst_count[VAR_17] * sizeof (collate_subst_t);
  } else {
   VAR_14->subst_table[VAR_17] = ((void*)0);
  }
 }

 if (VAR_16 > 0) {
  VAR_14->chain_pri_table = (void *)VAR_19;
  VAR_19 += VAR_16 * sizeof (collate_chain_t);
 } else
  VAR_14->chain_pri_table = ((void*)0);
 if (VAR_21->large_count > 0)
  VAR_14->large_pri_table = (void *)VAR_19;
 else
  VAR_14->large_pri_table = ((void*)0);

 VAR_14->__collate_load_error = 0;
 return (VAR_10);
}
