
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pcap_bpf {int must_do_on_close; int * device; int zbufsize; int * zbuf2; int * zbuf1; scalar_t__ zerocopy; } ;
struct ifreq {int ifm_current; int ifr_media; int ifr_name; int ifm_name; } ;
struct ifmediareq {int ifm_current; int ifr_media; int ifr_name; int ifm_name; } ;
typedef int req ;
struct TYPE_5__ {int * buffer; struct pcap_bpf* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int ,struct ifreq*) ;
 int FUNC_5 (struct ifreq*,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_11 ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int) ;
 int FUNC_12 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_13(pcap_t *VAR_12)
{
 struct pcap_bpf *VAR_13 = VAR_12->priv;






 if (VAR_13->must_do_on_close != 0) {
  FUNC_8(VAR_12);
  VAR_13->must_do_on_close = 0;
 }
 if (VAR_13->device != ((void*)0)) {
  FUNC_2(VAR_13->device);
  VAR_13->device = ((void*)0);
 }
 FUNC_7(VAR_12);
}
