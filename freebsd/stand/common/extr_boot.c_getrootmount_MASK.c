
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lbuf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,char*,char*,...) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char const*,int) ;

int
FUNC_11(char *VAR_1)
{
 char VAR_2[128], *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_3("vfs.root.mountfrom") != ((void*)0))
  return(0);

 VAR_9 = 1;
 FUNC_7(VAR_2, "%s/etc/fstab", VAR_1);
 if ((VAR_8 = FUNC_5(VAR_2, VAR_0)) < 0)
  goto notfound;


 VAR_6 = ((void*)0);
 VAR_5 = ((void*)0);
 while (FUNC_1(VAR_2, sizeof(VAR_2), VAR_8) >= 0) {
  if ((VAR_2[0] == 0) || (VAR_2[0] == '#'))
   continue;


  for (VAR_3 = VAR_2; (*VAR_3 != 0) && !FUNC_4(*VAR_3); VAR_3++)
   ;
  if (*VAR_3 == 0)
   continue;

  *VAR_3++ = 0;
  FUNC_2(VAR_5);
  VAR_5 = FUNC_8(VAR_2);


  while ((*VAR_3 != 0) && FUNC_4(*VAR_3))
   VAR_3++;

  if ((*VAR_3 == 0) || (*VAR_3 != '/') || !FUNC_4(*(VAR_3 + 1)))
   continue;

  VAR_3 += 2;
  while ((*VAR_3 != 0) && FUNC_4(*VAR_3))
   VAR_3++;
  if (*VAR_3 == 0)
   continue;

  VAR_4 = VAR_3;
  while ((*VAR_3 != 0) && !FUNC_4(*VAR_3))
   VAR_3++;
  *VAR_3 = 0;
  FUNC_2(VAR_6);
  VAR_6 = FUNC_8(VAR_4);


  VAR_3 += 1;
  while ((*VAR_3 != 0) && FUNC_4(*VAR_3))
   VAR_3++;
  if (*VAR_3 == 0)
   continue;

  VAR_4 = VAR_3;
  while ((*VAR_3 != 0) && !FUNC_4(*VAR_3))
   VAR_3++;
  *VAR_3 = 0;
  VAR_7 = FUNC_8(VAR_4);

  FUNC_7(VAR_2, "%s:%s", VAR_6, VAR_5);
  FUNC_6("vfs.root.mountfrom", VAR_2, 0);


  if (FUNC_3("vfs.root.mountfrom.options") == ((void*)0)) {

   FUNC_6("vfs.root.mountfrom.options", VAR_7, 0);
  }
  FUNC_2(VAR_7);
  VAR_9 = 0;
  break;
 }
 FUNC_0(VAR_8);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

notfound:
 if (VAR_9) {
  const char *VAR_10;

  VAR_10 = FUNC_3("currdev");
  if (VAR_10 != ((void*)0) && FUNC_10("zfs:", VAR_10, 4) == 0) {
   VAR_3 = FUNC_8(VAR_10);
   VAR_3[FUNC_9(VAR_3) - 1] = '\0';
   FUNC_6("vfs.root.mountfrom", VAR_3, 0);
   VAR_9 = 0;
   FUNC_2(VAR_3);
  }
 }

 return(VAR_9);
}
