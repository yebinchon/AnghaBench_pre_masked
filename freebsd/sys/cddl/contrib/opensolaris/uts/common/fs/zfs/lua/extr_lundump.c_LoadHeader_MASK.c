
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lu_byte ;
typedef int LoadState ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void FUNC_5(LoadState* VAR_5)
{
 lu_byte VAR_6[VAR_0];
 lu_byte VAR_7[VAR_0];
 FUNC_2(VAR_6);
 FUNC_4(VAR_7,VAR_6,sizeof(char));
 FUNC_0(VAR_5,VAR_7+sizeof(char),VAR_0-sizeof(char));
 if (FUNC_3(VAR_6,VAR_7,VAR_1)==0) return;
 if (FUNC_3(VAR_6,VAR_7,VAR_2)!=0) FUNC_1(VAR_5,"not a");
 if (FUNC_3(VAR_6,VAR_7,VAR_3)!=0) FUNC_1(VAR_5,"version mismatch in");
 if (FUNC_3(VAR_6,VAR_7,VAR_4)!=0) FUNC_1(VAR_5,"incompatible"); else FUNC_1(VAR_5,"corrupted");
}
