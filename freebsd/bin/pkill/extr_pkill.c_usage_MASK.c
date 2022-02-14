
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 char* FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 const char *VAR_3;

 if (VAR_1)
  VAR_3 = "[-LSfilnoqvx] [-d delim]";
 else
  VAR_3 = "[-signal] [-ILfilnovx]";

 FUNC_1(VAR_2,
  "usage: %s %s [-F pidfile] [-G gid] [-M core] [-N system]\n"
  "             [-P ppid] [-U uid] [-c class] [-g pgrp] [-j jail]\n"
  "             [-s sid] [-t tty] [-u euid] pattern ...\n",
  FUNC_2(), VAR_3);

 FUNC_0(VAR_0);
}
