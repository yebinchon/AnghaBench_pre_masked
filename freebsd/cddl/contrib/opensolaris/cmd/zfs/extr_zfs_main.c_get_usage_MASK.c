
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_help_t ;
 int FUNC_0 () ;
 char const* FUNC_1 (char*) ;

__attribute__((used)) static const char *
FUNC_2(zfs_help_t VAR_0)
{
 switch (VAR_0) {
 case 155:
  return (FUNC_1("\tclone [-p] [-o property=value] ... "
      "<snapshot> <filesystem|volume>\n"));
 case 154:
  return (FUNC_1("\tcreate [-pu] [-o property=value] ... "
      "<filesystem>\n"
      "\tcreate [-ps] [-b blocksize] [-o property=value] ... "
      "-V <size> <volume>\n"));
 case 153:
  return (FUNC_1("\tdestroy [-fnpRrv] <filesystem|volume>\n"
      "\tdestroy [-dnpRrv] "
      "<filesystem|volume>@<snap>[%<snap>][,...]\n"
      "\tdestroy <filesystem|volume>#<bookmark>\n"));
 case 151:
  return (FUNC_1("\tget [-rHp] [-d max] "
      "[-o \"all\" | field[,...]]\n"
      "\t    [-t type[,...]] [-s source[,...]]\n"
      "\t    <\"all\" | property[,...]> "
      "[filesystem|volume|snapshot|bookmark] ...\n"));
 case 147:
  return (FUNC_1("\tinherit [-rS] <property> "
      "<filesystem|volume|snapshot> ...\n"));
 case 129:
  return (FUNC_1("\tupgrade [-v]\n"
      "\tupgrade [-r] [-V version] <-a | filesystem ...>\n"));
 case 146:
  return (FUNC_1("\tjail <jailid|jailname> <filesystem>\n"));
 case 132:
  return (FUNC_1("\tunjail <jailid|jailname> <filesystem>\n"));
 case 145:
  return (FUNC_1("\tlist [-Hp] [-r|-d max] [-o property[,...]] "
      "[-s property]...\n\t    [-S property]... [-t type[,...]] "
      "[filesystem|volume|snapshot] ...\n"));
 case 144:
  return (FUNC_1("\tmount\n"
      "\tmount [-vO] [-o opts] <-a | filesystem>\n"));
 case 143:
  return (FUNC_1("\tpromote <clone-filesystem>\n"));
 case 142:
  return (FUNC_1("\treceive|recv [-vnsFu] <filesystem|volume|"
      "snapshot>\n"
      "\treceive|recv [-vnsFu] [-o origin=<snapshot>] [-d | -e] "
      "<filesystem>\n"
      "\treceive|recv -A <filesystem|volume>\n"));
 case 139:
  return (FUNC_1("\trename [-f] <filesystem|volume|snapshot> "
      "<filesystem|volume|snapshot>\n"
      "\trename [-f] -p <filesystem|volume> <filesystem|volume>\n"
      "\trename -r <snapshot> <snapshot>\n"
      "\trename <bookmark> <bookmark>\n"
      "\trename -u [-p] <filesystem> <filesystem>"));
 case 138:
  return (FUNC_1("\trollback [-rRf] <snapshot>\n"));
 case 137:
  return (FUNC_1("\tsend [-DnPpRvLec] [-[iI] snapshot] "
      "<snapshot>\n"
      "\tsend [-LPcenv] [-i snapshot|bookmark] "
      "<filesystem|volume|snapshot>\n"
      "\tsend [-nvPe] -t <receive_resume_token>\n"));
 case 136:
  return (FUNC_1("\tset <property=value> ... "
      "<filesystem|volume|snapshot> ...\n"));
 case 135:
  return (FUNC_1("\tshare <-a | filesystem>\n"));
 case 134:
  return (FUNC_1("\tsnapshot|snap [-r] [-o property=value] ... "
      "<filesystem|volume>@<snap> ...\n"));
 case 131:
  return (FUNC_1("\tunmount|umount [-f] "
      "<-a | filesystem|mountpoint>\n"));
 case 130:
  return (FUNC_1("\tunshare "
      "<-a | filesystem|mountpoint>\n"));
 case 158:
  return (FUNC_1("\tallow <filesystem|volume>\n"
      "\tallow [-ldug] "
      "<\"everyone\"|user|group>[,...] <perm|@setname>[,...]\n"
      "\t    <filesystem|volume>\n"
      "\tallow [-ld] -e <perm|@setname>[,...] "
      "<filesystem|volume>\n"
      "\tallow -c <perm|@setname>[,...] <filesystem|volume>\n"
      "\tallow -s @setname <perm|@setname>[,...] "
      "<filesystem|volume>\n"));
 case 133:
  return (FUNC_1("\tunallow [-rldug] "
      "<\"everyone\"|user|group>[,...]\n"
      "\t    [<perm|@setname>[,...]] <filesystem|volume>\n"
      "\tunallow [-rld] -e [<perm|@setname>[,...]] "
      "<filesystem|volume>\n"
      "\tunallow [-r] -c [<perm|@setname>[,...]] "
      "<filesystem|volume>\n"
      "\tunallow [-r] -s @setname [<perm|@setname>[,...]] "
      "<filesystem|volume>\n"));
 case 128:
  return (FUNC_1("\tuserspace [-Hinp] [-o field[,...]] "
      "[-s field] ...\n"
      "\t    [-S field] ... [-t type[,...]] "
      "<filesystem|snapshot>\n"));
 case 150:
  return (FUNC_1("\tgroupspace [-Hinp] [-o field[,...]] "
      "[-s field] ...\n"
      "\t    [-S field] ... [-t type[,...]] "
      "<filesystem|snapshot>\n"));
 case 149:
  return (FUNC_1("\thold [-r] <tag> <snapshot> ...\n"));
 case 148:
  return (FUNC_1("\tholds [-Hp] [-r|-d depth] "
      "<filesystem|volume|snapshot> ...\n"));
 case 141:
  return (FUNC_1("\trelease [-r] <tag> <snapshot> ...\n"));
 case 152:
  return (FUNC_1("\tdiff [-FHt] <snapshot> "
      "[snapshot|filesystem]\n"));
 case 140:
  return (FUNC_1("\tremap <filesystem | volume>\n"));
 case 157:
  return (FUNC_1("\tbookmark <snapshot> <bookmark>\n"));
 case 156:
  return (FUNC_1("\tprogram [-jn] [-t <instruction limit>] "
      "[-m <memory limit (b)>] <pool> <program file> "
      "[lua args...]\n"));
 }

 FUNC_0();

}
