
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct padlock_softc {int dummy; } ;
struct padlock_session {int ses_fpu_ctx; } ;
struct cryptoini {int cri_alg; struct cryptoini* cri_next; } ;
typedef int device_t ;
typedef int crypto_session_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct padlock_session* FUNC_0 (int ) ;
 struct thread* VAR_3 ;
 struct padlock_softc* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct thread*,int ,int) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct padlock_session*,struct cryptoini*) ;
 int FUNC_6 (struct padlock_softc*,struct padlock_session*) ;
 int FUNC_7 (struct padlock_session*,struct cryptoini*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4, crypto_session_t VAR_5, struct cryptoini *VAR_6)
{
 struct padlock_softc *VAR_7 = FUNC_1(VAR_4);
 struct padlock_session *VAR_8 = ((void*)0);
 struct cryptoini *VAR_9, *VAR_10;
 struct thread *VAR_11;
 int VAR_12;

 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_9 = VAR_10 = ((void*)0);
 for (; VAR_6 != ((void*)0); VAR_6 = VAR_6->cri_next) {
  switch (VAR_6->cri_alg) {
  case 133:
  case 134:
  case 131:
  case 132:
  case 130:
  case 129:
  case 128:
   if (VAR_10 != ((void*)0))
    return (VAR_0);
   VAR_10 = VAR_6;
   break;
  case 135:
   if (VAR_9 != ((void*)0))
    return (VAR_0);
   VAR_9 = VAR_6;
   break;
  default:
   return (VAR_0);
  }
 }






 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_5);
 VAR_8->ses_fpu_ctx = FUNC_2(VAR_2);

 VAR_12 = FUNC_5(VAR_8, VAR_9);
 if (VAR_12 != 0) {
  FUNC_6(VAR_7, VAR_8);
  return (VAR_12);
 }

 if (VAR_10 != ((void*)0)) {
  VAR_11 = VAR_3;
  FUNC_3(VAR_11, VAR_8->ses_fpu_ctx, VAR_2 |
      VAR_1);
  VAR_12 = FUNC_7(VAR_8, VAR_10);
  FUNC_4(VAR_11, VAR_8->ses_fpu_ctx);
  if (VAR_12 != 0) {
   FUNC_6(VAR_7, VAR_8);
   return (VAR_12);
  }
 }

 return (0);
}
