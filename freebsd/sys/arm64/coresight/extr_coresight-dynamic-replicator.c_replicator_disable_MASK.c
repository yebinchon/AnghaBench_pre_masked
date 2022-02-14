
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replicator_softc {int res; } ;
struct endpoint {int dummy; } ;
struct coresight_event {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct replicator_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2, struct endpoint *VAR_3,
    struct coresight_event *VAR_4)
{
 struct replicator_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5->res, VAR_0, 0xff);
 FUNC_0(VAR_5->res, VAR_1, 0xff);
}
