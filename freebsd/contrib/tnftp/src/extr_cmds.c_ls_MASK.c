
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 size_t VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int * VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char const*,char*,char*,int ,int ) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char const*,size_t) ;
 int FUNC_11 (char const*) ;
 int VAR_4 ;

void
FUNC_12(int VAR_5, char *VAR_6[])
{
 const char *VAR_7;
 char *VAR_8, *VAR_9;
 const char *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_10 = "-";
 VAR_11 = VAR_12 = 0;




 if (VAR_6[0][0] == 'p')
  VAR_11 = 1;
 if (FUNC_9(VAR_6[0] + VAR_11 , "mlsd") == 0) {
  if (! VAR_3[VAR_1]) {
   FUNC_3(VAR_4,
      "MLSD is not supported by the remote server.\n");
   return;
  }
  VAR_12 = 1;
 }
 if (VAR_5 == 0)
  goto usage;

 if (VAR_12)
  VAR_7 = "MLSD";
 else if (FUNC_9(VAR_6[0] + VAR_11, "nlist") == 0)
  VAR_7 = "NLST";
 else
  VAR_7 = "LIST";

 if (VAR_5 > 1)
  VAR_8 = VAR_6[1];
 if (VAR_5 > 2)
  VAR_10 = VAR_6[2];
 if (VAR_5 > 3 || ((VAR_11 | VAR_12) && VAR_5 > 2)) {
 usage:
  if (VAR_11 || VAR_12)
   FUNC_1("usage: %s [remote-path]\n", VAR_6[0]);
  else
   FUNC_1("usage: %s [remote-path [local-file]]\n",
       VAR_6[0]);
  VAR_2 = -1;
  goto freels;
 }

 if (VAR_11) {
  const char *VAR_13;
  size_t VAR_14;

  VAR_13 = FUNC_6("pager");
  if (FUNC_0(VAR_13))
   VAR_13 = VAR_0;
  VAR_14 = FUNC_11(VAR_13) + 2;
  VAR_9 = FUNC_5(VAR_14);
  VAR_9[0] = '|';
  (void)FUNC_10(VAR_9 + 1, VAR_13, VAR_14 - 1);
  VAR_10 = VAR_9;
 } else if ((FUNC_9(VAR_10, "-") != 0) && *VAR_10 != '|') {
  if ((VAR_9 = FUNC_7(VAR_10)) == ((void*)0) ||
      !FUNC_2("output to local-file:", VAR_9)) {
   VAR_2 = -1;
   goto freels;
  }
  VAR_10 = VAR_9;
 }
 FUNC_8(VAR_7, VAR_10, VAR_8, "w", 0, 0);
 freels:
 if (VAR_9)
  (void)FUNC_4(VAR_9);
}
