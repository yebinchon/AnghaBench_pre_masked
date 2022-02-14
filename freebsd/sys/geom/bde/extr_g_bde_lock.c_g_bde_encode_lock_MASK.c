
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct g_bde_key {int mkey; int salt; int spare; int * lsector; int flags; int sectorsize; int keyoffset; int sectorN; int sector0; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;

int
FUNC_8(u_char *VAR_2, struct g_bde_key *VAR_3, u_char *VAR_4)
{
 int VAR_5[VAR_1];
 u_char *VAR_6, *VAR_7;
 int VAR_8;
 MD5_CTX VAR_9;

 VAR_7 = VAR_4;
 VAR_6 = ((void*)0);
 FUNC_5(VAR_2, VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  switch(VAR_5[VAR_8]) {
  case 0:
   FUNC_7(VAR_7, VAR_3->sector0);
   VAR_7 += 8;
   break;
  case 1:
   FUNC_7(VAR_7, VAR_3->sectorN);
   VAR_7 += 8;
   break;
  case 2:
   FUNC_7(VAR_7, VAR_3->keyoffset);
   VAR_7 += 8;
   break;
  case 3:
   FUNC_6(VAR_7, VAR_3->sectorsize);
   VAR_7 += 4;
   break;
  case 4:
   FUNC_6(VAR_7, VAR_3->flags);
   VAR_7 += 4;
   break;
  case 5:
  case 6:
  case 7:
  case 8:
   FUNC_7(VAR_7, VAR_3->lsector[VAR_5[VAR_8] - 5]);
   VAR_7 += 8;
   break;
  case 9:
   FUNC_3(VAR_3->spare, VAR_7, sizeof VAR_3->spare);
   VAR_7 += sizeof VAR_3->spare;
   break;
  case 10:
   FUNC_3(VAR_3->salt, VAR_7, sizeof VAR_3->salt);
   VAR_7 += sizeof VAR_3->salt;
   break;
  case 11:
   FUNC_3(VAR_3->mkey, VAR_7, sizeof VAR_3->mkey);
   VAR_7 += sizeof VAR_3->mkey;
   break;
  case 12:
   FUNC_4(VAR_7, 16);
   VAR_6 = VAR_7;
   VAR_7 += 16;
   break;
  }
 }
 if(VAR_4 + VAR_0 != VAR_7)
  return(-1);
 if (VAR_6 == ((void*)0))
  return(-1);
 FUNC_1(&VAR_9);
 FUNC_2(&VAR_9, "0000", 4);
 FUNC_2(&VAR_9, VAR_4, VAR_0);
 FUNC_0(VAR_6, &VAR_9);
 return(0);
}
