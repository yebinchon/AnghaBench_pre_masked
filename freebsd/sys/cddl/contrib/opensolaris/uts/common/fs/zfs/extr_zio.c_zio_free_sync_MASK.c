
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef enum zio_stage { ____Placeholder_zio_stage } zio_stage ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int const*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_10 (int *,int *,scalar_t__,int const*,int *,scalar_t__,scalar_t__,int *,int *,int ,int ,int,int *,int ,int *,int ,int) ;
 int * FUNC_11 (int *,int *,int *,int *,int *,int ) ;

zio_t *
FUNC_12(zio_t *VAR_10, spa_t *VAR_11, uint64_t VAR_12, const blkptr_t *VAR_13,
    uint64_t VAR_14, enum zio_flag VAR_15)
{
 zio_t *VAR_16;
 enum zio_stage VAR_17 = VAR_1;

 FUNC_0(!FUNC_4(VAR_13));
 FUNC_0(FUNC_9(VAR_11) == VAR_12);
 FUNC_0(FUNC_8(VAR_11) < VAR_8);

 if (FUNC_2(VAR_13))
  return (FUNC_11(VAR_10, VAR_11, ((void*)0), ((void*)0), ((void*)0), 0));

 FUNC_7(VAR_11, VAR_13);
 FUNC_5(VAR_11, VAR_13);
 FUNC_6(VAR_11, VAR_13);

 if (VAR_9)
  VAR_17 |= VAR_3 | VAR_6 |
      VAR_5;





 else if (FUNC_3(VAR_13) || FUNC_1(VAR_13))
  VAR_17 |= VAR_3;

 VAR_15 |= VAR_0;

 VAR_16 = FUNC_10(VAR_10, VAR_11, VAR_12, VAR_13, ((void*)0), VAR_14,
     VAR_14, ((void*)0), ((void*)0), VAR_7, VAR_2,
     VAR_15, ((void*)0), 0, ((void*)0), VAR_4, VAR_17);

 return (VAR_16);
}
