
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct scfg {scalar_t__ flag2; scalar_t__ flag1; } ;
struct TYPE_5__ {struct scfg* enc_private; } ;
typedef TYPE_1__ enc_softc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int FUNC_1 (TYPE_1__*,char*,int,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(enc_softc_t *VAR_1)
{
 struct scfg *VAR_2;
 int VAR_3;
 static char VAR_4[6] = { 128 };

 VAR_2 = VAR_1->enc_private;
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 VAR_3 = FUNC_1(VAR_1, VAR_4, 6, ((void*)0), 0);
 if (VAR_3) {
  return (VAR_3);
 }
 FUNC_0(5000);
 VAR_2->flag1 = 0;
 VAR_2->flag2 = 0;
 VAR_3 = FUNC_2(VAR_1, 0, 1);
 return (VAR_3);
}
