
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_type; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_cred {int dummy; } ;
struct dtfs_file {int ** df_blocks; scalar_t__ df_datalen; } ;
typedef size_t quad_t ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 size_t FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dtfs_file* FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (size_t,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct puffs_node*,int,int ,int ) ;
 int FUNC_6 (int *,int *,size_t) ;

int
FUNC_7(struct puffs_usermount *VAR_5, void *VAR_6, uint8_t *VAR_7,
 off_t VAR_8, size_t *VAR_9, const struct puffs_cred *VAR_10, int VAR_11)
{
 struct puffs_node *VAR_12 = VAR_6;
 struct dtfs_file *VAR_13 = FUNC_3(VAR_6);
 quad_t VAR_14, VAR_15;
 uint8_t *VAR_16, *VAR_17;
 size_t VAR_18;

 if (VAR_12->pn_va.va_type != VAR_4)
  return VAR_3;

 VAR_14 = FUNC_4(*VAR_9, VAR_13->df_datalen - VAR_8);
 if (VAR_14 < 0)
  return VAR_2;

 VAR_17 = VAR_7;
 VAR_15 = VAR_14;
 while (VAR_14 > 0) {
  VAR_18 = FUNC_4(VAR_14, FUNC_0(VAR_8, VAR_1));
  VAR_16 = VAR_13->df_blocks[FUNC_1(VAR_8, VAR_0)]
      + FUNC_2(VAR_8, VAR_1);
  FUNC_6(VAR_17, VAR_16, VAR_18);
  VAR_8 += VAR_18;
  VAR_17 += VAR_18;
  VAR_14 -= VAR_18;
 }
 *VAR_9 -= VAR_15;

 FUNC_5(VAR_12, 1, 0, 0);

 return 0;
}
