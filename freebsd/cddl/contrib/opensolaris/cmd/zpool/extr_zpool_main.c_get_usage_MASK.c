
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_help_t ;
 int FUNC_0 () ;
 char const* FUNC_1 (char*) ;

__attribute__((used)) static const char *
FUNC_2(zpool_help_t VAR_0)
{
 switch (VAR_0) {
 case 154:
  return (FUNC_1("\tadd [-fn] <pool> <vdev> ...\n"));
 case 153:
  return (FUNC_1("\tattach [-f] <pool> <device> "
      "<new-device>\n"));
 case 151:
  return (FUNC_1("\tclear [-nF] <pool> [device]\n"));
 case 150:
  return (FUNC_1("\tcreate [-fnd] [-B] "
      "[-o property=value] ... \n"
      "\t    [-O file-system-property=value] ...\n"
      "\t    [-m mountpoint] [-R root] [-t tempname] "
      "<pool> <vdev> ...\n"));
 case 152:
  return (FUNC_1("\tcheckpoint [--discard] <pool> ...\n"));
 case 149:
  return (FUNC_1("\tdestroy [-f] <pool>\n"));
 case 148:
  return (FUNC_1("\tdetach <pool> <device>\n"));
 case 147:
  return (FUNC_1("\texport [-f] <pool> ...\n"));
 case 145:
  return (FUNC_1("\thistory [-il] [<pool>] ...\n"));
 case 144:
  return (FUNC_1("\timport [-d dir] [-D]\n"
      "\timport [-o mntopts] [-o property=value] ... \n"
      "\t    [-d dir | -c cachefile] [-D] [-f] [-m] [-N] "
      "[-R root] [-F [-n]] -a\n"
      "\timport [-o mntopts] [-o property=value] ... \n"
      "\t    [-d dir | -c cachefile] [-D] [-f] [-m] [-N] "
      "[-R root] [-F [-n]] [-t]\n"
      "\t    [--rewind-to-checkpoint] <pool | id> [newpool]\n"));
 case 142:
  return (FUNC_1("\tiostat [-v] [-T d|u] [pool] ... [interval "
      "[count]]\n"));
 case 141:
  return (FUNC_1("\tlabelclear [-f] <vdev>\n"));
 case 140:
  return (FUNC_1("\tlist [-Hpv] [-o property[,...]] "
      "[-T d|u] [pool] ... [interval [count]]\n"));
 case 139:
  return (FUNC_1("\toffline [-t] <pool> <device> ...\n"));
 case 138:
  return (FUNC_1("\tonline [-e] <pool> <device> ...\n"));
 case 134:
  return (FUNC_1("\treplace [-f] <pool> <device> "
      "[new-device]\n"));
 case 136:
  return (FUNC_1("\tremove [-nps] <pool> <device> ...\n"));
 case 135:
  return (FUNC_1("\treopen <pool>\n"));
 case 143:
  return (FUNC_1("\tinitialize [-cs] <pool> [<device> ...]\n"));
 case 133:
  return (FUNC_1("\tscrub [-s | -p] <pool> ...\n"));
 case 130:
  return (FUNC_1("\tstatus [-vx] [-T d|u] [pool] ... [interval "
      "[count]]\n"));
 case 128:
  return (FUNC_1("\tupgrade [-v]\n"
      "\tupgrade [-V version] <-a | pool ...>\n"));
 case 146:
  return (FUNC_1("\tget [-Hp] [-o \"all\" | field[,...]] "
      "<\"all\" | property[,...]> <pool> ...\n"));
 case 132:
  return (FUNC_1("\tset <property=value> <pool> \n"));
 case 131:
  return (FUNC_1("\tsplit [-n] [-R altroot] [-o mntopts]\n"
      "\t    [-o property=value] <pool> <newpool> "
      "[<device> ...]\n"));
 case 137:
  return (FUNC_1("\treguid <pool>\n"));
 case 129:
  return (FUNC_1("\tsync [pool] ...\n"));
 }

 FUNC_0();

}
