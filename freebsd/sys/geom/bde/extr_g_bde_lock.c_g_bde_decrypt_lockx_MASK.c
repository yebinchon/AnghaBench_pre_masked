
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
struct g_bde_key {scalar_t__* mkey; scalar_t__* lsector; } ;
struct g_bde_softc {scalar_t__ sha2; int consumer; struct g_bde_key key; } ;
typedef scalar_t__ off_t ;
typedef int keyInstance ;
typedef int cipherInstance ;


 int FUNC_0 (int *,int *,scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (struct g_bde_softc*,struct g_bde_key*,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__* FUNC_7 (int ,scalar_t__,int,int*) ;

__attribute__((used)) static int
FUNC_8(struct g_bde_softc *VAR_8, u_char *VAR_9, off_t VAR_10, u_int VAR_11, u_int *VAR_12)
{
 u_char *VAR_13, *VAR_14;
 struct g_bde_key *VAR_15;
 uint64_t VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 keyInstance VAR_21;
 cipherInstance VAR_22;

 VAR_15 = &VAR_8->key;


 VAR_18 = FUNC_5(VAR_8->sha2, VAR_9, &VAR_16);
 if (VAR_18)
  return (VAR_18);


 if (VAR_16 + VAR_6 > (uint64_t)VAR_10) {
  VAR_16 = 0;
  return (VAR_2);
 }



 VAR_19 = 1;
 if (VAR_16 % VAR_11 > VAR_11 - VAR_6)
  VAR_19++;


 VAR_13 = FUNC_7(VAR_8->consumer,
  VAR_16 - (VAR_16 % VAR_11),
  VAR_19 * VAR_11, &VAR_18);
 if (VAR_13 == ((void*)0)) {
  VAR_16 = 0;
  return(VAR_18);
 }


 VAR_14 = VAR_13 + VAR_16 % VAR_11;


 VAR_17 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++)
  VAR_17 += VAR_14[VAR_20];
 if (VAR_17 == 0) {
  VAR_16 = 0;
  FUNC_6(VAR_13);
  return (VAR_5);
 }


 FUNC_1(&VAR_22);
 FUNC_2(&VAR_21, VAR_0, 256, VAR_8->sha2 + 16);
 FUNC_0(&VAR_22, &VAR_21, VAR_14, VAR_14, VAR_6);


 VAR_20 = FUNC_4(VAR_8, VAR_15, VAR_14);
 VAR_14 = ((void*)0);
 if (VAR_20 < 0) {
  VAR_16 = 0;
  return (VAR_1);
 } else if (VAR_20 > 0) {
  VAR_16 = 0;
  return (VAR_4);
 }

 FUNC_3(VAR_13, VAR_11 * VAR_19);
 FUNC_6(VAR_13);


 VAR_17 = 0;
 for (VAR_20 = 0; VAR_20 < (int)sizeof(VAR_15->mkey); VAR_20++)
  VAR_17 += VAR_15->mkey[VAR_20];
 if (VAR_17 == 0)
  return (VAR_3);


 for (VAR_20 = 0; VAR_20 < VAR_7 - 1; VAR_20++)
  if (VAR_15->lsector[VAR_20] >= VAR_15->lsector[VAR_20 + 1])
   return (VAR_2);


 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++)
  if (VAR_12 != ((void*)0) && VAR_16 == VAR_15->lsector[VAR_20])
   *VAR_12 = VAR_20;
 VAR_16 = 0;
 return (0);
}
