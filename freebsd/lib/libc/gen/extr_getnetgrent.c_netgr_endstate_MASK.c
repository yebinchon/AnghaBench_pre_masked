
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netgrp {struct netgrp** ng_str; struct netgrp* ng_next; struct netgrp* l_line; struct netgrp* l_groupname; struct netgrp* l_next; } ;
struct netgr_state {int * st_nextgrp; struct netgrp* st_gr; struct netgrp* st_grname; struct netgrp* st_linehead; } ;
struct linelist {struct linelist** ng_str; struct linelist* ng_next; struct linelist* l_line; struct linelist* l_groupname; struct linelist* l_next; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct netgrp*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_3)
{
 struct linelist *VAR_4, *VAR_5;
 struct netgrp *VAR_6, *VAR_7;
 struct netgr_state *VAR_8;

 VAR_8 = (struct netgr_state *)VAR_3;
 VAR_4 = VAR_8->st_linehead;
 while (VAR_4 != ((void*)0)) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->l_next;
  FUNC_0(VAR_5->l_groupname);
  FUNC_0(VAR_5->l_line);
  FUNC_0(VAR_5);
 }
 VAR_8->st_linehead = ((void*)0);
 if (VAR_8->st_grname != ((void*)0)) {
  FUNC_0(VAR_8->st_grname);
  VAR_8->st_grname = ((void*)0);
 }
 VAR_6 = VAR_8->st_gr;
 while (VAR_6 != ((void*)0)) {
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->ng_next;
  FUNC_0(VAR_7->ng_str[VAR_1]);
  FUNC_0(VAR_7->ng_str[VAR_2]);
  FUNC_0(VAR_7->ng_str[VAR_0]);
  FUNC_0(VAR_7);
 }
 VAR_8->st_gr = ((void*)0);
 VAR_8->st_nextgrp = ((void*)0);
}
