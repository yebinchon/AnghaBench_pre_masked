
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sockaddr_dl {int dummy; } ;
struct kue_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kue_softc*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kue_softc*) ;
 int FUNC_2 (struct sockaddr_dl*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static u_int
FUNC_4(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct kue_softc *VAR_4 = VAR_1;

 if (VAR_3 >= FUNC_1(VAR_4))
  return (1);

 FUNC_3(FUNC_0(VAR_4, VAR_3), FUNC_2(VAR_2), VAR_0);

 return (1);
}
