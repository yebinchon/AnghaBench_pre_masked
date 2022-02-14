
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {TYPE_2__* mz_chunk; } ;
typedef TYPE_1__ mzap_phys_t ;
struct TYPE_6__ {scalar_t__ mze_value; int mze_name; } ;
typedef TYPE_2__ mzap_ent_phys_t ;
struct TYPE_7__ {int dn_datablkszsec; } ;
typedef TYPE_3__ dnode_phys_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(const spa_t *VAR_3, const dnode_phys_t *VAR_4, char *VAR_5, uint64_t VAR_6)
{
 const mzap_phys_t *VAR_7;
 const mzap_ent_phys_t *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;





 VAR_9 = VAR_4->dn_datablkszsec * 512;

 VAR_7 = (const mzap_phys_t *) VAR_2;
 VAR_10 = VAR_9 / VAR_1 - 1;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_8 = &VAR_7->mz_chunk[VAR_11];
  if (VAR_6 == VAR_8->mze_value) {
   FUNC_0(VAR_5, VAR_8->mze_name);
   return (0);
  }
 }

 return (VAR_0);
}
