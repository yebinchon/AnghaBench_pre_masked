
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct macsec_ciphersuite {scalar_t__ id; } ;
struct ieee802_1x_mka_participant {int dummy; } ;
typedef int be64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct macsec_ciphersuite* VAR_2 ;
 int FUNC_1 (int *,int const*,int ) ;

__attribute__((used)) static struct macsec_ciphersuite *
FUNC_2(struct ieee802_1x_mka_participant *VAR_3,
    const u8 *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 u64 VAR_7;
 be64 VAR_8;

 FUNC_1(&VAR_8, VAR_4, VAR_0);
 VAR_7 = FUNC_0(VAR_8);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_2[VAR_6].id == VAR_7) {
   *VAR_5 = VAR_6;
   return &VAR_2[VAR_6];
  }
 }

 return ((void*)0);
}
