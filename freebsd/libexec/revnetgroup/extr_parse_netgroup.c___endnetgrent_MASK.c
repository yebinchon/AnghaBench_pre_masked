
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netgrp {char** ng_str; struct netgrp* ng_next; } ;
struct linelist {char* l_groupname; char* l_line; struct linelist* l_next; } ;
struct TYPE_2__ {char* grname; struct netgrp* gr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_3 ;
 struct linelist* VAR_4 ;

void
FUNC_1(void)
{
 struct linelist *VAR_5, *VAR_6;
 struct netgrp *VAR_7, *VAR_8;

 VAR_5 = VAR_4;
 while (VAR_5) {
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->l_next;
  FUNC_0(VAR_6->l_groupname);
  FUNC_0(VAR_6->l_line);
  FUNC_0((char *)VAR_6);
 }
 VAR_4 = (struct linelist *)0;
 if (VAR_3.grname) {
  FUNC_0(VAR_3.grname);
  VAR_3.grname = (char *)0;
 }
 VAR_7 = VAR_3.gr;
 while (VAR_7) {
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->ng_next;
  if (VAR_8->ng_str[VAR_1])
   FUNC_0(VAR_8->ng_str[VAR_1]);
  if (VAR_8->ng_str[VAR_2])
   FUNC_0(VAR_8->ng_str[VAR_2]);
  if (VAR_8->ng_str[VAR_0])
   FUNC_0(VAR_8->ng_str[VAR_0]);
  FUNC_0((char *)VAR_8);
 }
 VAR_3.gr = (struct netgrp *)0;
}
