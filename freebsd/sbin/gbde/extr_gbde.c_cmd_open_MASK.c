
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct stat {int st_size; int st_mode; } ;
struct g_bde_softc {int sha2; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (struct g_bde_softc*,int ,int *,int,int,int*) ;
 int FUNC_6 (int,int ,int*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (char const*,int ,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,int *,int) ;

__attribute__((used)) static void
FUNC_11(struct g_bde_softc *VAR_6, int VAR_7 , const char *VAR_8, u_int *VAR_9)
{
 int VAR_10;
 int VAR_11;
 u_char VAR_12[16];
 u_int VAR_13;
 off_t VAR_14;
 struct stat VAR_15;

 VAR_10 = FUNC_6(VAR_7, VAR_1, &VAR_13);
 if (VAR_10)
  VAR_13 = 512;
 VAR_10 = FUNC_6(VAR_7, VAR_0, &VAR_14);
 if (VAR_10) {
  VAR_10 = FUNC_4(VAR_7, &VAR_15);
  if (VAR_10 == 0 && FUNC_0(VAR_15.st_mode))
   VAR_14 = VAR_15.st_size;
  else
   VAR_10 = VAR_2;
 }
 if (VAR_10)
  VAR_14 = (off_t)-1;
 if (VAR_8 != ((void*)0)) {
  VAR_11 = FUNC_8(VAR_8, VAR_5, 0);
  if (VAR_11 < 0)
   FUNC_2(1, "%s", VAR_8);
  FUNC_10(VAR_11, VAR_12, sizeof VAR_12);
  FUNC_1(VAR_11);
 } else {
  FUNC_7(VAR_12, 0, sizeof VAR_12);
 }

 VAR_10 = FUNC_5(VAR_6, VAR_6->sha2, VAR_12, VAR_14,
     VAR_13, VAR_9);
 if (VAR_10 == VAR_2)
  FUNC_3(1, "Lock was destroyed.");
 if (VAR_10 == VAR_4)
  FUNC_3(1, "Lock was nuked.");
 if (VAR_10 == VAR_3)
  FUNC_3(1, "Lock not found");
 if (VAR_10 != 0)
  FUNC_3(1, "Error %d decrypting lock", VAR_10);
 if (VAR_9)
  FUNC_9("Opened with key %u\n", 1 + *VAR_9);
 return;
}
