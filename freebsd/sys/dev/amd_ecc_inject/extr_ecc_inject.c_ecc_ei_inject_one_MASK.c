
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(void *VAR_10, size_t VAR_11)
{
 volatile uint64_t *VAR_12 = VAR_10;
 uint32_t VAR_13;
 int VAR_14;

 VAR_13 = VAR_0 | (VAR_8 << VAR_5);
 FUNC_1(VAR_7, VAR_3, VAR_13, 4);

 VAR_13 = (VAR_9 << VAR_2) | VAR_1 | VAR_6;
 FUNC_1(VAR_7, VAR_4, VAR_13, 4);

 for (VAR_14 = 0; VAR_14 < VAR_11 / sizeof(uint64_t); VAR_14++) {
  VAR_12[VAR_14] = 0;
  VAR_13 = FUNC_0(VAR_7, VAR_4, 4);
  if ((VAR_13 & VAR_1) == 0)
   break;
 }
 for (VAR_14 = 0; VAR_14 < VAR_11 / sizeof(uint64_t); VAR_14++)
  VAR_12[0] = VAR_12[VAR_14];
}
