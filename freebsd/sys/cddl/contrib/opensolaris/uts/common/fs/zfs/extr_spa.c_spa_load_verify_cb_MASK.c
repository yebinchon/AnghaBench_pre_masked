
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int io_private; } ;
typedef TYPE_1__ zio_t ;
typedef int zilog_t ;
typedef int zbookmark_phys_t ;
struct TYPE_7__ {scalar_t__ spa_load_verify_ios; int spa_scrub_lock; int spa_scrub_io_cv; } ;
typedef TYPE_2__ spa_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int const*,int ,size_t,int ,int ,int ,int,int const*) ;

__attribute__((used)) static int
FUNC_10(spa_t *VAR_10, zilog_t *VAR_11, const blkptr_t *VAR_12,
    const zbookmark_phys_t *VAR_13, const dnode_phys_t *VAR_14, void *VAR_15)
{
 if (VAR_12 == ((void*)0) || FUNC_2(VAR_12) || FUNC_1(VAR_12))
  return (0);





 if (!VAR_9)
  return (0);
 if (!FUNC_3(VAR_12) && !VAR_6)
  return (0);

 zio_t *VAR_16 = VAR_15;
 size_t VAR_17 = FUNC_0(VAR_12);

 FUNC_6(&VAR_10->spa_scrub_lock);
 while (VAR_10->spa_load_verify_ios >= VAR_8)
  FUNC_5(&VAR_10->spa_scrub_io_cv, &VAR_10->spa_scrub_lock);
 VAR_10->spa_load_verify_ios++;
 FUNC_7(&VAR_10->spa_scrub_lock);

 FUNC_8(FUNC_9(VAR_16, VAR_10, VAR_12, FUNC_4(VAR_17, VAR_0), VAR_17,
     VAR_7, VAR_16->io_private, VAR_5,
     VAR_4 | VAR_1 |
     VAR_3 | VAR_2, VAR_13));
 return (0);
}
