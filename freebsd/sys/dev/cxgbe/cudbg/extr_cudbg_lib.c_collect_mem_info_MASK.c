
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct cudbg_init {struct adapter* adap; } ;
struct card_mem {int mem_flag; void* size_edc1; void* size_edc0; void* size_mc1; void* size_mc0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_7(struct cudbg_init *VAR_15,
        struct card_mem *VAR_16)
{
 struct adapter *VAR_17 = VAR_15->adap;
 u32 VAR_18;
 int VAR_19 = 0;

 if (FUNC_5(VAR_17))
  VAR_19 = 1;

 if (VAR_19) {
  VAR_18 = FUNC_6(VAR_17, VAR_4);
  VAR_18 = FUNC_4(VAR_18);
  VAR_16->size_mc0 = (u16)VAR_18;

  VAR_18 = FUNC_6(VAR_17, VAR_5);
  if (VAR_18 & VAR_12)
   VAR_16->mem_flag |= (1 << VAR_13);

 } else {
  VAR_18 = FUNC_6(VAR_17, VAR_2);
  VAR_18 = FUNC_2(VAR_18);
  VAR_16->size_mc0 = (u16)VAR_18;

  VAR_18 = FUNC_6(VAR_17, VAR_3);
  VAR_18 = FUNC_3(VAR_18);
  VAR_16->size_mc1 = (u16)VAR_18;

  VAR_18 = FUNC_6(VAR_17, VAR_5);
  if (VAR_18 & VAR_10)
   VAR_16->mem_flag |= (1 << VAR_13);
  if (VAR_18 & VAR_11)
   VAR_16->mem_flag |= (1 << VAR_14);
 }

 VAR_18 = FUNC_6(VAR_17, VAR_0);
 VAR_18 = FUNC_0(VAR_18);
 VAR_16->size_edc0 = (u16)VAR_18;

 VAR_18 = FUNC_6(VAR_17, VAR_1);
 VAR_18 = FUNC_1(VAR_18);
 VAR_16->size_edc1 = (u16)VAR_18;

 VAR_18 = FUNC_6(VAR_17, VAR_5);
 if (VAR_18 & VAR_8)
  VAR_16->mem_flag |= (1 << VAR_6);
 if (VAR_18 & VAR_9)
  VAR_16->mem_flag |= (1 << VAR_7);

}
