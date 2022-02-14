
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_lsm_secattr_catmap {int startbit; int* bitmap; struct netlbl_lsm_secattr_catmap* next; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct netlbl_lsm_secattr_catmap* FUNC_0 (int ) ;

int FUNC_1(struct netlbl_lsm_secattr_catmap *VAR_4,
     u32 VAR_5,
     gfp_t VAR_6)
{
 struct netlbl_lsm_secattr_catmap *VAR_7 = VAR_4;
 u32 VAR_8;
 u32 VAR_9;

 while (VAR_7->next != ((void*)0) &&
        VAR_5 >= (VAR_7->startbit + VAR_3))
  VAR_7 = VAR_7->next;
 if (VAR_5 >= (VAR_7->startbit + VAR_3)) {
  VAR_7->next = FUNC_0(VAR_6);
  if (VAR_7->next == ((void*)0))
   return -VAR_0;
  VAR_7 = VAR_7->next;
  VAR_7->startbit = VAR_5 & ~(VAR_3 - 1);
 }


 VAR_9 = (VAR_5 - VAR_7->startbit) / VAR_2;
 VAR_8 = VAR_5 - VAR_7->startbit - (VAR_2 * VAR_9);
 VAR_7->bitmap[VAR_9] |= VAR_1 << VAR_8;

 return 0;
}
