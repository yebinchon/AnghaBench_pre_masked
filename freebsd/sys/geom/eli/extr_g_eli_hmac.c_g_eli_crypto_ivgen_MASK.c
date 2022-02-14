
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ u_char ;
struct g_eli_softc {int sc_flags; int sc_ealgo; scalar_t__ sc_ivctx; } ;
typedef scalar_t__ off_t ;
typedef int off ;
typedef int hash ;
typedef int ctx ;
typedef scalar_t__ SHA256_CTX ;



 int VAR_0 ;
 int FUNC_0 (int,size_t) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,size_t) ;
 int FUNC_5 (scalar_t__*,int ) ;

void
FUNC_6(struct g_eli_softc *VAR_2, off_t VAR_3, u_char *VAR_4,
    size_t VAR_5)
{
 uint8_t VAR_6[8];

 if ((VAR_2->sc_flags & VAR_0) != 0)
  FUNC_3(&VAR_3, VAR_6, sizeof(VAR_6));
 else
  FUNC_5(VAR_6, (uint64_t)VAR_3);

 switch (VAR_2->sc_ealgo) {
 case 128:
  FUNC_3(VAR_6, VAR_4, sizeof(VAR_6));
  FUNC_4(VAR_4 + sizeof(VAR_6), VAR_5 - sizeof(VAR_6));
  break;
 default:
     {
  u_char VAR_7[VAR_1];
  SHA256_CTX VAR_8;


  FUNC_3(&VAR_2->sc_ivctx, &VAR_8, sizeof(VAR_8));
  FUNC_2(&VAR_8, VAR_6, sizeof(VAR_6));
  FUNC_1(VAR_7, &VAR_8);
  FUNC_3(VAR_7, VAR_4, FUNC_0(sizeof(VAR_7), VAR_5));
  break;
     }
 }
}
