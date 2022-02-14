
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct g_bde_softc {int sha2; } ;
struct g_bde_key {char* spare; char* salt; char* mkey; void** lsector; void* flags; void* sectorsize; void* keyoffset; void* sectorN; void* sector0; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int*) ;
 void* FUNC_7 (char*) ;
 void* FUNC_8 (char*) ;

int
FUNC_9(struct g_bde_softc *VAR_2, struct g_bde_key *VAR_3, u_char *VAR_4)
{
 int VAR_5[VAR_1];
 u_char *VAR_6;
 u_char VAR_7[16], VAR_8[16];
 MD5_CTX VAR_9;
 int VAR_10;

 VAR_6 = VAR_4;
 FUNC_6(VAR_2->sha2, VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  switch(VAR_5[VAR_10]) {
  case 0:
   VAR_3->sector0 = FUNC_8(VAR_6);
   VAR_6 += 8;
   break;
  case 1:
   VAR_3->sectorN = FUNC_8(VAR_6);
   VAR_6 += 8;
   break;
  case 2:
   VAR_3->keyoffset = FUNC_8(VAR_6);
   VAR_6 += 8;
   break;
  case 3:
   VAR_3->sectorsize = FUNC_7(VAR_6);
   VAR_6 += 4;
   break;
  case 4:
   VAR_3->flags = FUNC_7(VAR_6);
   VAR_6 += 4;
   break;
  case 5:
  case 6:
  case 7:
  case 8:
   VAR_3->lsector[VAR_5[VAR_10] - 5] = FUNC_8(VAR_6);
   VAR_6 += 8;
   break;
  case 9:
   FUNC_4(VAR_6, VAR_3->spare, sizeof VAR_3->spare);
   VAR_6 += sizeof VAR_3->spare;
   break;
  case 10:
   FUNC_4(VAR_6, VAR_3->salt, sizeof VAR_3->salt);
   VAR_6 += sizeof VAR_3->salt;
   break;
  case 11:
   FUNC_4(VAR_6, VAR_3->mkey, sizeof VAR_3->mkey);
   VAR_6 += sizeof VAR_3->mkey;
   break;
  case 12:
   FUNC_4(VAR_6, VAR_8, sizeof VAR_8);
   FUNC_5(VAR_6, sizeof VAR_8);
   VAR_6 += sizeof VAR_8;
   break;
  }
 }
 if(VAR_4 + VAR_0 != VAR_6)
  return(-1);
 FUNC_1(&VAR_9);
 FUNC_2(&VAR_9, "0000", 4);
 FUNC_2(&VAR_9, VAR_4, VAR_0);
 FUNC_0(VAR_7, &VAR_9);
 if (FUNC_3(VAR_7, VAR_8, sizeof VAR_8))
  return (1);
 return (0);
}
