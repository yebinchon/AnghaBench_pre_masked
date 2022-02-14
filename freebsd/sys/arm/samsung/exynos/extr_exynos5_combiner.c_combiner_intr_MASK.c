
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct combiner_softc {int dummy; } ;
struct TYPE_2__ {void (* ih ) (void*) ;int enabled; void* ih_user; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct combiner_softc*,int ) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct combiner_softc *VAR_3;
 void (*VAR_4) (void *);
 void *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11,VAR_12;

 VAR_3 = VAR_2;

 VAR_7 = FUNC_1(VAR_3, VAR_0);
 for (VAR_10 = 0; VAR_10 < 32; VAR_10++) {
  if (VAR_7 & (1 << VAR_10)) {
   VAR_12 = (VAR_10 / 4);
   VAR_8 = (VAR_10 % 4) * 8;

   VAR_9 = FUNC_1(VAR_3, FUNC_0(VAR_12));
   for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
    if (VAR_9 & (1 << (VAR_11 + VAR_8))) {
     VAR_4 = VAR_1[VAR_10][VAR_11].ih;
     VAR_5 = VAR_1[VAR_10][VAR_11].ih_user;
     VAR_6 = VAR_1[VAR_10][VAR_11].enabled;
     if (VAR_6 && (VAR_4 != ((void*)0))) {
      VAR_4(VAR_5);
     }
    }
   }
  }
 }
}
