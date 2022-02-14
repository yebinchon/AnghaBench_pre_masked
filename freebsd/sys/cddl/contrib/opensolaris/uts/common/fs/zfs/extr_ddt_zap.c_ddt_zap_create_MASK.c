
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_flags_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ,int,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(objset_t *VAR_8, uint64_t *VAR_9, dmu_tx_t *VAR_10, boolean_t VAR_11)
{
 zap_flags_t VAR_12 = VAR_3 | VAR_5;

 if (VAR_11)
  VAR_12 |= VAR_4;

 *VAR_9 = FUNC_0(VAR_8, 0, VAR_12, VAR_0,
     VAR_7, VAR_6,
     VAR_1, 0, VAR_10);

 return (*VAR_9 == 0 ? VAR_2 : 0);
}
