
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;
struct b2055_inittab_entry {int flags; int ghz2; int ghz5; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,unsigned int,int ) ;
 struct b2055_inittab_entry* VAR_3 ;
 unsigned int FUNC_2 (struct b2055_inittab_entry*) ;

void FUNC_3(struct bwn_mac *VAR_4,
     bool VAR_5, bool VAR_6)
{
 const struct b2055_inittab_entry *VAR_7;
 unsigned int VAR_8, VAR_9 = 0;
 uint16_t VAR_10;

 for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_3); VAR_8++) {
  VAR_7 = &(VAR_3[VAR_8]);
  if (!(VAR_7->flags & VAR_0))
   continue;
  if ((VAR_7->flags & VAR_1) || VAR_6) {
   if (VAR_5)
    VAR_10 = VAR_7->ghz5;
   else
    VAR_10 = VAR_7->ghz2;
   FUNC_1(VAR_4, VAR_8, VAR_10);
   if (++VAR_9 % 4 == 0)
    FUNC_0(VAR_4, VAR_2);
  }
 }

 FUNC_0(VAR_4, VAR_2);
}
