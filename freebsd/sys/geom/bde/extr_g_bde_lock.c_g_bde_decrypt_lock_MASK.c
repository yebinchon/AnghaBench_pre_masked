
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct g_bde_softc {int consumer; int sha2; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct g_bde_softc*,int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int*) ;

int
FUNC_6(struct g_bde_softc *VAR_4, u_char *VAR_5, u_char *VAR_6, off_t VAR_7, u_int VAR_8, u_int *VAR_9)
{
 u_char *VAR_10, VAR_11[16];
 int VAR_12, VAR_13, VAR_14;


 FUNC_1(VAR_5, VAR_4->sha2, VAR_3);


 FUNC_2(VAR_11, sizeof VAR_11);
 if (VAR_6 != ((void*)0) && FUNC_0(VAR_11, VAR_6, sizeof VAR_11))
  return (FUNC_3(VAR_4, VAR_6, VAR_7,
      VAR_8, VAR_9));


 VAR_10 = FUNC_5(VAR_4->consumer, 0, VAR_8, &VAR_12);
 if (VAR_10 == ((void*)0))
  return(VAR_12);


 VAR_12 = VAR_0;
 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  VAR_13 = FUNC_3(VAR_4, VAR_10 + VAR_14 * 16, VAR_7,
      VAR_8, VAR_9);

  if (VAR_13 == 0 || VAR_13 == VAR_1) {
   VAR_12 = VAR_13;
   break;
  }
  if (VAR_13 != 0 && VAR_12 == VAR_0)
   VAR_12 = VAR_13;
 }
 FUNC_4(VAR_10);
 return (VAR_12);
}
