
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_softc {int dummy; } ;
struct proto_busdma {int sxlck; } ;


 int VAR_0 ;
 int FUNC_0 (struct proto_busdma*,int ) ;
 int FUNC_1 (struct proto_softc*,struct proto_busdma*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct proto_softc *VAR_1, struct proto_busdma *VAR_2)
{

 FUNC_1(VAR_1, VAR_2);
 FUNC_2(&VAR_2->sxlck);
 FUNC_0(VAR_2, VAR_0);
 return (0);
}
