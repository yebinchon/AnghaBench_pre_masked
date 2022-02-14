
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ehci_softc_t ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(void *VAR_7)
{
 ehci_softc_t *VAR_8 = VAR_7;
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if (VAR_9) {
  FUNC_2("USB error: ");
  if (VAR_9 & VAR_1) {
   uint32_t VAR_10;

   VAR_10 = FUNC_0(VAR_8, VAR_5);
   FUNC_2("address decoding error (addr=%#x)\n", VAR_10);
  }
  if (VAR_9 & VAR_4)
   FUNC_2("host underflow\n");
  if (VAR_9 & VAR_3)
   FUNC_2("host overflow\n");
  if (VAR_9 & VAR_2)
   FUNC_2("device underflow\n");
  if (VAR_9 & ~(VAR_1 | VAR_4 |
      VAR_3 | VAR_2))
   FUNC_2("unknown cause (cause=%#x)\n", VAR_9);

  FUNC_1(VAR_8, VAR_6, 0);
 }
 return (VAR_0);
}
