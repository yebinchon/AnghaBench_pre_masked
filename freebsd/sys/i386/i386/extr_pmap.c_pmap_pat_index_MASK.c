
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_0(pmap_t VAR_7, pt_entry_t VAR_8, bool VAR_9)
{
 int VAR_10, VAR_11;

 if ((VAR_5 & VAR_0) == 0)
  return (0);

 VAR_11 = 0;

 VAR_10 = VAR_9 ? VAR_3 : VAR_4;

 if ((VAR_8 & VAR_10) != 0)
  VAR_11 |= 0x4;
 if ((VAR_8 & VAR_1) != 0)
  VAR_11 |= 0x2;
 if ((VAR_8 & VAR_2) != 0)
  VAR_11 |= 0x1;


 if (VAR_6) {
  if (VAR_11 == 4)
   VAR_11 = 0;
  if (VAR_11 == 7)
   VAR_11 = 3;
 } else {

 }

 return (VAR_11);
}
