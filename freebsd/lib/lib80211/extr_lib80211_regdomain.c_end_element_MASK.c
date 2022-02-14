
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mystate {size_t level; int ** sbuf; TYPE_1__* country; int parser; int * curband; TYPE_4__* netband; TYPE_3__* rd; TYPE_2__* freqband; } ;
struct TYPE_8__ {scalar_t__ maxPower; scalar_t__ maxPowerDFS; int * band; void* maxAntGain; int flags; } ;
struct TYPE_7__ {void* sku; void* name; } ;
struct TYPE_6__ {int flags; void* chanSep; void* chanWidth; void* freqEnd; void* freqStart; } ;
struct TYPE_5__ {int * rd; int * name; void* code; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mystate*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (char*) ;
 void* FUNC_8 (char*,int *,int ) ;
 int FUNC_9 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_10(void *VAR_1, const char *VAR_2)
{

 struct mystate *VAR_3;
 int VAR_4;
 char *VAR_5;

 VAR_3 = VAR_1;
 FUNC_5(VAR_3->sbuf[VAR_3->level]);
 VAR_5 = FUNC_3(VAR_3->sbuf[VAR_3->level]);
 VAR_4 = FUNC_6(VAR_3->sbuf[VAR_3->level]);


 if ((strcasecmp(VAR_2,"freqstart") == 0) && VAR_3->freqband != ((void*)0)) {
  VAR_3->freqband->freqStart = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"freqend") == 0) && VAR_3->freqband != ((void*)0)) {
  VAR_3->freqband->freqEnd = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"chanwidth") == 0) && VAR_3->freqband != ((void*)0)) {
  VAR_3->freqband->chanWidth = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"chansep") == 0) && VAR_3->freqband != ((void*)0)) {
  VAR_3->freqband->chanSep = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"flags") == 0)) {
  if (VAR_3->freqband != ((void*)0))
   VAR_3->freqband->flags |= FUNC_1(VAR_3, VAR_5, VAR_4);
  else if (VAR_3->netband != ((void*)0))
   VAR_3->netband->flags |= FUNC_1(VAR_3, VAR_5, VAR_4);
  else {
   FUNC_9("flags without freqband or netband at line %ld ignored",
       FUNC_0(VAR_3->parser));
  }
  goto done;
 }


 if ((FUNC_0(VAR_2,"name") == 0) && VAR_3->rd != ((void*)0)) {
  VAR_3->rd->name = FUNC_7(VAR_5);
  goto done;
 }
 if ((FUNC_0(VAR_2,"sku") == 0) && VAR_3->rd != ((void*)0)) {
  VAR_3->rd->sku = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"netband") == 0) && VAR_3->rd != ((void*)0)) {
  VAR_3->curband = ((void*)0);
  goto done;
 }


 if ((FUNC_0(VAR_2,"freqband") == 0) && VAR_3->netband != ((void*)0)) {

  goto done;
 }
 if ((FUNC_0(VAR_2,"maxpower") == 0) && VAR_3->netband != ((void*)0)) {
  VAR_3->netband->maxPower = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"maxpowerdfs") == 0) && VAR_3->netband != ((void*)0)) {
  VAR_3->netband->maxPowerDFS = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"maxantgain") == 0) && VAR_3->netband != ((void*)0)) {
  VAR_3->netband->maxAntGain = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }


 if ((FUNC_0(VAR_2,"isocc") == 0) && VAR_3->country != ((void*)0)) {
  VAR_3->country->code = FUNC_8(VAR_5, ((void*)0), 0);
  goto done;
 }
 if ((FUNC_0(VAR_2,"name") == 0) && VAR_3->country != ((void*)0)) {
  VAR_3->country->name = FUNC_7(VAR_5);
  goto done;
 }

 if (VAR_4 != 0) {
  FUNC_9("unexpected XML token \"%s\" data \"%s\" at line %ld",
      VAR_2, VAR_5, FUNC_0(VAR_3->parser));

 }

 if ((FUNC_0(VAR_2,"freqband") == 0) && VAR_3->freqband != ((void*)0)) {


  VAR_3->freqband = ((void*)0);
  goto done;
 }

 if ((FUNC_0(VAR_2,"rd") == 0) && VAR_3->rd != ((void*)0)) {
  VAR_3->rd = ((void*)0);
  goto done;
 }

 if ((FUNC_0(VAR_2,"band") == 0) && VAR_3->netband != ((void*)0)) {
  if (VAR_3->netband->band == ((void*)0)) {
   FUNC_9("no freqbands for band at line %ld",
      FUNC_0(VAR_3->parser));
  }
  if (VAR_3->netband->maxPower == 0) {
   FUNC_9("no maxpower for band at line %ld",
      FUNC_0(VAR_3->parser));
  }

  if (VAR_3->netband->maxPowerDFS == 0)
   VAR_3->netband->maxPowerDFS = VAR_3->netband->maxPower;
  VAR_3->netband = ((void*)0);
  goto done;
 }

 if ((FUNC_0(VAR_2,"netband") == 0) && VAR_3->netband != ((void*)0)) {
  VAR_3->curband = ((void*)0);
  goto done;
 }

 if ((FUNC_0(VAR_2,"country") == 0) && VAR_3->country != ((void*)0)) {

  if ((int) VAR_3->country->code == VAR_0) {
   FUNC_9("no ISO cc for country at line %ld",
      FUNC_0(VAR_3->parser));
  }
  if (VAR_3->country->name == ((void*)0)) {
   FUNC_9("no name for country at line %ld",
      FUNC_0(VAR_3->parser));
  }
  if (VAR_3->country->rd == ((void*)0)) {
   FUNC_9("no regdomain reference for country at line %ld",
      FUNC_0(VAR_3->parser));
  }
  VAR_3->country = ((void*)0);
  goto done;
 }
done:
 FUNC_4(VAR_3->sbuf[VAR_3->level]);
 VAR_3->sbuf[VAR_3->level--] = ((void*)0);

}
