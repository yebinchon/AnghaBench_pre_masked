
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_long ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,...) ;
 int* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(void)
{
 uint64_t VAR_10;
 uint32_t VAR_11 = VAR_5;
 uint32_t VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;





 if (VAR_11 == 0)
  VAR_11 = 0x1;
 else if (VAR_11 != 0x1) {
  FUNC_4("WARNING: Starting uniprocessor kernel on cpumask [0x%lx]!\n"
      "WARNING: Other CPUs will be unused.\n", (u_long)VAR_11);
  VAR_11 = 0x1;
 }


 VAR_8 = 1;
 VAR_12 = VAR_11 & 0xf;
 switch (VAR_12) {
 case 1:
  VAR_9 = 1;
  VAR_7 = 0;
  break;
 case 3:
  VAR_9 = 2;
  VAR_7 = 2;
  break;
 case 0xf:
  VAR_9 = 4;
  VAR_7 = 3;
  break;
 default:
  goto unsupp;
 }


 VAR_10 = FUNC_0(0);
 VAR_14 = FUNC_2(VAR_10, VAR_2) & 0xff;


 if (FUNC_1() == VAR_0)
  VAR_14 = 0xe;


 for (VAR_15 = 1; VAR_15 < VAR_3; VAR_15++) {
  if ((VAR_14 & (1 << VAR_15)) == 0)
   VAR_11 &= ~(0xfu << (4 * VAR_15));
 }


 for (VAR_15 = 1; VAR_15 < VAR_3; VAR_15++) {
  VAR_13 = (VAR_11 >> (4 * VAR_15)) & 0xf;
  if (VAR_13 == 0)
   continue;
  if (VAR_13 != VAR_12)
   goto unsupp;
  VAR_8++;
 }

 VAR_5 = VAR_11;

 for (VAR_15 = 0; VAR_15< VAR_1; VAR_15++)
  VAR_4[VAR_15] =
      VAR_6[VAR_15] = -1;
 for (VAR_15 = 0, VAR_17 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (((VAR_11 >> (VAR_15 * 4)) & 0xf) == 0)
   continue;
  for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
   VAR_4[VAR_17] = VAR_15 * 4 + VAR_16;
   VAR_6[VAR_15 * 4 + VAR_16] = VAR_17;
   VAR_17++;
  }
 }

 return;

unsupp:
 FUNC_4("ERROR : Unsupported CPU mask [use 1,2 or 4 threads per core].\n"
     "\tcore0 thread mask [%lx], boot cpu mask [%lx].\n",
     (u_long)VAR_12, (u_long)VAR_11);
 FUNC_3("Invalid CPU mask - halting.\n");
 return;
}
