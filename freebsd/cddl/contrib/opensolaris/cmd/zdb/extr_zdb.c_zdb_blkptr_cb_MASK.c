
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_24__ {scalar_t__ zcb_lastprint; int zcb_start; int zcb_totalasize; TYPE_1__** zcb_type; scalar_t__ zcb_readfails; } ;
typedef TYPE_2__ zdb_cb_t ;
struct TYPE_25__ {scalar_t__ zb_level; scalar_t__ zb_object; scalar_t__ zb_objset; } ;
typedef TYPE_3__ zbookmark_phys_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_26__ {scalar_t__ spa_load_verify_ios; int spa_scrub_lock; int spa_scrub_inflight; int spa_scrub_io_cv; } ;
typedef TYPE_4__ spa_t ;
typedef int longlong_t ;
typedef int dnode_phys_t ;
typedef int dmu_object_type_t ;
typedef int buf ;
typedef int boolean_t ;
struct TYPE_27__ {scalar_t__ blk_birth; } ;
typedef TYPE_5__ blkptr_t ;
typedef int blkbuf ;
typedef int abd_t ;
struct TYPE_23__ {int zb_asize; } ;


 scalar_t__ FUNC_0 (TYPE_5__ const*) ;
 size_t FUNC_1 (TYPE_5__ const*) ;
 int FUNC_2 (TYPE_5__ const*) ;
 int FUNC_3 (TYPE_5__ const*) ;
 scalar_t__ FUNC_4 (TYPE_5__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_7 (size_t,int ) ;
 scalar_t__ FUNC_8 (int const*,TYPE_5__ const*,TYPE_3__ const*) ;
 int FUNC_9 (int *,int *) ;
 int* VAR_14 ;
 int FUNC_10 (int ,char*,char*,int,int,int,int) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_15 (char*,int,TYPE_5__ const*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_16 (TYPE_2__*,int *,TYPE_5__ const*,int) ;
 int FUNC_17 (int,char*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,TYPE_4__*,TYPE_5__ const*,int *,size_t,int ,TYPE_2__*,int ,int,TYPE_3__ const*) ;

__attribute__((used)) static int
FUNC_20(spa_t *VAR_18, zilog_t *VAR_19, const blkptr_t *VAR_20,
    const zbookmark_phys_t *VAR_21, const dnode_phys_t *VAR_22, void *VAR_23)
{
 zdb_cb_t *VAR_24 = VAR_23;
 dmu_object_type_t VAR_25;
 boolean_t VAR_26;

 if (VAR_20 == ((void*)0))
  return (0);

 if (VAR_14['b'] >= 5 && VAR_20->blk_birth > 0) {
  char VAR_27[VAR_0];
  FUNC_15(VAR_27, sizeof (VAR_27), VAR_20);
  (void) FUNC_14("objset %llu object %llu "
      "level %lld offset 0x%llx %s\n",
      (u_longlong_t)VAR_21->zb_objset,
      (u_longlong_t)VAR_21->zb_object,
      (longlong_t)VAR_21->zb_level,
      (u_longlong_t)FUNC_8(VAR_22, VAR_20, VAR_21),
      VAR_27);
 }

 if (FUNC_4(VAR_20))
  return (0);

 VAR_25 = FUNC_2(VAR_20);

 FUNC_16(VAR_24, VAR_19, VAR_20,
     (VAR_25 & VAR_2) ? VAR_7 : VAR_25);

 VAR_26 = (FUNC_0(VAR_20) != 0 || FUNC_6(VAR_25));

 if (!FUNC_3(VAR_20) &&
     (VAR_14['c'] > 1 || (VAR_14['c'] && VAR_26))) {
  size_t VAR_28 = FUNC_1(VAR_20);
  abd_t *VAR_29 = FUNC_7(VAR_28, VAR_1);
  int VAR_30 = VAR_9 | VAR_11 | VAR_10;


  if (VAR_21->zb_level == VAR_6)
   VAR_30 |= VAR_12;

  FUNC_12(&VAR_18->spa_scrub_lock);
  while (VAR_18->spa_load_verify_ios > VAR_15)
   FUNC_9(&VAR_18->spa_scrub_io_cv, &VAR_18->spa_scrub_lock);
  VAR_18->spa_scrub_inflight++;
  VAR_18->spa_load_verify_ios++;
  FUNC_13(&VAR_18->spa_scrub_lock);

  FUNC_18(FUNC_19(((void*)0), VAR_18, VAR_20, VAR_29, VAR_28,
      VAR_17, VAR_24, VAR_13, VAR_30, VAR_21));
 }

 VAR_24->zcb_readfails = 0;


 static int VAR_31;
 if (++VAR_31 > 100)
  VAR_31 = 0;
 else
  return (0);

 if (VAR_14['b'] < 5 && FUNC_11() > VAR_24->zcb_lastprint + VAR_3) {
  uint64_t VAR_32 = FUNC_11();
  char VAR_33[10];
  uint64_t VAR_34 = VAR_24->zcb_type[VAR_5][VAR_8].zb_asize;
  int VAR_35 =
      1 + VAR_34 / (1 + ((VAR_32 - VAR_24->zcb_start) / 1000 / 1000));
  int VAR_36 =
      (VAR_24->zcb_totalasize - VAR_34) / 1024 / VAR_35;


  FUNC_5(sizeof (VAR_33) >= VAR_4);

  FUNC_17(VAR_34, VAR_33, sizeof (VAR_33));
  (void) FUNC_10(VAR_16,
      "\r%5s completed (%4dMB/s) "
      "estimated time remaining: %uhr %02umin %02usec        ",
      VAR_33, VAR_35 / 1024,
      VAR_36 / 60 / 60,
      VAR_36 / 60 % 60,
      VAR_36 % 60);

  VAR_24->zcb_lastprint = VAR_32;
 }

 return (0);
}
