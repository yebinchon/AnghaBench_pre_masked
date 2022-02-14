
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vioapic {scalar_t__ ioregsel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vioapic*) ;
 int FUNC_1 (struct vioapic*) ;
 scalar_t__ FUNC_2 (struct vioapic*,int,scalar_t__) ;
 int FUNC_3 (struct vioapic*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct vioapic *VAR_3, int VAR_4, uint64_t VAR_5,
    uint64_t *VAR_6, int VAR_7, bool VAR_8)
{
 uint64_t VAR_9;

 VAR_9 = VAR_5 - VAR_2;





 if (VAR_7 != 4 || (VAR_9 != VAR_0 && VAR_9 != VAR_1)) {
  if (VAR_8)
   *VAR_6 = 0;
  return (0);
 }

 FUNC_0(VAR_3);
 if (VAR_9 == VAR_0) {
  if (VAR_8)
   *VAR_6 = VAR_3->ioregsel;
  else
   VAR_3->ioregsel = *VAR_6;
 } else {
  if (VAR_8) {
   *VAR_6 = FUNC_2(VAR_3, VAR_4,
       VAR_3->ioregsel);
  } else {
   FUNC_3(VAR_3, VAR_4, VAR_3->ioregsel,
       *VAR_6);
  }
 }
 FUNC_1(VAR_3);

 return (0);
}
