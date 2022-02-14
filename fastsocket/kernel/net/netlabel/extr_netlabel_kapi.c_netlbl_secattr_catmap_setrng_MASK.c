
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netlbl_lsm_secattr_catmap {scalar_t__ startbit; struct netlbl_lsm_secattr_catmap* next; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct netlbl_lsm_secattr_catmap*,scalar_t__,int ) ;

int FUNC_1(struct netlbl_lsm_secattr_catmap *VAR_2,
     u32 VAR_3,
     u32 VAR_4,
     gfp_t VAR_5)
{
 int VAR_6 = 0;
 struct netlbl_lsm_secattr_catmap *VAR_7 = VAR_2;
 u32 VAR_8;
 u32 VAR_9;







 while (VAR_7->next != ((void*)0) &&
        VAR_3 >= (VAR_7->startbit + VAR_1))
  VAR_7 = VAR_7->next;
 VAR_8 = VAR_7->startbit + VAR_1;

 for (VAR_9 = VAR_3; VAR_9 <= VAR_4 && VAR_6 == 0; VAR_9++) {
  if (VAR_9 >= VAR_8 && VAR_7->next != ((void*)0)) {
   VAR_7 = VAR_7->next;
   VAR_8 = VAR_7->startbit + VAR_1;
  }
  VAR_6 = FUNC_0(VAR_7, VAR_9, VAR_0);
 }

 return VAR_6;
}
