
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_6__ {size_t dn_datablkszsec; } ;
typedef TYPE_1__ dnode_phys_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*,TYPE_1__ const*,int ,scalar_t__,size_t) ;
 int FUNC_1 (int const*,TYPE_1__ const*,char const*,scalar_t__,scalar_t__,void*) ;
 int FUNC_2 (TYPE_1__ const*,char const*,void*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_4(const spa_t *VAR_5, const dnode_phys_t *VAR_6, const char *VAR_7,
    uint64_t VAR_8, uint64_t VAR_9, void *VAR_10)
{
 int VAR_11;
 uint64_t VAR_12;
 size_t VAR_13 = VAR_6->dn_datablkszsec << VAR_1;

 VAR_11 = FUNC_0(VAR_5, VAR_6, 0, VAR_4, VAR_13);
 if (VAR_11)
  return (VAR_11);

 VAR_12 = *(uint64_t *) VAR_4;
 if (VAR_12 == VAR_3)
  return FUNC_2(VAR_6, VAR_7, VAR_10);
 else if (VAR_12 == VAR_2) {
  return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10);
 }
 FUNC_3("ZFS: invalid zap_type=%d\n", (int)VAR_12);
 return (VAR_0);
}
