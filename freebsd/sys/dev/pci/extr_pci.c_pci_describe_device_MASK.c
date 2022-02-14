
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (char**,int*,int*,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* VAR_2 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8(device_t VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 VAR_6 = VAR_7 = VAR_8 = ((void*)0);




 if (VAR_2 == ((void*)0))
  goto out;




 VAR_9 = VAR_2;
 if ((VAR_7 = FUNC_1(80, VAR_0, VAR_1)) == ((void*)0))
  goto out;
 for (;;) {
  if (FUNC_2(&VAR_9, &VAR_4, &VAR_5, &VAR_7))
   goto out;
  if (VAR_4 == FUNC_4(VAR_3))
   break;
 }
 if ((VAR_8 = FUNC_1(80, VAR_0, VAR_1)) == ((void*)0))
  goto out;
 for (;;) {
  if (FUNC_2(&VAR_9, &VAR_4, &VAR_5, &VAR_8)) {
   *VAR_8 = 0;
   break;
  }
  if (VAR_4 != -1) {
   *VAR_8 = 0;
   break;
  }
  if (VAR_5 == FUNC_3(VAR_3))
   break;
 }
 if (VAR_8[0] == '\0')
  FUNC_5(VAR_8, 80, "0x%x", FUNC_3(VAR_3));
 if ((VAR_6 = FUNC_1(FUNC_7(VAR_7) + FUNC_7(VAR_8) + 3, VAR_0, VAR_1)) !=
     ((void*)0))
  FUNC_6(VAR_6, "%s, %s", VAR_7, VAR_8);
out:
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7, VAR_0);
 if (VAR_8 != ((void*)0))
  FUNC_0(VAR_8, VAR_0);
 return(VAR_6);
}
