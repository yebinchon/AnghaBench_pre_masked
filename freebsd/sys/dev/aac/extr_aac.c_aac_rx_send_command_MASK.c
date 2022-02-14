
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_softc {int dummy; } ;
struct aac_command {int cm_fibphys; TYPE_2__* cm_fib; } ;
struct TYPE_3__ {int Size; } ;
struct TYPE_4__ {TYPE_1__ Header; } ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int FUNC_1 (struct aac_softc*,int ,int) ;
 int FUNC_2 (struct aac_softc*,int,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (struct aac_command*) ;
 int FUNC_4 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct aac_softc *VAR_2, struct aac_command *VAR_3)
{
 u_int32_t VAR_4, VAR_5;

 FUNC_4(VAR_2, VAR_1, "send command (new comm.)");

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 == 0xffffffffL)
  VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 == 0xffffffffL)
  return VAR_4;
 FUNC_3(VAR_3);
 VAR_5 = VAR_4;
 FUNC_2(VAR_2, VAR_5, (u_int32_t)(VAR_3->cm_fibphys & 0xffffffffUL));
 VAR_5 += 4;
 FUNC_2(VAR_2, VAR_5, (u_int32_t)(VAR_3->cm_fibphys >> 32));
 VAR_5 += 4;
 FUNC_2(VAR_2, VAR_5, VAR_3->cm_fib->Header.Size);
 FUNC_1(VAR_2, VAR_0, VAR_4);
 return 0;
}
