
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_9__ {scalar_t__ (* startfunc ) (TYPE_2__*,int ,int ) ;scalar_t__ (* getfunc ) (TYPE_2__*,int ,int ) ;int samplequeue; int arg; void* start_called; } ;
struct TYPE_7__ {TYPE_3__ callback; } ;
struct TYPE_8__ {void* bad; TYPE_1__ sources; int * ent; } ;
typedef TYPE_2__ isc_entropysource_t ;
typedef int isc_entropy_t ;
typedef TYPE_3__ isc_cbsource_t ;
typedef int isc_boolean_t ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 unsigned int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_4(isc_entropysource_t *VAR_4, unsigned int VAR_5,
    isc_boolean_t VAR_6)
{
 isc_entropy_t *VAR_7 = VAR_4->ent;
 isc_cbsource_t *VAR_8 = &VAR_4->sources.callback;
 unsigned int VAR_9;
 unsigned int VAR_10;
 isc_result_t VAR_11;

 if (VAR_5 == 0)
  return (0);

 if (VAR_4->bad)
  return (0);

 if (!VAR_8->start_called && VAR_8->startfunc != ((void*)0)) {
  VAR_11 = VAR_8->startfunc(VAR_4, VAR_8->arg, VAR_6);
  if (VAR_11 != VAR_2)
   return (0);
  VAR_8->start_called = VAR_3;
 }

 VAR_9 = 0;
 VAR_11 = VAR_2;
 while (VAR_5 > 0 && VAR_11 == VAR_2) {
  VAR_11 = VAR_8->getfunc(VAR_4, VAR_8->arg, VAR_6);
  if (VAR_11 == VAR_1) {
   VAR_10 = FUNC_1(VAR_7, &VAR_8->samplequeue);
   VAR_9 += VAR_10;
   VAR_5 -= FUNC_0(VAR_10, VAR_5);
   VAR_11 = VAR_2;
  } else if (VAR_11 != VAR_2 &&
      VAR_11 != VAR_0)
   VAR_4->bad = VAR_3;

 }

 return (VAR_9);
}
