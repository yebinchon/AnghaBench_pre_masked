
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* desc; } ;


 int FUNC_0 (char*,...) ;
 TYPE_1__** VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3;
 FUNC_0("%s\n\n%s\n"
        "usage:\n"
        "  wpa_supplicant [-BddhKLqq"



        "t"



        "vW] [-P<pid file>] "
        "[-g<global ctrl>] \\\n"
        "        [-G<group>] \\\n"
        "        -i<ifname> -c<config file> [-C<ctrl>] [-D<driver>] "
        "[-p<driver_param>] \\\n"
        "        [-b<br_ifname>] [-e<entropy file>]"



        " \\\n"
        "        [-o<override driver>] [-O<override ctrl>] \\\n"
        "        [-N -i<ifname> -c<conf> [-C<ctrl>] "
        "[-D<driver>] \\\n"



        "        [-p<driver_param>] [-b<br_ifname>] [-I<config file>] "
        "...]\n"
        "\n"
        "drivers:\n",
        VAR_2, VAR_1);

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++) {
  FUNC_0("  %s = %s\n",
         VAR_0[VAR_3]->name,
         VAR_0[VAR_3]->desc);
 }


 FUNC_0("options:\n"
        "  -b = optional bridge interface name\n"
        "  -B = run daemon in the background\n"
        "  -c = Configuration file\n"
        "  -C = ctrl_interface parameter (only used if -c is not)\n"
        "  -d = increase debugging verbosity (-dd even more)\n"
        "  -D = driver name (can be multiple drivers: nl80211,wext)\n"
        "  -e = entropy file\n"



        "  -g = global ctrl_interface\n"
        "  -G = global ctrl_interface group\n"
        "  -h = show this help text\n"
        "  -i = interface name\n"
        "  -I = additional configuration file\n"
        "  -K = include keys (passwords, etc.) in debug output\n"
        "  -L = show license (BSD)\n"






        "  -N = start describing new interface\n"
        "  -o = override driver parameter for new interfaces\n"
        "  -O = override ctrl_interface parameter for new interfaces\n"
        "  -p = driver parameters\n"
        "  -P = PID file\n"
        "  -q = decrease debugging verbosity (-qq even less)\n"



        "  -t = include timestamp in debug messages\n"







        "  -v = show version\n"
        "  -W = wait for a control interface monitor before starting\n");

 FUNC_0("example:\n"
        "  wpa_supplicant -D%s -iwlan0 -c/etc/wpa_supplicant.conf\n",
        VAR_0[0] ? VAR_0[0]->name : "nl80211");

}
