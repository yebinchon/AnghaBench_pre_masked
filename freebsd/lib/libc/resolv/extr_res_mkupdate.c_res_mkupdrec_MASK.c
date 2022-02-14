
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int ;
struct TYPE_4__ {scalar_t__ r_section; int r_ttl; scalar_t__ r_type; scalar_t__ r_class; int r_dname; } ;
typedef TYPE_1__ ns_updrec ;
typedef scalar_t__ ns_type ;
typedef scalar_t__ ns_sect ;
typedef scalar_t__ ns_class ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char const*) ;

ns_updrec *
FUNC_4(int VAR_2, const char *VAR_3,
      u_int VAR_4, u_int VAR_5, u_long VAR_6) {
 ns_updrec *VAR_7 = (ns_updrec *)FUNC_1(1, sizeof(ns_updrec));

 if (!VAR_7 || !(VAR_7->r_dname = FUNC_3(VAR_3))) {
  if (VAR_7)
   FUNC_2((char *)VAR_7);
  return (((void*)0));
 }
 FUNC_0(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_0);
  VAR_7->r_class = (ns_class)VAR_4;
 VAR_7->r_type = (ns_type)VAR_5;
 VAR_7->r_ttl = VAR_6;
 VAR_7->r_section = (ns_sect)VAR_2;
 return (VAR_7);
}
