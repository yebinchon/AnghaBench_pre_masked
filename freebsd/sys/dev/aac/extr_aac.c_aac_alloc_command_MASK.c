
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {scalar_t__ total_fibs; scalar_t__ aac_max_fibs; int aifthread; int aac_io_lock; int aifflags; } ;
struct aac_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 struct aac_command* FUNC_0 (struct aac_softc*) ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct aac_softc *VAR_3, struct aac_command **VAR_4)
{
 struct aac_command *VAR_5;

 FUNC_1(VAR_3, VAR_2, "");

 if ((VAR_5 = FUNC_0(VAR_3)) == ((void*)0)) {
  if (VAR_3->total_fibs < VAR_3->aac_max_fibs) {
   FUNC_2(&VAR_3->aac_io_lock);
   VAR_3->aifflags |= VAR_0;
   FUNC_3(&VAR_3->aac_io_lock);
   FUNC_4(VAR_3->aifthread);
  }
  return (VAR_1);
 }

 *VAR_4 = VAR_5;
 return(0);
}
