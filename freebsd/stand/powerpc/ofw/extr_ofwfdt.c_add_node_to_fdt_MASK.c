
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ phandle_t ;
typedef int node ;
typedef int name ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void*,int) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*,int,char*) ;
 int FUNC_8 (void*,int,char*,scalar_t__*,int) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static void
FUNC_13(void *VAR_0, phandle_t VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 char VAR_6[255], *VAR_7, *VAR_8;
 void *VAR_9;
 ssize_t VAR_10;

 VAR_7 = ((void*)0);
 while (FUNC_4(VAR_1, VAR_7, VAR_6) > 0) {
  VAR_10 = FUNC_2(VAR_1, VAR_6);


  if (VAR_10 < 0)
   VAR_10 = 0;
  if (VAR_10 > 1024)
   VAR_10 = 1024;

  VAR_9 = FUNC_10(VAR_10);
  if (VAR_9 == ((void*)0)) {
   FUNC_11("Cannot allocate memory for prop %s\n", VAR_6);
   return;
  }
  FUNC_1(VAR_1, VAR_6, VAR_9, VAR_10);
  VAR_5 = FUNC_8(VAR_0, VAR_2, VAR_6, VAR_9, VAR_10);
  FUNC_9(VAR_9);
  VAR_7 = VAR_6;
  if (VAR_5)
   FUNC_11("Error %d adding property %s to "
       "node %d\n", VAR_5, VAR_6, VAR_2);
 }

 if (!FUNC_3(VAR_1, "phandle") && !FUNC_3(VAR_1, "linux,phandle")
     && !FUNC_3(VAR_1, "ibm,phandle"))
  FUNC_8(VAR_0, VAR_2, "phandle", &VAR_1, sizeof(VAR_1));

 for (VAR_1 = FUNC_0(VAR_1); VAR_1 > 0; VAR_1 = FUNC_6(VAR_1)) {
  FUNC_5(VAR_1, VAR_6, sizeof(VAR_6));
  VAR_8 = FUNC_12(VAR_6, '/');
  VAR_8++;
  VAR_4 = FUNC_7(VAR_0, VAR_2, VAR_8);
  if (VAR_4 < 0) {
   FUNC_11("Error %d adding node %s (%s), skipping\n",
       VAR_4, VAR_6, VAR_8);
   continue;
  }

                FUNC_13(VAR_0, VAR_1, VAR_4);
 }
}
