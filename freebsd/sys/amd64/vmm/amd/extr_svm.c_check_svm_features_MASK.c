
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int*) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(void)
{
 u_int VAR_5[4];


 FUNC_1(0x8000000A, VAR_5);
 VAR_4 &= VAR_5[3];





 if (VAR_3 == 0 || VAR_3 > VAR_5[1])
  VAR_3 = VAR_5[1];
 FUNC_0(VAR_3 > 1, ("Insufficient ASIDs for guests: %#x", VAR_3));


 if (!(VAR_4 & VAR_0)) {
  FUNC_2("SVM: Nested Paging feature not available.\n");
  return (VAR_2);
 }


 if (!(VAR_4 & VAR_1)) {
  FUNC_2("SVM: NRIP Save feature not available.\n");
  return (VAR_2);
 }

 return (0);
}
