
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_hook; } ;
struct cyapa_softc {scalar_t__ data_signal; int rfifo; } ;


 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (struct cyapa_softc*) ;
 scalar_t__ FUNC_2 (struct cyapa_softc*,int *) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, long VAR_1)
{
 struct cyapa_softc *VAR_2;
 int VAR_3;

 VAR_2 = (struct cyapa_softc *)VAR_0->kn_hook;

 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2, &VAR_2->rfifo) || VAR_2->data_signal;
 FUNC_1(VAR_2);

 return (VAR_3);
}
