
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_once_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,size_t,char*,...) ;
 char* FUNC_6 (int) ;
 char** VAR_4 ;
 int VAR_5 ;

void
FUNC_7(int VAR_6, char *VAR_7, size_t VAR_8) {
 unsigned int VAR_9 = (unsigned int)VAR_6;

 FUNC_1(VAR_7 != ((void*)0));

 if (VAR_6 >= 0 && VAR_6 < VAR_5)
  FUNC_5(VAR_7, VAR_8, "%s", VAR_4[VAR_6]);
 else
  FUNC_5(VAR_7, VAR_8, "Unknown error: %u", VAR_9);

}
