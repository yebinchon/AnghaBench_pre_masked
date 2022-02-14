
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct hdac_softc {scalar_t__ unsolq_st; size_t* unsolq; TYPE_1__* codecs; int unsolq_rp; int unsolq_wp; } ;
typedef size_t nid_t ;
typedef int * device_t ;
struct TYPE_2__ {int * dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,size_t) ;

__attribute__((used)) static int
FUNC_1(struct hdac_softc *VAR_3)
{
 device_t VAR_4;
 nid_t VAR_5;
 uint32_t VAR_6;
 int VAR_7 = 0;

 if (VAR_3->unsolq_st == VAR_2) {
  VAR_3->unsolq_st = VAR_0;
  while (VAR_3->unsolq_rp != VAR_3->unsolq_wp) {
   VAR_6 = VAR_3->unsolq[VAR_3->unsolq_rp++];
   VAR_3->unsolq_rp %= VAR_1;
   VAR_5 = VAR_3->unsolq[VAR_3->unsolq_rp++];
   VAR_3->unsolq_rp %= VAR_1;
   if ((VAR_4 = VAR_3->codecs[VAR_5].dev) != ((void*)0))
    FUNC_0(VAR_4, VAR_6);
   VAR_7++;
  }
  VAR_3->unsolq_st = VAR_2;
 }

 return (VAR_7);
}
