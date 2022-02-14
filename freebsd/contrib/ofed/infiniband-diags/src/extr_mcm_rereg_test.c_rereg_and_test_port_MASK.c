
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct guid_trid {int guid; int* gid; scalar_t__ trid; } ;
typedef int line ;
typedef int* ibmad_gid_t ;
typedef int ib_portid_t ;
typedef int FILE ;


 int VAR_0 ;
 struct guid_trid* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (struct guid_trid*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int,int,int *,struct guid_trid*,int) ;
 int FUNC_9 (int,int,int *,struct guid_trid*,int) ;
 int FUNC_10 (int,int,int *,struct guid_trid*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_13(char *VAR_2, int VAR_3, int VAR_4,
          ib_portid_t * VAR_5, int VAR_6)
{
 char VAR_7[256];
 FILE *VAR_8;
 ibmad_gid_t VAR_9;
 uint64_t VAR_10 = FUNC_6(0xfe80000000000000ull);
 uint64_t VAR_11 = FUNC_6(0x0002c90200223825ull);
 struct guid_trid *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_0(VAR_0, sizeof(*VAR_12));
 if (!VAR_12) {
  FUNC_1("cannot alloc mem for guid/trid list: %s\n",
      FUNC_11(VAR_1));
  return -1;
 }

 VAR_8 = FUNC_4(VAR_2, "r");
 if (!VAR_8) {
  FUNC_1("cannot open %s: %s\n", VAR_2, FUNC_11(VAR_1));
  return -1;
 }

 while (FUNC_3(VAR_7, sizeof(VAR_7), VAR_8)) {
  VAR_11 = FUNC_12(VAR_7, ((void*)0), 0);
  VAR_11 = FUNC_6(VAR_11);
  FUNC_7(&VAR_9[0], &VAR_10, 8);
  FUNC_7(&VAR_9[8], &VAR_11, 8);

  VAR_12[VAR_13].guid = VAR_11;
  FUNC_7(VAR_12[VAR_13].gid, VAR_9, sizeof(VAR_12[VAR_13].gid));
  VAR_12[VAR_13].trid = 0;
  if (++VAR_13 >= VAR_0)
   break;
 }
 FUNC_2(VAR_8);

 FUNC_10(VAR_3, VAR_4, VAR_5, VAR_12, VAR_13);
 FUNC_9(VAR_3, VAR_4, VAR_5, VAR_12, VAR_13);

 FUNC_8(VAR_3, VAR_4, VAR_5, VAR_12, VAR_13);

 FUNC_5(VAR_12);
 return 0;
}
