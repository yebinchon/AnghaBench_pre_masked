
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FILEOBJ ;
 int MSGQIDOBJ ;
 int OPT_of ;
 int OPT_om ;
 int OPT_op ;
 int OPT_ose ;
 int OPT_osh ;
 int OPT_oso ;
 int PIDOBJ ;
 int SEMIDOBJ ;
 int SETOPT (int ,int ) ;
 int SHMIDOBJ ;
 int SOCKOBJ ;
 int opttochk ;
 char* p_fileobj ;
 char* p_msgqobj ;
 char* p_pidobj ;
 char* p_semobj ;
 char* p_shmobj ;
 char* p_sockobj ;
 int parse_regexp (char*) ;
 int strcmp (char*,int ) ;
 int usage (char*) ;

__attribute__((used)) static void
parse_object_type(char *name, char *val)
{
 if (val == ((void*)0))
  return;

 if (!strcmp(name, FILEOBJ)) {
  p_fileobj = val;
  parse_regexp(val);
  SETOPT(opttochk, OPT_of);
 } else if (!strcmp(name, MSGQIDOBJ)) {
  p_msgqobj = val;
  SETOPT(opttochk, OPT_om);
 } else if (!strcmp(name, PIDOBJ)) {
  p_pidobj = val;
  SETOPT(opttochk, OPT_op);
 } else if (!strcmp(name, SEMIDOBJ)) {
  p_semobj = val;
  SETOPT(opttochk, OPT_ose);
 } else if (!strcmp(name, SHMIDOBJ)) {
  p_shmobj = val;
  SETOPT(opttochk, OPT_osh);
 } else if (!strcmp(name, SOCKOBJ)) {
  p_sockobj = val;
  SETOPT(opttochk, OPT_oso);
 } else
  usage("unknown value for -o");
}
