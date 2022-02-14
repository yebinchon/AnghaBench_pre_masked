
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scfg {int requests; } ;
struct TYPE_3__ {struct scfg* enc_private; } ;
typedef TYPE_1__ enc_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(enc_softc_t *VAR_1)
{
 struct scfg *VAR_2;

 VAR_2 = VAR_1->enc_private;
 FUNC_0(&VAR_2->requests, VAR_0);
}
