
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pcap_linux {int must_do_on_close; char* device; char* mondevice; int oldmode; } ;
struct nl80211_state {int dummy; } ;
struct TYPE_10__ {int mode; } ;
struct TYPE_9__ {int ifrn_name; } ;
struct iwreq {int ifr_flags; TYPE_2__ u; TYPE_1__ ifr_ifrn; int ifr_name; } ;
struct ifreq {int ifr_flags; TYPE_2__ u; TYPE_1__ ifr_ifrn; int ifr_name; } ;
struct TYPE_11__ {char* errbuf; int fd; struct pcap_linux* priv; } ;
typedef TYPE_3__ pcap_t ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int ,struct nl80211_state*,char*,char*) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,struct iwreq*) ;
 int FUNC_4 (struct iwreq*,int ,int) ;
 int FUNC_5 (struct nl80211_state*) ;
 int FUNC_6 (TYPE_3__*,struct nl80211_state*,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_9 ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static void FUNC_11( pcap_t *VAR_10 )
{
 struct pcap_linux *VAR_11 = VAR_10->priv;
 struct ifreq VAR_12;
 if (VAR_11->must_do_on_close != 0) {




  if (VAR_11->must_do_on_close & VAR_2) {
   FUNC_4(&VAR_12, 0, sizeof(VAR_12));
   FUNC_10(VAR_12.ifr_name, VAR_11->device,
       sizeof(VAR_12.ifr_name));
   if (FUNC_3(VAR_10->fd, VAR_5, &VAR_12) == -1) {
    FUNC_1(VAR_9,
        "Can't restore interface %s flags (SIOCGIFFLAGS failed: %s).\n"
        "Please adjust manually.\n"
        "Hint: This can't happen with Linux >= 2.2.0.\n",
        VAR_11->device, FUNC_9(VAR_8));
   } else {
    if (VAR_12.ifr_flags & VAR_0) {




     VAR_12.ifr_flags &= ~VAR_0;
     if (FUNC_3(VAR_10->fd, VAR_6,
         &VAR_12) == -1) {
      FUNC_1(VAR_9,
          "Can't restore interface %s flags (SIOCSIFFLAGS failed: %s).\n"
          "Please adjust manually.\n"
          "Hint: This can't happen with Linux >= 2.2.0.\n",
          VAR_11->device,
          FUNC_9(VAR_8));
     }
    }
   }
  }
  FUNC_8(VAR_10);
 }

 if (VAR_11->mondevice != ((void*)0)) {
  FUNC_2(VAR_11->mondevice);
  VAR_11->mondevice = ((void*)0);
 }
 if (VAR_11->device != ((void*)0)) {
  FUNC_2(VAR_11->device);
  VAR_11->device = ((void*)0);
 }
 FUNC_7(VAR_10);
}
