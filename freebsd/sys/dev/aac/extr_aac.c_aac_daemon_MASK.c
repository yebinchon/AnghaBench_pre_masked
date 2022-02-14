
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int tv_sec; } ;
struct aac_softc {int aac_daemontime; int aac_io_lock; } ;
struct aac_fib {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct timeval*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct timeval VAR_4;
 struct aac_softc *VAR_5;
 struct aac_fib *VAR_6;

 VAR_5 = VAR_3;
 FUNC_7(&VAR_5->aac_io_lock, VAR_0);

 if (FUNC_4(&VAR_5->aac_daemontime) ||
     FUNC_3(&VAR_5->aac_daemontime) == 0)
  return;
 FUNC_6(&VAR_4);
 FUNC_0(VAR_5, &VAR_6);
 *(uint32_t *)VAR_6->data = VAR_4.tv_sec;
 FUNC_2(VAR_5, VAR_1, 0, VAR_6, sizeof(uint32_t));
 FUNC_1(VAR_5);
 FUNC_5(&VAR_5->aac_daemontime, 30 * 60 * VAR_2);
}
