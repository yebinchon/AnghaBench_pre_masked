
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdac_softc {TYPE_2__* streams; TYPE_1__* codecs; int sdo_bw_used; } ;
typedef size_t nid_t ;
typedef int device_t ;
struct TYPE_4__ {int * dev; scalar_t__ stream; scalar_t__ bw; } ;
struct TYPE_3__ {int sdi_bw_used; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 struct hdac_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct hdac_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3)
{
 struct hdac_softc *VAR_4 = FUNC_2(VAR_0);
 nid_t VAR_5 = (uintptr_t)FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_6 >= 0,
     ("Free for not allocated stream (%d/%d)\n", VAR_2, VAR_3));
 if (VAR_2 == 1)
  VAR_4->sdo_bw_used -= VAR_4->streams[VAR_6].bw;
 else
  VAR_4->codecs[VAR_5].sdi_bw_used -= VAR_4->streams[VAR_6].bw;
 VAR_4->streams[VAR_6].stream = 0;
 VAR_4->streams[VAR_6].dev = ((void*)0);
}
