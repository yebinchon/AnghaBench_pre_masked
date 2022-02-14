
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_bde_key {int* lsector; scalar_t__ sectorsize; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int ) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct g_bde_key *VAR_1, int VAR_2 , int VAR_3)
{
 int VAR_4;
 u_char *VAR_5;
 off_t VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_1->sectorsize);
 FUNC_4(VAR_5, 0, VAR_1->sectorsize);
 VAR_6 = (VAR_1->lsector[VAR_3] & ~(VAR_1->sectorsize - 1));
 VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_0);
 if (VAR_7 != VAR_6)
  FUNC_0(1, "lseek");
 VAR_4 = FUNC_6(VAR_2, VAR_5, VAR_1->sectorsize);
 FUNC_1(VAR_5);
 if (VAR_4 != (int)VAR_1->sectorsize)
  FUNC_0(1, "write");
 FUNC_5("Nuked key %d\n", 1 + VAR_3);
}
