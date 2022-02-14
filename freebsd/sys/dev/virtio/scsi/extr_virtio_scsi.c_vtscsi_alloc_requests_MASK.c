
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_flags; int vtscsi_nrequests; int vtscsi_request_vq; } ;
struct vtscsi_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct vtscsi_request* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_3 (struct vtscsi_softc*,struct vtscsi_request*) ;

__attribute__((used)) static int
FUNC_4(struct vtscsi_softc *VAR_6)
{
 struct vtscsi_request *VAR_7;
 int VAR_8, VAR_9;







 VAR_9 = FUNC_1(VAR_6->vtscsi_request_vq);
 if ((VAR_6->vtscsi_flags & VAR_3) == 0)
  VAR_9 /= VAR_4;
 VAR_9 += VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_7 = FUNC_0(sizeof(struct vtscsi_request), VAR_1,
      VAR_2);
  if (VAR_7 == ((void*)0))
   return (VAR_0);

  FUNC_3(VAR_6, VAR_7);

  VAR_6->vtscsi_nrequests++;
  FUNC_2(VAR_6, VAR_7);
 }

 return (0);
}
